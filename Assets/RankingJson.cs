using UnityEngine;
using System.Collections;

[System.Serializable]
public class JsonStatus
{
    public int[] rank;
    public int[] point;
    public string[] userName;
}

public class RankingJson : MonoBehaviour
{
    JsonStatus _jsonStatus;

    [SerializeField]
    RankingGameManager _rankingGameManager;

    public void StartJSON()
    {
        _rankingGameManager = GetComponent<RankingGameManager>();
        StartCoroutine("GetJSON");
    }

    IEnumerator GetJSON()
    {
        //phpへ送るデータの格納
        WWWForm form = new WWWForm();

        form.AddField("point", _rankingGameManager.tapCount);
        form.AddField("userName", _rankingGameManager.userName);

        WWW www;
        // webサーバへアクセス
        www = new WWW("http://133.130.96.139/php/ranking/ranking.php", form.data);
        // webサーバから何らかの返答があるまで停止
        yield return www;
        // もし、何らかのエラーがあったら
        if (!string.IsNullOrEmpty(www.error))
        {
            // エラー内容を表示
            Debug.LogError(string.Format("Fail Whale!\n{0}", www.error));
            yield break; // コルーチンを終了
        }
        // webサーバからの内容を文字列変数に格納
        string json = www.text;
        _jsonStatus = new JsonStatus();

        _jsonStatus = JsonUtility.FromJson<JsonStatus>(json);

        _rankingGameManager.ActiveRankingPanel();
    }

    public int[] RankGet()
    {
        return _jsonStatus.rank;
    }

    public int[] PointGet()
    {
        return _jsonStatus.point;
    }

    public string[] UserNameGet()
    {
        return _jsonStatus.userName;
    }
}
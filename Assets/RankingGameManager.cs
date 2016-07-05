using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class RankingGameManager : MonoBehaviour {
    [SerializeField]
    public GameObject titlePanel;
    [SerializeField]
    public GameObject inputPanel;
    [SerializeField]
    public GameObject rankingPanel;
    [SerializeField]
    public GameObject endPanel;

    private double time = 3;
    public int tapCount;

    [SerializeField]
    public Text timeLabel;
    [SerializeField]
    public Text tapLabel;
    [SerializeField]
    public Text rankingLabel;

    [SerializeField]
    public InputField inputField;
    public string userName;

    bool isGameStart = false;

    public void StartGame()
    {
        isGameStart = true;
    }

    void Update()
    {
        if (isGameStart)
        {
            time -= Time.deltaTime;
            if (time > 0)
            {
                timeLabel.text = time.ToString();
            }
            else
            {
                timeLabel.text = 0.ToString();
                endPanel.SetActive(true);
            }
        }
    }

    public void Tap () {
        tapLabel.text = ((tapCount++) + 1).ToString();
    }

    public void TapEndPanel()
    {
        endPanel.SetActive(false);
        GetComponent<RankingJson>().StartJSON();
    }

    public void ActiveRankingPanel()
    {
        rankingPanel.SetActive(true);

        int[] ranking = GetComponent<RankingJson>().RankGet();
        int[] rankingPoint = GetComponent<RankingJson>().PointGet();
        string[] rankUserName = GetComponent<RankingJson>().UserNameGet();
        for (int i = 0;i < rankingPoint.Length; i++)
        {
            rankingLabel.text += string.Format("{0}位:{1} {2}pt \n", ranking[i], rankUserName[i],rankingPoint[i]);
        }
    }

    public void TapRankingPanel()
    {
        Application.LoadLevel("TapRanking");
    }
}

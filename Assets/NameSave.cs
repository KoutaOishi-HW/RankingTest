using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

[Serializable]
public class NameSave : MonoBehaviour
{
    private String NAME_KEY = "namekey";
    RankingGameManager _rankingGameManager;

    void Start()
    {
        _rankingGameManager = GetComponent<RankingGameManager>();
    }

    public void NameCheckLocal()
    {
        _rankingGameManager.titlePanel.SetActive(false);

        if (PlayerPrefs.GetString(NAME_KEY, "") == "")
        {
            InputNameActive();
        }
        else
        {
            NameLoadLocal();
        }
    }

    public void InputNameActive()
    {
        _rankingGameManager.inputPanel.SetActive(true);
    }

    public void InputDeckNameChangeButton()
    {
        if (_rankingGameManager.inputField.text != "")
        {
            _rankingGameManager.inputPanel.SetActive(false);

            _rankingGameManager.userName = _rankingGameManager.inputField.text;
            NameSaveLocal(_rankingGameManager.inputField.text);
        }
    }

    public void NameSaveLocal(string userName)
    {
        PlayerPrefs.SetString(NAME_KEY, userName);
        _rankingGameManager.StartGame();
    }

    public void NameLoadLocal()
    {
        _rankingGameManager.userName = PlayerPrefs.GetString(NAME_KEY);
        _rankingGameManager.StartGame();
    }
}
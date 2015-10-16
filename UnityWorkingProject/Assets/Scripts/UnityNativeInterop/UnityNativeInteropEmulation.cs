using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UnityNativeInteropEmulation : MonoBehaviour
{
    public static void CreateEmulation()
    {
        GameObject temp = Resources.Load("UnityNativeInterop/emui", typeof(GameObject)) as GameObject;
        Instantiate(temp, Vector3.zero, Quaternion.identity);
    }

    void Start()
    {
        GameObject.Find("UnloadButton").GetComponent<Button>().onClick.AddListener(OnUnloadSceneBtn);
        GameObject.Find("LoadScene1Button").GetComponent<Button>().onClick.AddListener(OnLoadScene1Btn);
        GameObject.Find("LoadScene2Button").GetComponent<Button>().onClick.AddListener(OnLoadScene2Btn);
    }

    public void OnLoadScene1Btn()
    {
        uninterop.UnityNativeInterop.onNativeRequestedScene("scene1");
    }

    public void OnLoadScene2Btn()
    {
        uninterop.UnityNativeInterop.onNativeRequestedScene("scene2");
    }

    public void OnUnloadSceneBtn()
    {
        uninterop.UnityNativeInterop.onNativeRequestedUnload();
    }

}

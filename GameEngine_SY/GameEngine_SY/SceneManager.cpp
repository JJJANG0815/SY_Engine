#include "SceneManager.h"


namespace SY
{
	std::map<std::wstring, Scene*> SceneManager::mScene;
	Scene* SceneManager::mActiveScene = nullptr;

	void SceneManager::Init()
	{

	}
	void SceneManager::Update()
	{
		mActiveScene->Update();

		ChangeScene();

	}
	void SceneManager::LateUpdate()
	{
		mActiveScene->LateUpdate();
	}
	void SceneManager::Render(HDC hdc)
	{
		mActiveScene->Render(hdc);
	}

	void SceneManager::ChangeScene()
	{
		if (Input::GetKey(ekeyCode::Z))
		{
			SceneManager::LoadScene(L"TitleScene");
		}
		if (Input::GetKey(ekeyCode::X))
		{
			SceneManager::LoadScene(L"PlayScene");
		}
		if (Input::GetKey(ekeyCode::C))
		{
			SceneManager::LoadScene(L"EndScene");
		}
	}
}
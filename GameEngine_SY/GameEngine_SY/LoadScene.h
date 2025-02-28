#pragma once

#include "SceneManager.h"

#include "TitleScene.h"
#include "EndScene.h"
#include "PlayScene.h"

namespace SY
{
	void LoadScenes()
	{
		SceneManager::CreateScene<TitleScene>(L"TitleScene");
		SceneManager::CreateScene<PlayScene>(L"PlayScene");
		SceneManager::CreateScene<EndScene>(L"EndScene");

		//첫화면을 설정해줌
		SceneManager::LoadScene(L"TitleScene");
	}
}

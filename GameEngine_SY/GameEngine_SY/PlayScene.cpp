#include "PlayScene.h"

namespace SY
{
	PlayScene::PlayScene()
	{
	}
	PlayScene::~PlayScene()
	{
	}
	void PlayScene::Init()
	{
	}
	void PlayScene::Update()
	{
		Scene::Update();
	}
	void PlayScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void PlayScene::Render(HDC hdc)
	{
		Ellipse(hdc, 400, 600, 900, 900);
		Scene::Render(hdc);
	}
}
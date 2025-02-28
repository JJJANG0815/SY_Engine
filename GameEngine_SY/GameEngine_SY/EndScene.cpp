#include "EndScene.h"

namespace SY
{
	EndScene::EndScene()
	{
	}
	EndScene::~EndScene()
	{
	}
	void EndScene::Init()
	{
	}
	void EndScene::Update()
	{
		Scene::Update();
	}
	void EndScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void EndScene::Render(HDC hdc)
	{
		Ellipse(hdc, 600, 600, 900, 900);
		Scene::Render(hdc);
	}
}
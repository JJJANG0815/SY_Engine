#include "TitleScene.h"

namespace SY
{
	TitleScene::TitleScene()
	{
	}
	TitleScene::~TitleScene()
	{
	}
	void TitleScene::Init()
	{
		//주소 생성:
		GameObject* object = new GameObject();


		Transform* transform = object->AddComponent<Transform>();
		SpriteRenderer* spriterenderer = object->AddComponent<SpriteRenderer>();
		PlayerController* playercontroller = object->AddComponent<PlayerController>();



		//오브젝트 생성:
		AddGameObject(object);
	}
	void TitleScene::Update()
	{
		//상속받아 진행:
		Scene::Update();
	}
	void TitleScene::LateUpdate()
	{
		//상속받아 진행:
		Scene::LateUpdate();
	}
	void TitleScene::Render(HDC hdc)
	{
		//상속받아 진행:
		Scene::Render(hdc);
	}
}
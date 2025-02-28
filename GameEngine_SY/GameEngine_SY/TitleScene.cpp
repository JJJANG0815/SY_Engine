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
		//�ּ� ����:
		GameObject* object = new GameObject();


		Transform* transform = object->AddComponent<Transform>();
		SpriteRenderer* spriterenderer = object->AddComponent<SpriteRenderer>();
		PlayerController* playercontroller = object->AddComponent<PlayerController>();



		//������Ʈ ����:
		AddGameObject(object);
	}
	void TitleScene::Update()
	{
		//��ӹ޾� ����:
		Scene::Update();
	}
	void TitleScene::LateUpdate()
	{
		//��ӹ޾� ����:
		Scene::LateUpdate();
	}
	void TitleScene::Render(HDC hdc)
	{
		//��ӹ޾� ����:
		Scene::Render(hdc);
	}
}
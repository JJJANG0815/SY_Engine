#include "Scene.h"


namespace SY
{
	SY::Scene::Scene()
		:mGameObjects{}
	{
	}
	SY::Scene::~Scene()
	{
		for (GameObject* gameObj : mGameObjects)
		{
			delete gameObj;
		}
		mGameObjects.clear();
	}
	void Scene::Init()
	{
	}
	void Scene::Update()
	{
		//�����迭�� ���� ũ�Ⱑ ����������������, .size() �Լ��� ũ�� ���� �޾ƿͼ� ������ �����Ѵ�.
		/*for (size_t i = 0; i < mGameObjects.size(); i++)
		{
			mGameObjects[i]->Update();

		}*/

		for (GameObject* gameObj : mGameObjects)
		{
			gameObj->Update();
		}

	}
	void Scene::LateUpdate()
	{
		for (GameObject* gameObj : mGameObjects)
		{
			gameObj->LateUpdate();
		}
	}
	void Scene::Render(HDC hdc)
	{
		for (GameObject* gameObj : mGameObjects)
		{
			gameObj->Render(hdc);
		}
	}
	void Scene::AddGameObject(GameObject* gameObject)
	{
		//�迭 �߰� ����
		//�������� �������� �迭 ũ�� ���� ����
		mGameObjects.push_back(gameObject);
	}
}
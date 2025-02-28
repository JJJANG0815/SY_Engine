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
		//동적배열은 최종 크기가 정해져있지않으니, .size() 함수로 크기 값을 받아와서 포문을 실행한다.
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
		//배열 추가 생성
		//포문으로 동적으로 배열 크기 설정 가능
		mGameObjects.push_back(gameObject);
	}
}
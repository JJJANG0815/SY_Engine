#pragma once
#include "Scene.h"
#include "Input.h"
#include "CommonInclude.h"

namespace SY
{
	class SceneManager
	{
	public:


		//T에 여러가지 클래스를 대입 가능
		template<typename T>
		static Scene* CreateScene(const std::wstring& name)
		{
			T* scene = new T();
			scene->SetName(name);
			scene->Init();

			//push_back 이랑 같은 동적 배열
			//두칸씩 할당

			mScene.insert(std::make_pair(name, scene));

			return scene;
		}

		//LoadScene 호출되면 mActiveScene이 변경됨
		static Scene* LoadScene(const std::wstring& name)
		{
			//iter->first → std::wstring (키) → 이경우 mScene.find(name)로 검색 및 입력
			//iter->second → Scene* (값) → first 에 페어링 된 값
			//iter->second를 반환하는 것은, 찾은 Scene* 을 리턴하는 것
			//mActiveScene = iter->second; → 활성화된 씬을 찾은 씬으로 설정

			std::map<std::wstring, Scene*>::iterator iter
				= mScene.find(name);

			if (iter == mScene.end())
				return nullptr;

			mActiveScene = iter->second;

			return iter->second;
		}

		static void Init();
		static void Update();
		static void LateUpdate();
		static void Render(HDC hdc);

		static void ChangeScene();

	private:

		static std::map<std::wstring, Scene*> mScene;
		static Scene* mActiveScene;
	};
}

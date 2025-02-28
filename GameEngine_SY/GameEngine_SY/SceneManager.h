#pragma once
#include "Scene.h"
#include "Input.h"
#include "CommonInclude.h"

namespace SY
{
	class SceneManager
	{
	public:


		//T�� �������� Ŭ������ ���� ����
		template<typename T>
		static Scene* CreateScene(const std::wstring& name)
		{
			T* scene = new T();
			scene->SetName(name);
			scene->Init();

			//push_back �̶� ���� ���� �迭
			//��ĭ�� �Ҵ�

			mScene.insert(std::make_pair(name, scene));

			return scene;
		}

		//LoadScene ȣ��Ǹ� mActiveScene�� �����
		static Scene* LoadScene(const std::wstring& name)
		{
			//iter->first �� std::wstring (Ű) �� �̰�� mScene.find(name)�� �˻� �� �Է�
			//iter->second �� Scene* (��) �� first �� �� �� ��
			//iter->second�� ��ȯ�ϴ� ����, ã�� Scene* �� �����ϴ� ��
			//mActiveScene = iter->second; �� Ȱ��ȭ�� ���� ã�� ������ ����

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

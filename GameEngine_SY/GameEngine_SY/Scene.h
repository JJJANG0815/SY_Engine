#pragma once
#include "Entity.h"	
#include "GameObject.h"

namespace SY
{
	class Scene : public Entity
	{
	public:
		Scene();
		virtual ~Scene();

		virtual void Init();
		virtual void Update();
		virtual void LateUpdate();
		virtual void Render(HDC hdc);

		void AddGameObject(GameObject* gameObject);

	private:

		//���� ������Ʈ ���� �迭 ����
		//���� �迭�� ĭ���� �̸� �Ҵ�
		//���� �迭�� 0���� �����ؼ� push_back �Ҷ����� �Ҵ�

		std::vector<GameObject*> mGameObjects;

	};
}

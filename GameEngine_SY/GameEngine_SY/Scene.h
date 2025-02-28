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

		//게임 오브젝트 동적 배열 생성
		//정적 배열은 칸수를 미리 할당
		//동적 배열은 0에서 시작해서 push_back 할때마다 할당

		std::vector<GameObject*> mGameObjects;

	};
}

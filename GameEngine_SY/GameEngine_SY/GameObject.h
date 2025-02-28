#pragma once
#include "CommonInclude.h"


namespace SY
{
	class Component;

	class GameObject
	{
	public:
		GameObject();
		~GameObject();

		virtual void Init();
		void Update();
		void LateUpdate();
		void Render(HDC hdc);

		template <typename T>
		T* AddComponent();

		template <typename T>
		T* GetComponent();

	private:

		std::vector<Component*> mComponents;

	};

	template<typename T>
	T* GameObject::AddComponent()
	{
		T* comp = new T();
		comp->SetOwner(this);
		mComponents.push_back(comp);
		return comp;
	}

	template <typename T>
	T* GameObject::GetComponent()
	{
		for (Component* comp : mComponents)
		{
			if (T* castedComp = dynamic_cast<T*>(comp))
				return castedComp;
		}
		return nullptr;
	}
}


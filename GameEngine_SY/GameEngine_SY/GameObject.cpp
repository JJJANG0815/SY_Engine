#include "Component.h"
#include "GameObject.h"
#include "Input.h"


namespace SY
{
	GameObject::GameObject()
	{
	}
	GameObject::~GameObject()
	{
		for (Component* comp : mComponents)
		{
			delete comp;
		}
		mComponents.clear();
	}

	void GameObject::Init()
	{
		for (Component* comp : mComponents)
		{
			comp->Init();
		}
	}

	void GameObject::Update()
	{
		for (Component* comp : mComponents)
		{
			comp->Update();
		}
	}
	void GameObject::LateUpdate()
	{
		for (Component* comp : mComponents)
		{
			comp->LateUpdate();
		}
	}
	void GameObject::Render(HDC hdc)
	{
		for (Component* comp : mComponents)
		{
			comp->Render(hdc);
		}
	}
}
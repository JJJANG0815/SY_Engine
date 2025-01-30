#include "GameObject.h"
#include"Input.h"

namespace SY
{
	GameObject::GameObject()
		:mX(0.0f), mY(0.0f), mSpeed(0.0f)
	{
	}
	GameObject::~GameObject()
	{
	}
	void GameObject::Update()
	{

		if (Input::GetKey(ekeyCode::A))
		{
			mX -= 0.01f;
		}
		if (Input::GetKey(ekeyCode::D))
		{
			mX += 0.01f;
		}
		if (Input::GetKey(ekeyCode::W))
		{
			mY -= 0.01f;
		}
		if (Input::GetKey(ekeyCode::S))
		{
			mY += 0.01f;
		}
	}
	void GameObject::LateUpdate()
	{
	}
	void GameObject::Render(HDC hdc)
	{

		Rectangle(hdc, 100 + mX, 100 + mY, 200 + mX, 200 + mY);
	}
}
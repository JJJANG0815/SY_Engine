#include "GameObject.h"

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

		if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		{
			mX -= 0.01f;
		}
		if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		{
			mX += 0.01f;
		}
		if (GetAsyncKeyState(VK_UP) & 0x8000)
		{
			mY -= 0.01f;
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000)
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
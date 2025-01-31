#include "GameObject.h"
#include"Input.h"
#include"Time.h"

namespace SY
{
	GameObject::GameObject()
		:mX(0.0f), mY(0.0f), mSpeed(0.0f), mHdc(NULL)	
	{
	}
	GameObject::~GameObject()
	{
	}
	void GameObject::Update()
	{
		const int speed = 100.0f;	
		if (Input::GetKey(ekeyCode::A))
		{
			mX -=speed*Time::DeltaTime();
		}
		if (Input::GetKey(ekeyCode::D))
		{
			mX += speed * Time::DeltaTime();
		}
		if (Input::GetKey(ekeyCode::W))
		{
			mY -= speed * Time::DeltaTime();
		}
		if (Input::GetKey(ekeyCode::S))
		{
			mY += speed * Time::DeltaTime();
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
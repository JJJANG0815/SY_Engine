#include "App.h"

namespace SY
{
	App::App()
		:mHwnd(NULL), mHdc(NULL), mSpeed(0.0f), mX(0.0f),mY(0.0f)
	{
		mSpeed = 0.01f;
	}
	App::~App()
	{
	}
	void App::Init(HWND hWnd)
	{
		mHwnd = hWnd;
		mHdc = GetDC(hWnd);
	}

	void App::Run()
	{
		Update();
		LateUpdate();
		Render();
	}

	void App::Update()
	{
		if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		{
			mX -= mSpeed;
		}
		if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		{
			mX += mSpeed;
		}
		if (GetAsyncKeyState(VK_UP) & 0x8000)
		{
			mY -= mSpeed;
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		{
			mY += mSpeed;
		}
	}
	void App::LateUpdate()
	{
	}
	void App::Render()
	{
		Rectangle(mHdc, 100 + mX, 100+mY, 200 + mX, 200+mY);
	}
}


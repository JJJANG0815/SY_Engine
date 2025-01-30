#include "App.h"
#include"Input.h"


namespace SY
{
	App::App()
		:mHwnd(NULL), mHdc(NULL)
	{
	}
	App::~App()
	{
	}
	void App::Init(HWND hWnd)
	{
		mHwnd = hWnd;
		mHdc = GetDC(hWnd);
		mPlayer.SetPosition(0.0f, 0.0f);	
		Input::Init();

	}

	void App::Run()
	{
		Update();
		LateUpdate();
		Render();
	}

	void App::Update()
	{
		Input::Update();
		mPlayer.Update();
	
	}
	void App::LateUpdate()
	{
	}	
	void App::Render()
	{
		mPlayer.Render(mHdc);

		
	}
}


#include "App.h"
#include"Input.h"
#include"Time.h"



namespace SY
{
	App::App()
		: mHwnd(NULL)
		, mHdc(NULL)
		, mWidth(0)
		, mHeight(0)
		, mBackHdc(NULL)
		, mBackBitmap(NULL)	

	{
	}
	App::~App()
	{
	}
	void App::Init(HWND hWnd, UINT width, UINT height)
	{
		mHwnd = hWnd;
		mHdc = GetDC(hWnd);

		RECT rect = { 0,0,width, height };
		AdjustWindowRect(&rect, WS_OVERLAPPEDWINDOW, false);

		mWidth = rect.right - rect.left;	
		mHeight = rect.bottom - rect.top;


		SetWindowPos(mHwnd, nullptr, 0,0, mWidth, mHeight,0 );
		ShowWindow(mHwnd, true);

		//윈도우 해상도에 맞는 백버퍼(도화지) 생성
		mBackBitmap = CreateCompatibleBitmap(mHdc, width, height);

		//백버퍼에 그림을 그리기 위한 HDC 생성
		mBackHdc = CreateCompatibleDC(mHdc);

		HBITMAP oldBitmap = (HBITMAP)SelectObject(mBackHdc, mBackBitmap);
			DeleteObject(oldBitmap);


		mPlayer.SetPosition(0.0f, 0.0f);	
		
		Input::Init();
		Time::Init();	

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
		Time::Update();

	
	}
	void App::LateUpdate()
	{
	}	
	void App::Render()
	{
		Rectangle(mBackHdc, 0, 0, 1600, 900);

		Time::Render(mBackHdc);	
		mPlayer.Render(mBackHdc);

		//백버퍼에 그린 그림을 원본 버퍼에 복사 (그려줌)
		BitBlt(mHdc, 0, 0, mWidth, mHeight, mBackHdc, 0, 0, SRCCOPY);

	}
}


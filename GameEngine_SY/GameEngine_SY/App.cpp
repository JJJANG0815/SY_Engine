#include "App.h"

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
		ReleaseDC(mHwnd, mHdc);
		DeleteDC(mBackHdc);
		DeleteObject(mBackBitmap);
	}
	void App::Init(HWND hWnd, UINT width, UINT height)
	{

		DoubleBuffer(hWnd, width, height);


		Input::Init();
		Time::Init();


		SceneManager::Init();

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
		Time::Update();

		SceneManager::Update();

	}
	void App::LateUpdate()
	{
	}
	void App::Render()
	{
		clearRenderTarget();

		SceneManager::Render(mBackHdc);

		copyRenderTarget(mBackHdc, mHdc);
	}

	//�������:
	void App::DoubleBuffer(HWND hWnd, UINT width, UINT height)
	{

		mHwnd = hWnd;
		mHdc = GetDC(hWnd);

		RECT rect = { 0,0,width, height };
		AdjustWindowRect(&rect, WS_OVERLAPPEDWINDOW, false);

		mWidth = rect.right - rect.left;
		mHeight = rect.bottom - rect.top;


		SetWindowPos(mHwnd, nullptr, 0, 0, mWidth, mHeight, 0);
		ShowWindow(mHwnd, true);

		//������ �ػ󵵿� �´� �����(��ȭ��) ����
		mBackBitmap = CreateCompatibleBitmap(mHdc, mWidth, mHeight);

		//����ۿ� �׸��� �׸��� ���� HDC ����
		mBackHdc = CreateCompatibleDC(mHdc);

		HBITMAP oldBitmap = (HBITMAP)SelectObject(mBackHdc, mBackBitmap);
		DeleteObject(oldBitmap);
	}
	void App::clearRenderTarget()
	{
		Rectangle(mBackHdc, 0, 0, mWidth, mHeight);
	}
	void App::copyRenderTarget(HDC source, HDC dest)
	{
		BitBlt(dest, 0, 0, mWidth, mHeight, source, 0, 0, SRCCOPY);
	}
}


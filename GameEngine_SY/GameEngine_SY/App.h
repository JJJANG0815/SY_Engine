#pragma once

#include "SceneManager.h"
#include "Time.h"

namespace SY
{
	class App
	{
	public:
		App();
		~App();

		void Init(HWND mHwnd, UINT width, UINT height);

		void Run();

		void Update();
		void LateUpdate();
		void Render();

		void DoubleBuffer(HWND hWnd, UINT width, UINT height);
		void clearRenderTarget();
		void copyRenderTarget(HDC source, HDC dest);

	private:

		HWND mHwnd;
		HDC mHdc;

		HDC mBackHdc;
		HBITMAP mBackBitmap;

		UINT mWidth;
		UINT mHeight;
	};
}

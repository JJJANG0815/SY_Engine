#pragma once
#include "GameObject.h"


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

	private:

		HWND mHwnd;
		HDC mHdc;

		HDC mBackHdc;
		HBITMAP mBackBitmap;



		UINT mWidth;
		UINT mHeight;

		GameObject mPlayer;

	};
}

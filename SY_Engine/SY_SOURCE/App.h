#pragma once
#include "GameObject.h"


namespace SY
{
	class App
	{
	public:
		App();
		~App();

		void Init(HWND mHwnd);

		void Run();

		void Update();
		void LateUpdate();
		void Render();

	private:

		HWND mHwnd;
		HDC mHdc;

		GameObject mPlayer;

	};
}

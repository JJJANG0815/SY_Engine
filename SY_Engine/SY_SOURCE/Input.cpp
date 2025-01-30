#include "Input.h"

namespace SY
{
	std::vector<Input::Key>Input::mKeys = {};

	int ASCII[] = { 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P',
		'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L',
		'Z', 'X', 'C', 'V', 'B', 'N', 'M',
		 VK_LEFT, VK_RIGHT, VK_UP, VK_DOWN,
	};



	void Input::Init()
	{
		for (size_t i = 0; i < (UINT)ekeyCode::End; i++)
		{
			Key key = {};
			key.bPressed = false;
			key.state = eKeyState::None;
			key.keyCode = (ekeyCode)i;

			mKeys.push_back(key);

		}
	}
	void Input::Update()
	{
		for (size_t i = 0; i < mKeys.size(); i++)
		{
			 
			//키가 눌렸다
			if (GetAsyncKeyState(ASCII[i]) & 0x8000)
			{
				if (mKeys[i].bPressed == true)
				{
					mKeys[i].state = eKeyState::Pressed;
				}
				else
				{
					mKeys[i].state = eKeyState::Down;

				}

				mKeys[i].state = eKeyState::Down;
			}
			else  //키가 안 눌렸다
			{
				if (mKeys[i].bPressed == true)
				{
					mKeys[i].state = eKeyState::Up;
				}
				else
				{
					mKeys[i].state = eKeyState::None;

				}
				mKeys[i].bPressed = false;

			}
		}

	}
}
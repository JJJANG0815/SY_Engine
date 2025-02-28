#include "Input.h"

namespace SY
{
	std::vector<Input::Key>Input::mKeys = {};

	int ASCII[(UINT)ekeyCode::End] =
	{
		'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P',
		'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L',
		'Z', 'X', 'C', 'V', 'B', 'N', 'M',
		 VK_LEFT, VK_RIGHT, VK_UP, VK_DOWN,
	};




	void Input::Init()
	{
		CreateKeys();
	}
	void Input::Update()
	{
		UpdateKeys();
	}



	void Input::CreateKeys()
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
	void Input::UpdateKeys()
	{
		for (size_t i = 0; i < mKeys.size(); i++)
		{

			//Ű�� ���ȴ�
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

				mKeys[i].bPressed = true;
			}
			else  //Ű�� �� ���ȴ�
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
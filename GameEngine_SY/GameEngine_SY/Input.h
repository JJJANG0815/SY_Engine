#pragma once
#include "CommonInclude.h"	
namespace SY
{
	enum class eKeyState
	{
		Down,
		Pressed,
		Up,
		None,
	};

	enum class ekeyCode
	{
		Q, W, E, R, T, Y, U, I, O, P,
		A, S, D, F, G, H, J, K, L,
		Z, X, C, V, B, N, M,
		LEFT, RIGHT, UP, DOWN,
		End,
	};

	class Input
	{

	public:
		struct Key
		{
			ekeyCode keyCode;
			eKeyState state;
			bool bPressed;
		};

		static void Init();
		static void Update();

		static void CreateKeys();
		static void UpdateKeys();


		static bool GetKeyDown(ekeyCode code) { return mKeys[(UINT)code].state == eKeyState::Down; }
		static bool GetKeyUp(ekeyCode code) { return mKeys[(UINT)code].state == eKeyState::Up; }
		static bool GetKey(ekeyCode code) {return mKeys[(UINT)code].state == eKeyState::Pressed;}

	private:

		static std::vector<Key>mKeys;
	};
}

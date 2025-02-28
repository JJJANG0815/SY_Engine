#pragma once
#include "CommonInclude.h"

	struct Vector2
	{

		Vector2() :mX(0.0f), mY(0.0f)
		{
		}
		Vector2(float _x, float _y) :mX(_x), mY(_y)
		{
		}

		float mX;
		float mY;

	};
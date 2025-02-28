#pragma once

#include "CommonInclude.h"

#include "Component.h"
#include "Transform.h"

namespace SY
{
	class SpriteRenderer :public Component
	{

	public:

		SpriteRenderer();
		~SpriteRenderer();

		virtual void Render(HDC hdc) override;

	private:

	};
}

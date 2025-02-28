#include "SpriteRenderer.h"

namespace SY
{
	SpriteRenderer::SpriteRenderer()
	{

	}

	SpriteRenderer::~SpriteRenderer()
	{

	}

	void SpriteRenderer::Render(HDC hdc)
	{
		Transform* transform = GetOwner()->GetComponent<Transform>();

		Vector2 location = transform->GetPosition();

		Rectangle(hdc, 100.0f + location.mX, 100.0f + location.mY, 200.0f + location.mX, 200.0f + location.mY);
	}
}

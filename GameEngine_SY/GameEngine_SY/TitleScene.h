#pragma once

#include "Scene.h"
#include "GameObject.h"
#include "SpriteRenderer.h"
#include "Transform.h"
#include "PlayerController.h"

namespace SY
{
	class TitleScene : public Scene
	{

	public:

		TitleScene();
		~TitleScene();

		void Init() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;

	private:

	};
}

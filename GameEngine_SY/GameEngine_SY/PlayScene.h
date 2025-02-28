#pragma once

#include "Scene.h"

namespace SY
{
	class PlayScene : public Scene
	{

	public:

		PlayScene();
		~PlayScene();

		void Init() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;

	private:

	};
}

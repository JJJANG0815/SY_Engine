#pragma once
#include "CommonInclude.h"
#include "Scene.h"

namespace SY
{
	class EndScene : public Scene
	{

	public:

		EndScene();
		~EndScene();

		void Init() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;

	private:

	};
}


#pragma once

#include "Component.h"
#include "Transform.h"
#include "Input.h"
#include "Time.h"

namespace SY
{
    class PlayerController : public Component
    {
    public:
        PlayerController();
        ~PlayerController();

        virtual void Update() override;

    private:
        float mSpeed;
    };

}
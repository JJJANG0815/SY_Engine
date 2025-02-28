#pragma once
#include "Component.h"
#include "Math.h"

namespace SY
{
    class Transform : public Component
    {
    public:

        Transform();
        ~Transform();

        void SetPosition(Vector2 pos) { mPosition.mX = pos.mX;mPosition.mY = pos.mY; }

        Vector2 GetPosition() { return mPosition; }

    private:

        Vector2 mPosition;
    };
}

#pragma once

#include "CommonInclude.h"
#include "GameObject.h"

namespace SY
{
    class GameObject;

    class Component
    {
    public:
        Component();
        virtual ~Component();

        void SetOwner(GameObject* owner) { mOwner = owner; }
        GameObject* GetOwner() { return mOwner; }

        virtual void Init();
        virtual void Update();
        virtual void LateUpdate();
        virtual void Render(HDC hdc);

    private:
        GameObject* mOwner;
    };
}
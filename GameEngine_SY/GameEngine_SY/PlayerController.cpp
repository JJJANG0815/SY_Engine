#include "PlayerController.h"

namespace SY
{
    PlayerController::PlayerController()
        : mSpeed(100.0f) // �̵� �ӵ� ����
    {
    }

    PlayerController::~PlayerController()
    {
    }

    void PlayerController::Update()
    {
        Transform* transform = GetOwner()->GetComponent<Transform>();

        Vector2 mPosition = transform->GetPosition();

        if (Input::GetKey(ekeyCode::LEFT))
        {
            mPosition.mX -= mSpeed * Time::DeltaTime();
        }
        if (Input::GetKey(ekeyCode::RIGHT))
        {
            mPosition.mX += mSpeed * Time::DeltaTime();
        }
        if (Input::GetKey(ekeyCode::UP))
        {
            mPosition.mY -= mSpeed * Time::DeltaTime();
        }
        if (Input::GetKey(ekeyCode::DOWN))
        {
            mPosition.mY += mSpeed * Time::DeltaTime();
        }

        transform->SetPosition(mPosition);
    }
}
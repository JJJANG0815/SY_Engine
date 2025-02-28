#pragma once
#include "CommonInclude.h"

namespace SY
{
	class Entity
	{
	public:
		Entity();
		virtual ~Entity();

		//wstring 은 L""등의 문자열을 저장한는 클래스
		//참조는 복사를 하지않고 참조만 한다
		//mName 객체에 중간다리 역할만 하기때문에
		//wstring 은 std 라이브러리에서 사용됨

		//이름 설정 하기
		void SetName(const std::wstring& name) { mName = name; }

		//이름 반환 하기
		std::wstring& GetName() { return mName; }
	private:
		std::wstring mName;
	};
}



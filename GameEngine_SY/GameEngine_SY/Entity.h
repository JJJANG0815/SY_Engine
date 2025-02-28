#pragma once
#include "CommonInclude.h"

namespace SY
{
	class Entity
	{
	public:
		Entity();
		virtual ~Entity();

		//wstring �� L""���� ���ڿ��� �����Ѵ� Ŭ����
		//������ ���縦 �����ʰ� ������ �Ѵ�
		//mName ��ü�� �߰��ٸ� ���Ҹ� �ϱ⶧����
		//wstring �� std ���̺귯������ ����

		//�̸� ���� �ϱ�
		void SetName(const std::wstring& name) { mName = name; }

		//�̸� ��ȯ �ϱ�
		std::wstring& GetName() { return mName; }
	private:
		std::wstring mName;
	};
}



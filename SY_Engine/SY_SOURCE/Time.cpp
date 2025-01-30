/*
#include "Time.h"


namespace SY
{
	static LARGE_INTEGER CpuFrequency = {};
	static LARGE_INTEGER PrevFrequency = {};
	static LARGE_INTEGER CurrentFrequency = {};
	static float mDeltaTime = 0.0f;


	void Time::Init()
	{
		//cpu 고유 진동수
		QueryPerformanceFrequency(&CpuFrequency);
		

		//
		QueryPerformanceCounter(&CurrentFrequency);

	}
	void Time::Update()
	{
	}
}
*/
#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_3 IT.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest061IT
{
	TEST_CLASS(UnitTest061IT)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int size = 7;
			int a[size] = { -6, 5, 0, -10, 3, 8, -2 };

			Assert::AreEqual(8, MaxEven(a, size));
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_3 REC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest061REC
{
	TEST_CLASS(UnitTest061REC)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int size = 7;
			int a[size] = { -6, 5, 0, -10, 3, 8, -2 };

			Assert::AreEqual(8, MaxEven(a, size, 0));
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../practice/functions.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestPractice
{
	TEST_CLASS(UnitTestPractice)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			functions fun;
			std::vector<int> arr{ 1, 14, 2, 16, 10, 20 };
			int result = fun.biggestDiff(arr);
			int expected = 19;

			Assert::AreEqual(expected, result);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../practice/functions.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestPractice
{
	TEST_CLASS(UnitTestPractice)
	{
	public:
		functions fun;

		TEST_METHOD(TestMethod1)
		{

			std::vector<int> arr{ 1, 14, 2, 16, 10, 20 };
			int result = fun.biggestDiff(arr);
			int expected = 19;

			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(TestMethod2)
		{
			std::vector<int> arr{ 1, 2, 3, 7, 5 };
			std::vector<int> result = fun.subarraySum(arr, 5, 15);
			std::vector<int> expected = { 3, 5 };

			Assert::IsTrue(expected == result);
		}
	};
}

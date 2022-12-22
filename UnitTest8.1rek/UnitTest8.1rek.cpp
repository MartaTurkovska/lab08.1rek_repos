#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_08.1(rek)/lab_08.1(rek).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81rek
{
	TEST_CLASS(UnitTest81rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int m = Count("This == +", 0);
			Assert::AreEqual(m, 3);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1.B/LongLong.h"
#include "../5.1.B/LongLong.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51B
{
	TEST_CLASS(UnitTest51B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong A(9, 10), B(0, 0);
			Assert::AreEqual(A * B, 90.);

		}
	};
}

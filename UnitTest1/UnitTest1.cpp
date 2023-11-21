#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5_5.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double z;
			int depth = 0;
			z = St(5.0, 4, depth, 1);
			Assert::AreEqual(z, 625, 0.00000001);

		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../simple-project/operators.h"
#include<math.h>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace simpletestproject
{
	TEST_CLASS(simpletestproject)
	{
	public:
		
		
		TEST_METHOD(Correctkoren)
		{
			double a = 1;
			double b = 10;
			double c = -39;
			double waitr = -10;
			double factr = koren(a, b, c);
			Assert::AreEqual(waitr, factr);
			Assert::AreEqual(waitr, factr);
		}
		TEST_METHOD(InCorrectkoren)
		{
			double a = 1;
			double b = 10;
			double c = -39;
			double waitr = 10;
			double factr = koren(a, b, c);
			Assert::AreNotEqual(waitr, factr);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_09_2_1/macros.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab0921
{
    TEST_CLASS(UnitTestLab0921)
    {
    public:

        TEST_METHOD(TestSQR)
        {
            Assert::AreEqual(9, SQR(3));
            Assert::AreEqual(25, SQR(-5));
        }

        TEST_METHOD(TestABS)
        {
            Assert::AreEqual(5, ABS(-5));
            Assert::AreEqual(7, ABS(7));
        }

        TEST_METHOD(TestMAX)
        {
            Assert::AreEqual(8, MAX(3, 8));
            Assert::AreEqual(5, MAX(5, 2));
        }

        TEST_METHOD(TestMIN)
        {
            Assert::AreEqual(3, MIN(3, 8));
            Assert::AreEqual(2, MIN(5, 2));
        }

        TEST_METHOD(TestFormula)
        {
#if Z == 1
            Assert::AreEqual(9, MAX(SQR(5 - 2), ABS(2 - 5)));
            Assert::AreEqual(0, MAX(SQR(1 - 1), ABS(1 - 1)));
#else
            Assert::AreEqual(9, MIN(5 + SQR(2), Z + SQR(5)));
            Assert::AreEqual(6, MIN(2 + SQR(5), Z + SQR(2)));
#endif
        }
    };
}
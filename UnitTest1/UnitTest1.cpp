#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" {
	void setLength(int input, int* length);
	void setWidth(int input, int* width);
	int getPerimeter(int* length, int* width);
	int getArea(int* length, int* width);
	void printWelcomeMenu();
	void printOptions();
	int getIntInput(char message[]);
}

namespace UnitTest1
{
	TEST_CLASS(PerimeterAndArea)
	{
	public:
		
		TEST_METHOD(Perimeter)
		{
			int length = 3;
			int width = 2;
			int Perimeter = getPerimeter(&length, &width);
			int expected = 10;
			Assert::AreEqual(expected, Perimeter);
		}
		TEST_METHOD(Area)
		{
			int length = 3;
			int width = 2;
			int Area = getArea(&length, &width);
			int expected = 6;
			Assert::AreEqual(expected, Area);
		}

		
	};

	TEST_CLASS(SetLength)
	{
	public:

		TEST_METHOD(setLength1)
		{
			int expected = 1;
			int length = 0;
			setLength(length, &expected);
			Assert::AreEqual(expected, 1);
		}

		TEST_METHOD(setLength2)
		{
			int expected = 1;
			int length = 100;
			setLength(length, &expected);
			Assert::AreEqual(expected, 1);
		}

		TEST_METHOD(setLength3)
		{
			int expected = 1;
			int length = 99;
			setLength(length, &expected);
			Assert::AreEqual(expected, length);
		}
	};

	TEST_CLASS(SetWidth)
	{
	public:
		TEST_METHOD(setWidth1)
		{
			int expected = 1;
			int width = 0;
			setWidth(width, &expected);
			Assert::AreEqual(expected, 1);
		}

		TEST_METHOD(setWidth2)
		{
			int expected = 1;
			int width = 100;
			setWidth(width, &expected);
			Assert::AreEqual(expected, 1);
		}

		TEST_METHOD(setWidth3)
		{
			int expected = 1;
			int width = 99;
			setWidth(width, &expected);
			Assert::AreEqual(expected, width);
		}
	};
}

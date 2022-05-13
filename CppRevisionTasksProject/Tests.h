#pragma once
#include "Tasks.h"

#define RIGHT "completed successfully. Well DONE!!!"
#define WRONG "was not running successfully. Something was WRONG!"

void testingTask01() {

	bool result = task01(10, 15, 2) == "20 30"
		&& task01(4, 25, 8) == "34 0"
		&& task01(1, 1, 8) == "8 8"
		&& task01(0, 25, 3) == "0 75"
		&& task01(10, 5, 4) == "40 20"
		&& task01(0, 1, 10) == "0 10"
		&& task01(1, 0, 10) == "10 0"
		&& task01(1, 99, 4) == "7 96";

	cout << "Task 01 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {

	bool result = task02(3602) == "1:00:02"
		&& task02(129700) == "12:01:40"
		&& task02(0) == "0:00:00"
		&& task02(1) == "0:00:01"
		&& task02(3600) == "1:00:00"
		&& task02(60) == "0:01:00"
		&& task02(86399) == "23:59:59";

	cout << "Task 02 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {

	bool result = task03(1, 1, 1, 2, 2, 2) == 3661
		&& task03(0, 0, 0, 1, 1, 1) == 3661
		&& task03(2, 2, 2, 3, 3, 3) == 3661
		&& task03(3, 3, 3, 4, 4, 4) == 3661
		&& task03(1, 2, 30, 1, 3, 20) == 50
		&& task03(0, 0, 0, 0, 0, 1) == 1
		&& task03(0, 0, 0, 0, 1, 0) == 60
		&& task03(0, 0, 0, 1, 0, 0) == 3600
		&& task03(0, 0, 0, 1, 1, 1) == 3661;

	cout << "Task 03 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask04() {

	bool result = task04(2002) == 1
		&& task04(2008) == 0
		&& task04(0) == 1
		&& task04(1) == 1
		&& task04(10) == 0
		&& task04(11) == 1
		&& task04(20) == 0
		&& task04(21) == 0
		&& task04(110) == 0
		&& task04(111) == 1
		&& task04(121) == 1
		&& task04(1110) == 0
		&& task04(1111) == 1
		&& task04(9999) == 1
		&& task04(9000) == 0
		&& task04(9900) == 0
		&& task04(9990) == 0
		&& task04(9009) == 1
		&& task04(9119) == 1;

	cout << "Task 04 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask05() {

	bool result = task05(-1, 1) == 55
		&& task05(40, 2) == 24
		&& task05(0, 1) == 0
		&& task05(1, 1) == 1
		&& task05(2, 1) == 2
		&& task05(2, 2) == 4
		&& task05(-2, 1) == 54
		&& task05(-2, 2) == 52
		&& task05(10, 1000) == 32
		&& task05(-10, 1000) == 24
		&& task05(-1000, 10) == 24
		&& task05(1000, 10) == 32;

	cout << "Task 05 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask06() {

	bool result = task06(10, 3, 2) == 8
		&& task06(20, 3, 2) == 18
		&& task06(10, 2, 1) == 9
		&& task06(10, 4, 3) == 7
		&& task06(10, 5, 4) == 6
		&& task06(10, 6, 5) == 5
		&& task06(10, 7, 6) == 4
		&& task06(10, 8, 7) == 3
		&& task06(10, 9, 8) == 2
		&& task06(10, 10, 9) == 1
		&& task06(10, 6, 3) == 3
		&& task06(10, 9, 3) == 2
		&& task06(3, 2, 1) == 2
		&& task06(100, 3, 2) == 98
		&& task06(99, 100, 98) == 1
		&& task06(4, 3, 2) == 2;

	cout << "Task 06 " << (result ? RIGHT : WRONG) << endl;
}

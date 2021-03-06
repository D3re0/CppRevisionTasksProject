/*	Задание 04. Число-палиндром (симметричное число)
*
*	Дано четырехзначное число. Определите, является ли оно палиндромом.
*	Если да, то выведите 1, иначе выведите 0.
*
*	Формат входных данных [input]
*	Вводится число в диапазоне от 0 до 9999.
*
*	Формат выходных данных [output]
*	Выведите одно целое число - ответ на задачу.
*
*	[Sample function input 1]: 2002
*	[Sample function output 1]: 1
*
*	[Sample function input 2]: 2008
*	[Sample function output 2]: 0
*/

#include "Tasks.h"

int task04(int number) {

	int temp = number;
	int cmpr = 0;

	while (temp != 0)
	{
		cmpr = cmpr * 10 + temp % 10;
		temp /= 10;
	}

	return (number == cmpr ? 1 : 0);
}

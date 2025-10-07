#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

//контрольный пример
//11:34
//12 - 11 = 1 > 0 => 11 ближе к полудню => (12-11) |(0 - 34)| => 1 час и 34 минуты до полудня
int main() {
	setlocale(LC_ALL, "RUS");
	int hours, minutes;
	printf("Введите данный час: ");
	scanf("%d", &hours);
	printf("Введите данную минуту: ");
	scanf("%d", &minutes);
	if ((12 - hours) > 0){
		printf("Время до полудня составляет %d час и %d минут", 12 - hours, abs(0 - minutes));
	}else{
		printf("Время до полуночи составляет %d час и %d минут", 24 - hours, abs(0 - minutes));
	}
}
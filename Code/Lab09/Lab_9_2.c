#include <stdio.h>
typedef int DayOfWeek;

DayOfWeek findDayOfWeek(int day, int month) {
    int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_passed = 0;
    for (int i = 0; i < month; i++) day_passed += days_in_month[i];
    day_passed += day;
    int index = day_passed % 7;
    return index;


}

int main()
{
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2013 is ", day, month);
	switch(dow){
		case(6): printf("Sunday.\n"); break;
		case(0): printf("Monday.\n"); break;
		case(1): printf("Tuesday.\n"); break;
		case(2): printf("Wednesday.\n"); break;
		case(3): printf("Thursday.\n"); break;
		case(4): printf("Friday.\n"); break;
		case(5): printf("Saturday.\n"); break;
	}
}
/***********************************
Asks for a month number and returns the string version.

E.g.

Input: 11
Output: November
***********************************/
#include <stdio.h>

int main(void)
{
	int month;
	while(1) {
	    printf("Month (1-12): ");
	    scanf("%d", &month);
	    switch(month) {
	        case 1 : puts("January"); break;
            case 2 : puts("February"); break;
            case 3 : puts("March"); break;
            case 4 : puts("April"); break;
            case 5 : puts("May"); break;
            case 6 : puts("June"); break;
            case 7 : puts("July"); break;
            case 8 : puts("August"); break;
            case 9 : puts("September"); break;
            case 10 : puts("October"); break;
            case 11 : puts("November"); break;
            case 12 : puts("December"); break;
	          default: puts("Error: no such month in my calendar."); break;
	    }
	    if (month>12 || month<=0)
	        break;
	}
	return 0;
}

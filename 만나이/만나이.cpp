#include <stdio.h>

#include <stdlib.h>

 

int main()

{

       int birth_year;

       int birth_month;

       int birth_day;

 

       int today_year;

       int today_month;

       int today_day;

 

       int age;

 

       printf("Birth day(ex: 1980 1 2) : ");

       scanf("%d %d %d", &birth_year, &birth_month, &birth_day);

 

       printf("Today(ex: 2010 5 3) : ");

       scanf("%d %d %d", &today_year, &today_month, &today_day);

 

       // ���� ������ ���

       if ( birth_month > today_month )

             age = today_year - birth_year;

       // ������ �� ������ ���

       else if ( birth_month < today_month )

             age = today_year - birth_year - 1;

       else

       {

              // ������ �� ������ ���

             if ( birth_day <= today_day )

                    age = today_year - birth_year - 1;

             else

                    // ���� ������ ���

                    age = today_year - birth_year;

       }

 

       printf("Your age is %d.\n", age);

 

       return 0;

}

 

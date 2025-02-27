#include <stdio.h> 

/* 
    As per C-stanadard function cannot be defined inside a structure 
*/

struct Date 
{
    int day;    /* data definition statement */
    int month;  /* data definition statement */ 
    int year;   /* data definition statement */

    // Function definition -> NOT ALLOWED inside 
    // struct (listen to deep explaination in session 09 )
    // CTE (uncomment entire function definition to see the error)
    /* 
    int get_day()
    {
        return (day); 
    }
    */ 
}; 
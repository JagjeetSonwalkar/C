////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                              Short hand Operaters                                                 ////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int x = 10 ;
    int y = 11 ;  

    int a = 0 ;
    int b = 0 ;

    // Post increment 

    a = x++ ;   // Post increment 
    b = y++ ;   // Post increment 
    x++ ;       // increment 
    y++ ;       // increment 

    printf("%d\n",a);   // 10
    printf("%d\n",b);   // 11
    printf("%d\n",x);   // 12
    printf("%d\n",y);   // 13

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    x = 10 ;
    y = 11 ; 

    a = 0 ;
    b = 0 ;

    // Pre increment 

    a = ++x ;   // Pre increment 
    b = ++y ;   // Pre increment 
    ++x ;       // increment 
    ++y ;       // increment 

    printf("%d\n",a);   // 11
    printf("%d\n",b);   // 12
    printf("%d\n",x);   // 12
    printf("%d\n",y);   // 13

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    x = 10 ;
    y = 11 ; 

    a = 0 ;
    b = 0 ;

    // Post Decrement

    a = x-- ;   // Post Decrement
    b = y-- ;   // Post Decrement
    x-- ;       // Decrement
    y-- ;       // Decrement

    printf("%d\n",a);   // 10
    printf("%d\n",b);   // 11
    printf("%d\n",x);   // 8
    printf("%d\n",y);   // 9

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    x = 10 ;
    y = 11 ; 

    a = 0 ;
    b = 0 ;

    // Pre Decrement
    a = --x ;   // Pre Decrement
    b = --y ;   // Pre Decrement
    --x ;       // Decrement
    --y ;       // Decrement

    printf("%d\n",a);   // 9
    printf("%d\n",b);   // 10 
    printf("%d\n",x);   // 8
    printf("%d\n",y);   // 9


    return 0 ;
}

/*

10
11
12
13
11
12
12
13
10
11
8
9
9
10
8
9

*/
#include <stdio.h>
#include <stdlib.h>
 
void func1 () 
{
    printf("I am in function 1\n") ;
}
 

void func2(void (*fptr) ()) 
{
    printf("I am in Function 2\n") ;
    fptr() ;  
    printf("I am again in Function 2\n") ;
}
 
int main() 
{
    void (*ptr) ;
    ptr = func1 ;
 
    func2(ptr) ;
    return 0 ;
}

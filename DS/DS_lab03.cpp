// Aim : To find min and max element from the array simultaneously

#include <iostream>
int main(int argc, char *argv[])
{
	const int n = 5 ;
	int list[n] = { 23 , 6 , 29  , 18 ,36 } ;
	
	// set min and max
	int min = list[0] , max = list[0] ;
	// Before Operation
	std::cout << " Smallest Element in array is :    " << min ;                 
	std::cout << "\n Largest Element in array is :    " << max ;                 
	std::cout << "\n\n" ;// for two new lines
	
	for (int i = 1 ; i <n ; i++)  // i<=n is a bug which cause undefiened behavior
	{
	   if ( list[i] <  min)
	   {  min = list[i] ; }
	   
	   if ( list[i] > max )
	   { max = list[i] ; }	   
	}
	
	std::cout << "    Array is :    \n[" ;
	for (int element :  list)
	{    std::cout<< " " << element << " " ; }
	std::cout <<"]"<< std::endl ;
	
	// After operation
	std::cout << " Smallest Element in array is :    " << min ;                 
	std::cout << "\n Largest Element in array is :    " << max ;                 
	return 0 ;		
}
/*
    Undefiened Behaviour :    we don't know either program runs ,crashes
    if program runs then it will produce garbage value
    
*/
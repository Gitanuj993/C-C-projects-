// Aim :    To find the max and min element in an array !

/*
    In previous lab we discussed how to create , declear and insert values in an array
*/
#include <iostream>
using namespace std ;

int main(int argc, char *argv[])
{
    const int size = 7 ;
    int arr[size] = {    100 , 4, 5 , 99 , 34 ,43 ,78 } ;	 // 8
    // finding min element using for-loop 
    int min = arr[0] ;
    for (int i = 1 ; i<=size ; i++)
    { 
        if ( arr[i] < min)
         { min = arr[i] ; }
    }
    
    cout << " Array is :    " ;
    for ( int x : arr)
{    cout << " --> " << x  ; }
    cout << endl ;
    cout << " Smallest Element in array is :    " << min << endl;                 
    
    // Now we will see how to find largest element in the array using for-each loop
    int max = arr[0] ;
    for ( int element :    arr)
    { if ( element > max) {  max = element ; } }
    cout << " Largest Element in the array is :    " << max ;                 
    
    return 0 ;
}

/* 
    how to check it and procedure to find minimum and maximum number from the array
    // To check min element
    1. we assume element at the first index as minimum 
    2. then we would compare that element to the next elements 
    3. if the next element is less than current min element then 
    4. we will set next smaller element into the min variable
    
    Same procedure  to find max element , we compare element to find greater element 
    if next element is greater than current element than we set that element into max element's container or variable'
    
    Note : We can find min and max element simultaneously .
    

*/









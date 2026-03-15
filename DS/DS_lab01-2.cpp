// Aim :    To insert elements into an array

/*
    Array is a linear data structure in which elements are stored in contigeous  memory         locations. 
    
   thus we can access elements of  array  using incices.

*/
#include <iostream>
using namespace std ;
int main(int argc, char *argv[])
{
	// Declearing an array of size n , where n = 5  ;
	const int n = 5 ; // const is used to provide compile time value to n , then to size of array
	int arr[n] ; // Declearing array
	
	cout <<  " Insert elements into the array \n" ;
	// Inserting elements using for-loop
	for ( int i = 0 ; i < n ; i++) // i < n which means for i = 0, 1,2,3 and 4 , not 5 if we 
	{                                                                // count 0 to 4 then it gives us length 5
	    cout << " Enter element " << i << " :    "  ;  // message while taking input from user
	    cin >> arr[i] ;  // inserting element to the index starting form 0 , to n-1
	}
	
	// Displaying array via for-each loop
	cout << " >>>    " ; 
	for ( int x :    arr)
	{ cout << x << " " ; } 
	
	// can we take input via for-each loop - may probably yes , lets try !
	for (int x : arr) 
	{
//	    cout<< " no " ; // No we can't insert new values using for-each loop 
	    // but we can copy   1 array into another array using it .
	}
	
	// lets try to copy one array to another . so lets declear another array
int new_arr[n] ; // you probably see a keyword 'new' in different color we can use it later
int index = 0 ;
// copying arr to new_array or simply one to another we can also copy elements of  one to different arrays
for (int x : arr )
{
  new_arr[index] = x ;
 index++ ; 
 }
     cout << " new_array  >>>    " ; 
	for ( int x :    new_arr)
	{ cout << x << " " ; } 
	 	
	
	
	return 0 ; // write it into your code as some compiler throw an error if return 0 ; not found.
}
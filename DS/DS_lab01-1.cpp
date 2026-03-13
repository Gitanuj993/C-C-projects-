// Aim :    To discuss about Arrays and their functions , operation and implimentaion

/*
What is Array : array is a collection of  similar type of data  which means and interprets as every element of array is of same type.
- Array is linear data Structure 
- Array is non Primitive data structure or type

- Array store data in sequential manner and in contigeous memory locations.
thus we can access elements by their index value ,
index value start from 0 , 
so if the  array of size n has (n-1) elements.

- Array has Fixed size ( We can also declear an Array as dynamic)


Applications : 
- Array used in complex structures.



*/
#include <iostream>
using namespace std ;


int main(int argc, char *argv[])
{
	    // Declearation of array of  size 10
	    int array[10]  ;
	    // we can also provide elements while declearing array
	    // Providing elemets at declearation time
	    /*
	    int n = 2 ;
	    int array1[n] = { 2 ,4 } ;
	    ERROR "    Variable-sized object can't be created"
	    compile time error , we will discuss it later 
	    you might not see this error in GCC compilers !
	    */ 
	    const int n = 2 ;
	    int array1[n] = {    2 , 4 } ; 
	    // Let's print the above array's
	    cout << "    array is :    " <<    array[0] << endl ; 
	    
	    
	    /* Now we will see the elements stored in the array 
	    / procedure we can see the elements of the array using indexes. */
	    
	    // method 1 :    via indexes to access each element , 
	     cout << "    /n printing array1 using indices seperately ! "  << endl ;
	     cout << "    array 1 is :    " <<    array1[0] << endl ;
	     cout << "    array 1 is :    " <<    array1[1] << endl ;
	    
	    // method 2 :    using method 1 but using for-loop to avoid writing statements  for each element or for each index .
	    cout << "    /n printing array 1 using for-loop "  << endl ;
	    for (int i = 0 ; i< n  ; i++ ) // i ++ would work
	    { cout << "    array 1 is :    " <<    array1[i] << endl ; }
        
        // method 3 : using  for-each loop  internally using method 1 
        cout << "    /n printing array 1 using for-each loop "  << endl ;
        for ( int x :    array1)
        { cout << "    --> " <<    x <<    endl ; }

	    return 0 ;	
}

/*
        cout << "    array is :    " <<    array[0] << endl ;  // it show '0' as no element exits
            cout << "    array is :    " <<    array<< endl ; ' // it display size of the array
*/

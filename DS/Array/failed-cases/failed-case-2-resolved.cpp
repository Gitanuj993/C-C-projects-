// failed-case : unable to copy one array into another array without using external variable.
// mistake /bug : wrong keyword or wrong array name is used to store the results
#include <iostream>
using namespace std ;

int main(int argc, char *argv[])
{
	const int size = 3 ;
	int arr[size] = {    1,2,3 } ;
	
	cout << " Array looks like this : [ " ;
	for ( int x :    arr)
	{ cout << x << " " ; }
	cout << "] \n\n" ;
	
	
	// we can also reverse the array without using index
    int new_arr[size] ; //new array of size same of previous array   
    for (int i = size -1 ; i>= 0 ; i--)
    {
         new_arr[ size - i -1] = arr[i] ;     
    }
    cout << " Array looks like this : [ " ;
	for ( int x :    new_arr)
	{ cout << x << " " ; }
	cout << "] \n\n" ;
	


	return 0 ;
}

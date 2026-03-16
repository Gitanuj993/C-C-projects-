// Aim :    To reverse a given array
/*
Pre-requsite knowlegde : what is array, how to declear and initialize it , basic knowledge and syntax of c++ language
*/

/*
    Our task is to reverse a array , 
    what does it mean ?    lets see 
    if array is like that [ 1,2,3,4,5 ]
    then reverse array should look like [ 5,4,3,2,1 ]
    
    How can we achive that ? 
    simple answer is via  indices , 
    if you know how to traverse an array , 
    if not Known lets explore it.
    
*/
#include <iostream>
using namespace std ; // to reduce use of std::endl , std::cin , std::cout  

int main(int argc, char *argv[]) // main() is enough if your compiler support it ( main functions without parameters)
{ 	
    int size  ;
    cout <<    " Enter size of the array : " ;
    cin >> size ;
   //  int arr[size] = { 12,3,4 } ; // error  //  compilte time value is not initialized Error in some compilers
    int arr[size] ; // It  above VAL error doesn't appear becouse we decleared array not initialized array
    
    //lets insert elements into the array !
    cout << "    Insert elements into the array \n " ;

        for ( int i = 0 ; i < size ; i++ )
    {
         cout <<"Enter Element : "    ; //message
          cin >> arr[i] ; // logic
    }
    
    // lets traverse the array by for-loop 
    cout << "\n original array [ " ;
    for ( int i = 0 ;  i < size ; i++)
    { cout<< arr[i]<< " " ; }
    cout <<"]\n\n" ;
    
    // lets reverse the array by using logic with the help of for-loop
    cout << " reversed array is [ "  ;
    for ( int i = size -1; i>= 0  ;  i-- )
    { cout<< arr[i] << " " ; }
    cout <<"]\n" ;
    
    // We can also copy reversed array in another array - with index
    int new_arr[size] ;
    int index = 0 ;
    for (int i = size -1 ; i>= 0 ; i--)
    { new_arr[index] = arr[i] ; 
    index++; 
    }
    
    // We can also reverse the array without using any third varible say index in above illustration
    // we can also reverse the array without using index
    int new_arr_without_index[size] ; //new array of size same of previous array   
    for (int i = size -1 ; i>= 0 ; i--)
    {
         new_arr_without_index[ size - i -1] = arr[i] ;     
    }
                
    // lets traverse the array by for-loop 
    cout << "\n new array with index [" ;
    for ( int i = 0 ;  i < size ; i++)
    { cout << "" << new_arr[i]<< " " ; }
    cout <<"]\n" ;
    
   cout << " new array without index : [ " ;
	for ( int x :    new_arr_without_index)
	{ cout << x << " " ; }
	cout << "] \n\n" ;
	
    
    
	return 0 ;	
}

	/* Errors
	
	const int size ;
	cout << " Enter size of the array :    " ;
	cin >> size ;
	
	Becouse const int size ==0 ; by default if any variable is not initialized
	
	*/
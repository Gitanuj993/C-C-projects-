#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <stdio.h>

using namespace std ;
class iiostream
{
    int data ;
    // Access Specifier 
    public : 
    iiostream()
    { cout << "    Welcome to the  Iostream Interface ! \n" ;}
    void input()
    { cout << "    Enter the input :    " ; cin >> data ;
    }
     void output()
    { cout << " You output :    " << data << endl ;}
   
    ~ iiostream() // is Destructor can be parameterized ?
    {
        cout << " Thanks  to visiting our Service ! \n" ;
        cout << "\n 1.  Before creating object of the class iostream , \ncomiler doesn't throw any error \n However when object of the class is initialised or decleared compilor responding  Ambiguilty Error \n as AT used standard namespace thus in std namespace iostream is already decleared\n  \n" ;
        cout <<  " To solve that issue AT changed class name from iostream to iiostream \n\n" ;                
        cout << "Output decleared after the Destructor isn't executed bu the compilor\n" ;
    }
    void Output()
    { cout << " You Inputed :    " << data << endl ;}
    
    
} ; // endl braces of the class

// New interface or class is decleared 
class vectors // renamed vector to vectors to counter ambiguilty or ambigious 
{
    //declearation of vectors 
    vector<int> list ;
    vector<vector<char>>  chars ;
    public :
    vectors()
    { cout <<    "Welcome AT , \n into the interfaces of vector \n" ;
    }
    void input_int()
    {
        int size_of_vector ;
        cout << " Enter length of your list  : " ;  cin >> size_of_vector ;
        // method 1   :    set the values in the vector using  list.push_back(num)  ;
        // method 2 :    take inputs similar to array via index if size of the vector is provide
        // Here we go with method 2 ;
    //    cout << list.size()   ;
        list.resize(size_of_vector) ;
        for ( int i = 0 ; i < size_of_vector ; ++i) // is ++i or i++ affect the loop
        { cout << " Enter the element :    " ; cin >> list[i] ;}
        cout << " Resize of vector is done via list.resize(size) \n" ;
    }// input_int end
    
    /*
    void input_chars()
    {  int size ;
    cout << " Enter the size :    " ; cin >> size ;
    // WE use method 1 to take input from the user and set into the data_type 
    
    // for-loop to insert data into vector 
    int  temp ;
    for ( int i = 0 ;  i < size ; i++)
    {  cout << "  Enter data in char :   " ;  cin >> temp ;
    chars.push(temp) ;
    } // for-loop-end
    }        
            
} ; // vector_class_end ; 
*/

int main(int argc, char *argv[])
{
	/* Testing of iostream interface 
	iiostream i ;
	i.input() ;
	i.output() ;
	*/
	
	// class of vectors
	vectors v ;
	v.input_int() ;
}
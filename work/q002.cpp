// program experiment 
//? whether child class can access of data members of base class or not 

// public as read and right done 
// protected  : read and right 
// private : no even inherited as private

#include <iostream>
using namespace std ;

class base
{
    public:
    int n = 133 ;
    
};
class child : public  base
{
    public :
    child()
    {
        
        cout << "     n = " << n ; 
        cout << "   enter n : " ;
        cin >> n ;
        cout << "     n = " << n ; 
        
    }
    
    
};

int main(int argc, char *argv[])
{
	
	child c ;
}
// Program will not  throw any error 

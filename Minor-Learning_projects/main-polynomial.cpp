#include <iostream>
#include <cmath>
using namespace std  ;

class Polynomial
{
    public :
    void polyDetails()
    { cout << " Polynomial is a way to know the values or roots of a an given equation \n we can know the feasibility of any constraints for the equations!\n";
    }
    void polyMenu() 
    {
    cout << "Choose Your Options! \n 1. Create Poly. \n 2. for Addition \n 3. for Multipliction. \n 4. for Solving polynomial for x. \n 5. for Finding roots { later/Beta. }\n" ; 
    }
    void welcome()
    { cout << " Welcome To The Game of Polynomials !!!\n"; 
    char ans ;
    cout << "Do you want to know more ( y/n ) :";
    cin >> ans ;
    if ( ans == 'y' || ans == 'Y')
    { polyDetails();}
  }
    void polyCreated()
    { cout << "Desired polynomial is created Successfully!\n";}
    void polyDeleted()
    { cout << " Polynomial is deleted Successfully. \n"; }
    void ending()
    { cout << " Thanks for using our software , Made with love from our Developers\n";}
    
};

class Array : public Polynomial
{
    
    public :
    
   void array_for_polynomial_given()
   {
        // 2x^2 + x + 1 
        int terms ;
        
        cout << "Enter number of Terms in the Polynomial :";
        cin>>terms ;
        float poly[terms];
        cout << "Enter the Coefficients of Terms in Ascending order of power x !\n";
        for ( int i = 0 ; i<terms ; i ++)
        {
             cout << " Enter term "<<i+1 << " : ";
             cin>>poly[i];                        
         }
         
       
    } 
  void solve_for_x_array(float arr[],int n)
   {
     int x ;
     cout << "Enter the value to solve for x :"   ;
     cin>>x;    
     float eval = 0 ;
     for( int i = 0 ; i< n ; i++ )    
     {
       eval += arr[0]* ( pow(x,i)) ;
              
     }
     
    cout << "Evaluation of polynomial for "<<x << "is :" <<eval ;
}  
    
    
    
    
};

class LinkedList : public Polynomial
{
    
    
};


int main()
    {
         int choice ;
         cout << " Choose Your Method !. \n 1. for Array Operations. \n 2. for LinkedList Operations\n" ;
         cin>>choice ;
         switch (choice)
        {
             case 1 : 
             {
                  int ch ;
                 polyMenu();
                  cin >> ch ;
                  switch (ch)
                  {
                      case 1 :
                      {   break ;   }   
                      default : {break;}
                   }  
                   break ;
              }    
                case 2 :
                { cout << "Welcome to the linkedList!!!\n" ;
                int ch ;
                  cout << "Choose Your Options! \n 1. Create Poly. \n 2. for Addition \n 3. for Multipliction. \n 4. for Solving polynomial for x. \n 5. for Finding roots { later/Beta. }\n" ;
                  cin >> ch ;
                  switch (ch)
                  {
                      case 1 : {   break ;}
                      default : break ;
                   }   
                  
                     
                
                  break ;
             }
             
             default : break ;
                          
         }
         
        

     return 0 ;       
    }

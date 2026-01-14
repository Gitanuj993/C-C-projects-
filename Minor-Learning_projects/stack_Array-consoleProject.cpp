#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std ;

// stack in the array ; :   not built in .
#define size 100
int stack[size] ;
int top = -1 ;

bool isFull() // to check stack overflow condition
{
    if ( top >= size -1 ) 
    return true ;
    return false  ;
}

bool isEmpty()
{
    if ( top == -1)
    return true ;
    return false ;
}

void push()
{
    if ( isFull())
    cout <<    " Stack Overflow unable to append data! \n" ;
    else {
        int data ;
        cout <<    " Enter data :    " ; cin >> data ;
        top++ ;
        stack[top]  = data ;
        cout << data <<" is pushed \n" ;
    }
}

int pop()
{
        if ( isEmpty())
        { cout << " Stack underflow ! \n" ; return -1 ; }
        int item ;
        item = stack[top] ;
        top-- ;
        return  item ;
}

void display()
{
        for ( int i = top ; i >= 0 ; i --)
        {    cout << stack[i] << endl ; }
}

int main()
{
     int choice ;
      while ( true) {
        cout << " 1. push \n 2. pop \n 3. display \n 4. Exit \n" ;
        cout <<    " Enter Your Choice : " ; cin >>    choice ;
        switch(choice)
        {
            case 1 :  push() ; break ;
            case 2 : { int del =  pop() ;
            cout << del << " is removed \n " ; break ; }
            case 3 :    display() ; break ;
            case 4 :    cout << "    Thanks for using our service !"  ; exit(0) ;
            default :    cout << " Try again :    " ;
        }
        }       
     // } while (   true ) ;
      return 0 ;
}
        


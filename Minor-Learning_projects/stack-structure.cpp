#include <iostream>
#include <cstdlib>
#define size 10
using namespace std ;

struct stackStructure
{ int stack[size] ;
   int top = -1 ;
} st ;

 bool isEmpty()
{
    if  ( st.top == -1)
    return true ;
    return false ;
}
bool isFull()
{
    if ( st.top >= size -1 )
    return true ;
    return false ;
}

void pop()
{
    int term ;
    if ( isEmpty())
    cout << " Stack Underflow \n" ;
    else {
        term = st.stack[st.top] ;
        st.top-- ;
        cout << term  << " is removed \n";
    }
}

void push()
{
       if ( isFull())
       cout << " Stack overflow \n" ;
       else 
       {        
           st.top++ ;
           cout << " Enter value : "  ; cin >> st.stack[st.top] ;
           cout << st.stack[st.top]<< "    is added \n" ;
       
       }
}
void display()
{
     if ( isEmpty())
     cout << "    Stack is Empty \n" ;
     else { 
     cout << " stack is / : " ;
     for ( int i = st.top ; i >= 0 ; i--)
     {  cout << st.stack[i] << endl ;}
     cout << " --------------------------\n" ;
     }
}

int main()
{
       do {    
       cout <<    " 1. push \n 2. pop \n 3. display \n 4. Exit \n" ;
       int choice ;
       cout << "Enter Your Choice :    " ; cin >> choice ;
       switch(choice)
       {
           case 1 : push() ; break ;
           case 2 : pop() ; break ;
           case 3 : display() ; break ;
           case 4 : cout << " See You Later !" ; exit(0) ;
           default :    cout << " try again ! :    " ; 
       }
       } while ( true ) ;
       return 0 ;
}
           
       
       
        
    
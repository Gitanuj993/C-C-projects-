#include <iostream>
using namespace std ;

struct stackList // structure of the stack : top element of  the stack is stored in the first node
{
    int data ;
    stackList * next ;
} ;
typedef stackList *node ;
node top  = NULL;

bool isEmpty()
{ if (  top == NULL  )
return true ;
return false ;
}

//bool isFull  it stack of linked List cant't be overflow untill specified ;
node get_node( int data )
{ node temp = new stackList     ;
temp -> data = data ;
temp -> next = nullptr ;
return temp ; 
}

void push()
{ int data ;
cout << "Enter data :    " ; cin >> data ;
node New = get_node(data) ;
New -> next = top ;
top = New ;
cout << data << " Inserted Successfully!\n";
}
void pop()
{
    if ( isEmpty())
    cout << " Stack Underflow !!!\n" ;
    else {
        int data = top -> data  ;
        node temp =  top  ;
        top = top -> next ;
        free(temp) ;
        cout << data <<" poped Successfully!!!\n " ;
    }
}
void display()
{
       if (    isEmpty())
       { cout <<    " Stack is Empty !!!\n" ; return ; }
       node temp = top ;
       while ( temp != NULL)
       { cout << temp -> data  << endl; 
       temp = temp -> next ;
       }
       free(temp) ;
}
       
int main()
{
       int choice ;
       
         while (     true )           
         {
             cout << " Choose from the following !!! \n 1. push \n 2. pop \n 3. display \n 4. Exit \n";            cout << "Enter your choice :    " ; cin >> choice ;
             switch ( choice)
             {
                 case 1 :    push()    ; break ;
                 case 2 :    pop() ; break ;
                 case 3 :    display() ; break ;
                 case 4 :    cout << " Thanks for using our sercvice !!" ; exit(0) ;
                 default : cout << " Try again ! : " ;
             }
         } // while-end 
}// main-end
             
             
             
             
             
             
             
             
             
       
        
        
        
    
    




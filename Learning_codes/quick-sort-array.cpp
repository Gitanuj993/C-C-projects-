#include <iostream>
#include <cstdlib>
// quick sort via arrays
using namespace std ;

class Sort
{
     int list[15] ;
     int terms ;
     bool isEmpty  = true ;
public :

void create()
{           
    if (isEmpty == true)
    {
    cout << " Enter number of terms in the list :    " ; cin >> terms ;    
    
    for ( int i = 0 ; i < terms ; i++) // i++ != i ++ ;
   {
         cout << " Enter Element : " ; cin >> list[i] ; 
    }
    isEmpty = false ;
    } // listCreate-end
}// create-end
void sort()
{  cout <<    " Your requested is accepted ";
quick(0 , terms-1 ) ; } 

void quick(int low , int high)
{
    cout << " phase  - quick  -";
    if ( low < high)
    {
        int m = partition(low , high) ;
        quick(low,m-1);
        quick(m+1 , high) ;
    }
} // quick-end
int partition(int low , int high)
{        
        int pivot  = list[low] , i = low , j = high ;
        while ( i < j)
        {
            while ( list[i] <= pivot ) { cout << " i++ \n " ; i++ ; }
            while ( list[j] > pivot ) { cout << "j--\n" ;   j-- ; }
            if ( i < j )
            { swap(&i , &j) ;}
        }
        swap(&low , &j) ;
        return j ;
} // partiton-end

void swap( int * i , int *j)
{
     cout << " phase swap " ;
     int temp = list[*i] ;
     list[*i] = list[*j] ;
     list[*j]  = temp ;
} // swap-end

void display()
{
 if ( isEmpty) cout << "List is Empty !\n" ;
 cout << " List is --> [" ;
for ( int i = 0  ; i < terms ; i ++ )
{ cout <<list[i] << " " ; }
cout << "] ";
} // display-end
                                            
}; // sort class end

int main()
{
    Sort s ;
    int choice ;
    while ( true)
    {
        cout << "\n 1. create List \n 2, Display List \n3.quickSort \n 11. Exit \n" ;
        cout << endl << " Enter your choice : ------> " ; cin >> choice ;
        switch(choice)
        {
            case 1 :    s.create() ; break ; 
             case 2 : s.display() ; break ; 
             case 3 :    s.sort() ; break ;
             case 11 :    cout << " Have a great Learning !!" ; exit(0) ;
             default :    cout << " Try again : " ; 
        } // switch-end
    }// while-end
    
    return 0 ;
}
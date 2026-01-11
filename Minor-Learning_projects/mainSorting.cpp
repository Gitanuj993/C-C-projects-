#include <iostream>
using namespace std ;
class Sorting // Array
{ 
     int terms ;
     int arr[100];
     public :
   
      
    
 void  createArray() 
    {
        cout << " Enter the number of Elements of the list :";
        cin >> terms ;
        for ( int i = 0 ; i<terms ; i++)
        { cout << "Enter term " << i+1 << " : ";
        cin>>arr[i];
        }
        cout << "\n--------------------Array is Successfully Created!-----------------------\n\n";               
    }
    void bubbleSort()
    {               
    for (  int i = 0 ; i <terms-1 ; i++)
    {
         for ( int j = 0 ; j <terms-1-i ; j++)   
         {
              if (    arr[j] > arr[j+1] )   
              {
                   int max = arr[j]   ;
                   arr[j] = arr[j+1] ; // bubble
                   arr[j+1] = max ;
              }
         }
    }
    cout <<"---------------------------------------Sorted Successfully----------------------------\n\n ";
}

void insertionSort()
{
    int i , j, key ;
    for ( i = 1 ; i<terms ; i++)
    {
        key = arr[i];
        j = i - 1 ;
        while ( j>= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j-- ;            
         }
         arr[j+1] = key ;                 
    }
    cout << "---------------------------Insertion Sort Executed Successfully -------------------------------\n\n";
    
}

// quick sort
void qsort()
{ cout <<    " your array is sorting...." ;
quick(0, terms-1) ;
cout <<    " Array is sorted !! \n " ;
}
void quick(int low , int high)
{
    if ( low < high)
    { int p = partition(low , high) ;
    quick(low,p-1) ;
    quick(p+1, high) ;
    }
}
int partition(int low , int high)
{
    int pivot = arr[low] , i = low , j = high ;
    while ( i < j) 
    { 
    while ( arr[i] <= pivot) {    i++ ; }
    while ( arr[j] > pivot ) { j-- ; } 
    if ( i < j ) { swap(i,j) ; }
    }
    swap(low,j) ;
    return j ;
}
void swap( int i , int j)
{ int temp = arr[i] ;
arr[i] = arr[j] ;
arr[j]  = temp ;
}




void showArray()
{    
    cout << " Your Sorted Array look like this -->  [ ";
    for (    int i = 0 ; i<terms; i++)
    { cout << arr[i] << " "; }
    cout << " ] \n\n";
 
} 
        
 

};
void sortingMenu()
{
 cout << " Choose your Sorting method ! \n Press 0 to Display the List \n 1. Bubble Sort. \n 2, Insertion Sort! \n 3. Quick Sort \n Press 11 To exit. \n\n"   ;                 
}
int main()
{
   Sorting s; 
   cout << "Enter the Elements in the array First ! \n";
   s.createArray();
   while ( true)
   {
       sortingMenu();
       int choice ;
       cout << "Enter Your choice : " ;
       cin>> choice ;
       
       switch(choice)
       {
        case 0 : { s.showArray() ;  break ;}
        case 11 : { cout << "Happy To See You Next Time! \n"; exit(0); }
        case 1 : { s.bubbleSort(); break ; }       
        case 2 : { s.insertionSort() ; break ; } 
        case 3 :    {   s.qsort() ; break ; }
        default : {cout << "Choose from the given methods.\n"  ;} 
           
       }
       
   }   
    return 0 ;
}
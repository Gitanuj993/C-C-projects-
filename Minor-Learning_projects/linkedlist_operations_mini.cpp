#include <iostream>
using namespace std ;
// Creation of Linked-list through Array of Structure .
struct SLL {
    int data ;
    struct SLL * next ; // why does struct used what is the next, is this a pointer of SLL
}; // WE can also declear/ write node here 
typedef SLL * node ; //node to declear other linked list 

node  insert_head(node head);  
node insert_after_key(node,int);
node insert_before_key(node,int);
node insert_end(node);
// Creating a new individual node 
int getValue()
    {
        int n ;
        cout << "Enter the value :" ;
            cin>>n ;
        
        return n ;
    }
node get_node(int val)
    {  node temp = new  SLL ;
    temp -> data = val ;
    temp -> next = NULL ;
    return temp ;
    }
    
node CreateList(int n)    
    {
        node head , temp , New ;
        head = temp = New = NULL ; 
        bool first = true ;
        int val ;
        for ( int i = 0 ; i < n ; i ++)
        {
             val = getValue();   
            New = get_node(val);

             if (first)
                {
                    head = temp = New ;
                    first = false ;
                }
                else 
                    {
                        temp->next = New; // i have a fog or doubt as i am not digesting wheather
                        temp = New ; // the linked list is attached linearly or not 
                    }
        }
     return head ;
    }
    
    void display( node head)        
        {
            node temp  ;
            temp = head ;
            
            if ( temp == NULL)
                { cout << "No element in the list !\n "; } 
             else 
                {
                    cout <<" [ ";
                    while(temp!=NULL)
                  {  cout << temp->data <<" ";
                      temp = temp->next ;
                  }
                   cout << " ]\n";
                }
        }
        
int main()
    {
         cout << "Welcome to the Scenes of LInkedLists!\n";
     
//         char ans = 'y';
         int choice ;
         // Some Variables 
         node head = NULL;
         while (true)
         {
                 cout << "------------------------------------------------------------------------------\n";
                 cout << " Choose one of the following Option : \n";
         cout <<"         1. Creating a Linked list. \n";
         cout << "        2. Display the current List\n .";
         cout << "        3. Inserting an Element. \n" ;
         cout << "        4. Update an Element. \n";
         cout << "        5. Delete an Element. \n";
         cout << "        6. Search for an  Element. \n";
         cout << "        Press 0 to  Exit \n";
                cout << "\n------------------------------------------------------------------------------\n";
             cout <<  "                  Enter your choice : ";
             cin >> choice ;
                    cout << "------------------------------------------------------------------------------\n";
             switch (choice)
                 {
                     case 1 :
                     {
                         int n ;
                          cout << " Number of Elements in the List :" ;
                          cin >> n;
                          head = CreateList(n);
                          break ; // it is necessary !
                     }
                     
                     case 2 :
                     {
                         display(head);
                         break ;
                     }
                     case 3 :
                     {
                          int choice ;
                          cout << " Press 1 for Insert value at Head or Root. \n";
                          cout << "Press 2 for Insert value after the key.\n";
                          cout << "Press 3 to insertt data before the key.\n";
                          cout <<"Press 4 to insert the data at the end. \n" ; 
                          cout << "////////////////////////////////////////////////////////////////////////";
                          cout<<"Enter choice :";
                          cin>>choice ;
                          cout << "////////////////////////////////////////////////////////////////////////";
                          switch (choice)
                              {
                                  case 1 :
                                  { head =  insert_head(head);
                                  break;
                                  }
                                  case 2 :
                                  {
                                      int key ;
                                      display(head);
                                      cout << "Enter the key for reference :";
                                      cin >> key ;
                                      head = insert_after_key(head,key);
                                      break ; 
                                   }
                                   case 3 :
                                   {       int key ;
                                      display(head);
                                      cout << "Enter the key for reference :";
                                      cin >> key ;
                                      head = insert_before_key(head,key);
                                      break ;
                                    }                                      
                                    case 4 :
                                    {
                                        head = insert_end(head);
                                        break; 
                                        
                                    }
                                    default : cout <<    " Please REad again the Notice instruction !\n";
                                  
                              }
                      
                         break ;   
                     }
                     
                     
                     
                     default :
                     cout << " Try again with a different choice!\n";
                 }
         }
         
         return 0 ; 
    }

node insert_head( node head)                                        
    {
        int n = getValue();
        node New = get_node(n);
        New->next = head ;
        head = New ;
        cout << "Successfully inserted the value!\n";
        return head ;
        
    }
    
node insert_after_key(node head,int key)    
{
    node temp = head ;
    int val = getValue();
    node New = get_node(val);
    while (temp != NULL)
    {
        if (temp-> data == key)
        {
            New->next = temp->next ;
            temp->next = New ;
        }
        
        temp= temp->next ;
            
        
    }
   cout << " Insertion Successfull !\n" ;
   return head ;
    
   }

node insert_before_key(node head,int key)   
 {            
    node temp = head ;
    int val = getValue();
    node New = get_node(val);
    node prev= NULL ;
    while (temp != NULL)
    {
        if (temp-> data == key)
        {
            if ( prev == NULL)
            {
                New->next = temp;
                
            }
            else
             {
                    prev->next  = New ; // i replaced the value
                    New->next = temp ;
                    
                   
            }
        }
        prev = temp ;
        temp= temp->next ;
 
                      
      }
      cout << "Succesfully inserted !\n";
 return head ;
 }
 
 node insert_end(node head )
 {
    node temp = head ; 
    int val = getValue();
    node New = get_node(val);
 
    
      if ( head == NULL)
      {    return New ;}
      
    while (temp->next != NULL) // wheather this is correct or not
    {   temp =  temp->next;             } //  Debugg from chat gpt !
        
        temp->next  = New;
         cout << " Insertion Completed ! \n"  ;
        return head ;     
     }
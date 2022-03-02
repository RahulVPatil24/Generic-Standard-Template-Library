#include<iostream>
#include "GenericSTL.h"
using namespace std;
////////////////////////////////////////////////////////////////////////
////////                                                        ////////
////////                                                        ////////
////////         LINEAR SINGLY LINKEDLIST                       ////////
////////                                                        ////////
////////                                                        ////////
////////////////////////////////////////////////////////////////////////

template <class T>
 SinglyLL<T>::SinglyLL()
   {
       first = NULL;
       size = 0;
   }
   
   template <class T>
   void SinglyLL<T>::InsertFirst(T no)
   {
        node <T> * newn = new node<T>; 
       
       newn->data = no;
       newn->next = NULL;
       
       if(first == NULL)
       {
           first = newn;
       }
       else
       {
           newn->next = first;
           first = newn;
       }
       size++;
   }
   
    template <class T>
    void SinglyLL<T>::InsertLast(T no)
   {
        node <T> * newn = new node<T>;
       
       newn->data = no;
       newn->next = NULL;

       if(first == NULL)
       {
           first = newn;
       }
       else
       {
            node <T>* temp = first;
           
           while(temp->next != NULL)
           {
               temp = temp->next;
           }
           temp->next = newn;
       }
       size++;
   }
   
    template <class T>
    void SinglyLL<T>::InsertAtPos(T no, int ipos)
   {
        node <T> * temp = first;
        node <T> * newn = NULL;
        if((ipos < 1) || (ipos > size+1))
        {
            return;
        }
        if(ipos == 1)
        {
            InsertFirst(no);
        }
        else if(ipos == size+1)
        {
             InsertLast(no);
        }
        else
        {
            node <T> * newn = new node<T>;

            newn->next = NULL;
            newn->data = no;

            for (int  i = 1; i < ipos-1; i++)
            {
                temp = temp->next;
            }
            newn->next = temp -> next;
            temp->next = newn;
            
            size++;
        }
   }
   
    template <class T>
   void SinglyLL<T>::DeleteFirst()
   {
        node <T> * temp = first;
       
       if(first != NULL)
       {
           first = first->next;
           delete temp;
           
           size--;
       }
   }

    template <class T>
   void SinglyLL<T>::DeleteLast()
   {
        node <T>* temp = first;
       
       if(first == NULL)
       {
           return;
       }
       else if(first->next == NULL)
       {
           delete first;
           first = NULL;
           size--;
       }
       else
       {
           while(temp->next->next != NULL)
           {
               temp = temp->next;
           }
           
           delete temp->next;
           temp->next = NULL;
           size--;
       }
   }
   
    template <class T>
   void SinglyLL<T>::DeleteAtPos(int ipos)
   {
       if ((ipos < 1) || (ipos > size))
       {
           return;
       }
       if (ipos == 1)
       {
           DeleteFirst();
       }
       else if (ipos == size)
       {
           DeleteLast();
       }
       else
       {
           node<T> * temp = first;
           for (int i = 1; i < ipos-1; i++)
           {
               temp = temp->next;
           }
           
           node<T> * targated = temp -> next;

           temp->next = targated->next;
           delete targated;

           size--;
       }
   }
   
    template <class T>
   void SinglyLL<T>::Display()
   {
        node <T> * temp = first;
       
       while(temp!= NULL)
       {
           cout<<temp->data<<"\t";
           temp = temp->next;
       }
       cout<<"\n";
   }
   
    template <class T>
   int SinglyLL<T>::Count()
   {
       return size;
   }

////////////////////////////////////////////////////////////////////////
/////////                                                      /////////
/////////                                                      /////////
/////////                   Stack                              /////////
/////////                                                      /////////
/////////                                                      /////////     
////////////////////////////////////////////////////////////////////////

template<class T>
void stack<T> :: Display()
{
    node<T> * temp = first;
    while (temp != NULL)
    {
        cout<<"|"<<temp->data<<"->";
        temp = temp->next;
    }
    
}
template<class T>
void stack<T>::push(T no)
    {
        node<T> *newn = new node<T>;

        newn->data = no;
        newn->next = NULL;

        if (first== NULL)
        {
            first = newn;
        }
        else
        {
            newn->next = first;
            first = newn;
        }
        size++;
    } 

template<class T>
int stack<T>::pop()
{
    int no = 0;
    node<T> * temp = first;
    if (size == 0)
    {
        return -1;
    }
    
    if (size ==1)
    {
        no = first->data;
        delete first;
        first = NULL;
    }
    else
    {
        no = first->data;
        first = first -> next;
        delete temp;
    }
    size -- ;
    return no;
}

template <class T>
int stack<T>::Count()
{
    return size;
}

////////////////////////////////////////////////////////////////////////
////////                                                        ////////
////////                                                        ////////
////////       SINGLY CIRCULAR LINKEDLIST                       ////////
////////                                                        ////////
////////                                                        ////////
////////////////////////////////////////////////////////////////////////

    template<class T>
    SinglyCL<T> :: SinglyCL()
    {
        first = NULL;
        last = NULL;
        size = 0;
    }
    template<class T>
    void SinglyCL<T> :: InsertFirst(T no)
    {
        node <T> * newn = new node <T>;
        
        newn->data = no;
        newn->next = NULL;
        
        if((first == NULL) && (last == NULL))
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn->next = first;
            first = newn;
        }
        
        last->next = first;
        size++;
    }
    template<class T>
    void SinglyCL<T> :: InsertLast(T no)
    {
        node <T> * newn = new node <T>;
        
        newn->data = no;
        newn->next = NULL;
        
        if((first == NULL) && (last == NULL))
        {
            first = newn;
            last = newn;
        }
        else
        {
            last->next = newn;
            last = newn;
        }
        
        last->next = first;
        size++;
    }

    template<class T>
    void SinglyCL<T> :: InsertAtPos(T no, int iPos)
    {
        if((iPos < 1) || (iPos > (size+1)))
        {
            return;
        }
        
        if(iPos ==1)
        {
            InsertFirst(no);
        }
        else if(iPos == size+1)
        {
            InsertLast(no);
        }
        else
        {
            node <T> * newn = new node <T>;
            
            newn->data = no;
            newn->next = NULL;
            
            node <T> * temp = first;
            
            for(int i = 1; i < iPos-1; i++)
            {
                temp = temp->next;
            }
            
            newn->next = temp->next;
            temp->next = newn;
            
            size++;
        }
    }
    template<class T>
    void SinglyCL<T> :: DeleteFirst()
    {
        if((first == NULL) && (last == NULL))
        {
            return;
        }
        else if(first == last)
        {
            delete first;
            first = NULL;
            last = NULL;
        }
        else
        {
            first = first->next;
            delete last->next;
            last->next = first;
        }
        size--;
    }

    template<class T>
    void SinglyCL<T> :: DeleteLast()
    {
        node <T> * temp = first;
        
        if((first == NULL) && (last == NULL))
        {
            return;
        }
        else if(first == last)
        {
            delete first;
            first = NULL;
            last = NULL;
        }
        else
        {
            while(temp->next != last)
            {
                temp = temp -> next;
            }
            
            delete last;
            last = temp;
                
            last->next = first;
        }
        size--;
    }

    template<class T>
    void SinglyCL<T> :: DeleteAtPos(int iPos)
    {
        if((iPos < 1) || (iPos > size))
        {
            return;
        }
        
        if(iPos ==1)
        {
            DeleteFirst();
        }
        else if(iPos == size)
        {
            DeleteLast();
        }
        else
        {
            node <T> * temp = first;
            for(int i = 1; i < iPos-1; i++)
            {
                temp = temp->next;
            }
            
            node <T> * targated = temp->next;
            
            temp->next = targated->next;
            delete targated;
            
            size--;
        }
    }

    template <class T>
    void SinglyCL<T> :: Display()
    {
    node <T> * temp = first;
    
    for(int i = 1; i <= size; i++)
    {
        cout<<"|"<<temp->data<<"|-> ";
        temp = temp->next;
    }
    cout<<"\n";
    }
    template <class T>
    int SinglyCL<T>::Count()
    {
        return size;
    }

///////////////////////////////////////////////////////////////////////
/////////                                                     /////////
/////////                                                     /////////      
/////////                     Queue                           /////////
/////////                                                     /////////
/////////                                                     /////////  
///////////////////////////////////////////////////////////////////////

    template <class T>
    void Queue<T> :: Display()
    {
        node<T> * temp = first;

        while (temp != NULL)
        {
            cout<<"|"<<temp->data<<"->";
            temp = temp->next;
        }
        
    }
    template<class T>
    void Queue<T> :: Enqueue(T no)
    {
        node<T> * temp = first;
        node<T> * newn = new node<T>;

        newn->data = no;
        newn->next = NULL;

        if (first == NULL)
        {
            first = newn;    
        }
        else
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
            
        }
        size++;
    }
    template<class T>
    void Queue<T> :: Dequeue()
    {   
        node<T> * temp = first;
        if (first != NULL)
        {
            first = first->next;
            delete(temp);
            size--;
        }
    }

    template<class T>
    int Queue<T> :: Count()
    {
        return size;
    }

////////////////////////////////////////////////////////////////////////
////////                                                        ////////
////////                                                        ////////
////////      DOUBLY LINKED LIST                                ////////
////////                                                        ////////
////////                                                        ////////
////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyLL<T> :: InsertFirst(T no)
{
    node2<T> * newn = new node2<T>;
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first -> prev = newn;
        first = newn;
    }
    size++;
}
template<class T>
void DoublyLL<T> :: InsertLast(T no)
{
     node2<T> * newn = new  node2<T>;
     node2<T> * temp = first;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    size++;
}

template<class T>
void DoublyLL <T>:: InsertAtPos(T no, int ipos)
{
    if((ipos < 1) || (ipos > size+1) || (ipos <= 0))
    {
        return;
    }
    
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == size +1)
    {
        InsertLast(no);
    }
    else
    {
        node2<T> * newn= new node2<T>;
        
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;
        
        node2<T> *temp = first;
        
        for(int i = 1; i < ipos -1; i++)
        {
            temp = temp -> next;
        }
        
        newn->next = temp->next;
        newn->next->prev = newn;
        newn->prev = temp;
        temp->next = newn;
        size ++;
    }
}

template<class T>
void DoublyLL<T> :: DeleteFirst()
{
    node2<T> *temp = first;

    if (first == NULL)
    {
        return;
    }
    else
    {
        first = first -> next;
        first->prev = NULL;
        delete temp;
    } 
}

template<class T>
void DoublyLL<T> :: DeleteLast()
{
    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        node2<T> *temp = first;

        while ((temp ->next) != NULL)
        {
            temp = temp->next;
        }
        
        temp->prev->next = NULL;
        delete temp;
    }
}

template<class T>
void DoublyLL<T> :: DeleteAtPos(int ipos)
{
    if((ipos < 1) || (ipos > size)|| (ipos <= 0))
    {
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == size)
    {
        DeleteLast();
    }
    else
    {
        node2<T> * temp = first;
        
        for(int i = 1; i < ipos -1 ; i ++)
        {
            temp = temp -> next;
        }
       
        temp -> next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        
        size--;
    }
}

template <class T>
void DoublyLL<T> :: Display()
{
    node2<T> * temp = first;
    
    for(int i = 1; i <= size; i++)
    {
        cout<<"|"<<temp->data<<"|-> ";
        temp = temp->next;
    }
    cout<<"\n";
}
template <class T>
int DoublyLL<T> :: Count()
{
    return size;
}
////////////////////////////////////////////////////////////////////////
////////                                                        ////////
////////                                                        ////////
////////         DOUBLY CIRCULAR LINKEDLIST                     ////////
////////                                                        ////////
////////                                                        ////////
////////////////////////////////////////////////////////////////////////

template<class T>
void DoublyCL<T> :: InsertFirst(T no)
{
    node2<T> * newn = new node2<T>;
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first -> prev = newn;
        first = newn;
    }
    
    last->next = first;
    first->prev = last;
    size++;
}

template<class T>
void DoublyCL<T> :: InsertLast(T no)
{
    node2<T> * newn = new node2<T>;
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        last -> next = newn;
        newn->prev = last;
        last = newn;
    }
    
    last->next = first;
    first->prev = last;
    size++;
}

template<class T>
void DoublyCL<T> :: Display()
{
    node2<T> * temp = first;
    
    for(int i = 1; i <= size; i++)
    {
        cout<<"|"<<temp->data<<"|-> ";
        temp = temp->next;
    }
    cout<<"\n";
}
template<class T>
int DoublyCL<T> :: Count()
{
    return size;
}
template<class T>
void DoublyCL<T> :: DeleteFirst()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first  = NULL;
        last = NULL;
    }
    else
    {
        first = first -> next;
        delete last->next;
        first->prev = last;
        last->next = first;
    }
    size--;
}

template<class T>
void DoublyCL<T> :: DeleteLast()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first  = NULL;
        last = NULL;
    }
    else
    {
        last = last -> prev;
        delete last->next;
        first->prev = last;
        last->next = first;
    }
    size--;
}

template<class T>
void DoublyCL<T> :: InsertAtPos(T no, int ipos)
{
    if((ipos < 1) || (ipos > size+1))
    {
        return;
    }
    
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == size +1)
    {
        InsertLast(no);
    }
    else
    {
        node2<T> * newn= new node2<T>;
        
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;
        
        node2<T> * temp = first;
        
        for(int i = 1; i < ipos -1; i++)
        {
            temp = temp -> next;
        }
        
        newn->next = temp->next;
        newn->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        size ++;
    }
}
template <class T>
void DoublyCL<T> :: DeleteAtPos(int ipos)
{
    if((ipos < 1) || (ipos > size))
    {
        return;
    }
    if(ipos ==1)
    {
        DeleteFirst();
    }
    else if(ipos == size)
    {
        DeleteLast();
    }
    else
    {
        node2<T> * temp = first;
        
        for(int i = 1; i < ipos -1 ; i ++)
        {
            temp = temp -> next;
        }
       
        temp -> next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        
        size--;
    }
}
//////////////////////////////////////////////////////////////////
/////////                                                /////////
/////////                                                /////////
/////////           BINARY Search Tree                   /////////
/////////                                                /////////
/////////                                                /////////
//////////////////////////////////////////////////////////////////

template<class T>
BinarySearchTree<T>::BinarySearchTree()
{
    first = NULL;
    size = 0;
}

template<class T>
void BinarySearchTree<T> :: Insert(T no)
{
    node3<T> * temp = first;
    node3<T> * newn =  new node3<T>;

    newn -> data = no;
    newn -> lchild = NULL;
    newn -> rchild = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        while(1)    // Unconditional Loop       for( ; ; )
            {
                if(temp->data == no)
                {
                    cout<<"Duplicate node\n";
                    
                    delete newn;
                    break;
                }
                else if(no < (temp->data))    // lahan data
                {
                    if(temp -> lchild == NULL)
                    {
                        temp->lchild = newn;
                        break;
                    }
                    temp = temp -> lchild;
                }
                else if(no > (temp->data))    // motha data
                {
                    if(temp -> rchild == NULL)
                    {
                        temp->rchild = newn;
                        break;
                    }
                    temp = temp->rchild;
                }
            }
    }
    size++;
}

template<class T>
bool BinarySearchTree<T> :: Search(T no)
{
    if (first == NULL)
    {
        return false;
    }
    else
    {
        while (first != NULL)
        {
            if (first->data == no)
            {
                break;
            }
            else if (no > (first -> data))
            {
                first = first->rchild;
            }
            else if (no < (first->data))
            {
                first = first -> lchild;
            }
        }
        if (first == NULL)
        {
            return false;
        }
        else
        {
            return true;
        }
        size++;
    }
}

template<class T>
int BinarySearchTree<T> :: Count()
{
    return size;
}
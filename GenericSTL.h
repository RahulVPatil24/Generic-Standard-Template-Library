////////////////////////////////////////////////////////////////////////
////////                                                        ////////
////////                                                        ////////
////////         LINEAR SINGLY LINKEDLIST                       ////////
////////                                                        ////////
////////                                                        ////////
////////////////////////////////////////////////////////////////////////

template <typename T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLL
{
private:
    node <T> * first;
    int size;
    
public:
    SinglyLL();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T , int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};

////////////////////////////////////////////////////////////////////////
/////////                                                      /////////
/////////                                                      /////////
/////////                   Stack                              /////////
/////////                                                      /////////
/////////                                                      /////////     
////////////////////////////////////////////////////////////////////////

template<class T>
class stack
{
    private: 
    node <T> * first;
    int size;

    public:
    stack()
    {
        first = NULL;
        size = 0;
    }
    void Display();
    void push(T);
    int pop();
    int Count();
};

////////////////////////////////////////////////////////////////////////
////////                                                        ////////
////////                                                        ////////
////////       SINGLY CIRCULAR LINKEDLIST                       ////////
////////                                                        ////////
////////                                                        ////////
////////////////////////////////////////////////////////////////////////

template <class T>
class SinglyCL
{
    private: 
    node <T>* first;
    node <T>* last;
    int size;

    public:
    SinglyCL();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T , int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};

///////////////////////////////////////////////////////////////////////
/////////                                                     /////////
/////////                                                     /////////      
/////////                     Queue                           /////////
/////////                                                     /////////
/////////                                                     /////////  
///////////////////////////////////////////////////////////////////////

template <class T>
class Queue
{
    private:
    node<T> * first;
    int size;

  public:
    Queue()
    {
        first = NULL;
        size = 0;
    }
    void Display();
    void Enqueue(T no);
    void Dequeue();
    int Count();
};

////////////////////////////////////////////////////////////////////////
////////                                                        ////////
////////                                                        ////////
////////      DOUBLY LINKED LIST                                ////////
////////                                                        ////////
////////                                                        ////////
////////////////////////////////////////////////////////////////////////

template <typename T>
struct node2
{
    int data;
    struct node2 *next;
    struct node2 *prev;
};

template <typename T>
class DoublyLL
{
private:
    node2<T> * first;
    int size;
    
public:
    DoublyLL()
    {
        first = NULL;
        size = 0;
    }
    
    void Display();
    int Count();
    void InsertFirst(T no);
    void InsertLast(T no);
    void InsertAtPos(T no , int ipos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);
};

////////////////////////////////////////////////////////////////////////
////////                                                        ////////
////////                                                        ////////
////////         DOUBLY CIRCULAR LINKEDLIST                     ////////
////////                                                        ////////
////////                                                        ////////
////////////////////////////////////////////////////////////////////////

template <typename T>
class DoublyCL
{
private:
    struct node2<T> * first;
    struct node2<T> * last;
    int size;
    
public:
    DoublyCL()
    {
        first = NULL;
        last = NULL;
        size = 0;
    }
    
    void Display();
    int Count();
    void InsertFirst(T no);
    void InsertLast(T no);
    void InsertAtPos(T no , int ipos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);
};

//////////////////////////////////////////////////////////////////
/////////                                                /////////
/////////                                                /////////
/////////           BINARY Search Tree                   /////////
/////////                                                /////////
/////////                                                /////////
//////////////////////////////////////////////////////////////////

template<typename T>
struct node3
{
    int data;
    struct node3 *lchild;
    struct node3 *rchild;
};

template<class T>
class BinarySearchTree
{
    private:
        node3<T> * first;   
        int size;     
    
    public:
        BinarySearchTree();
        void Insert(T);
        bool Search(T);
        int Count();
        void Inorder();
        void Postorder();
        void Preorder();
};
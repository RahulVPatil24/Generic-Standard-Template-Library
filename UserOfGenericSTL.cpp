#include<iostream>
#include"GenericSTL.cpp"
using namespace std;
////////////////////////////////////////////////////////////////
int main()
{

    cout<<"Testing os Singly Linear linked list Functions: \n\n";
    cout<<"\nGeneric Character\n";

    SinglyLL <char>cobj;

    cout<<"\n___________________________________________\n";
    cout<<"Adding Node at First Position: \n";

    cobj.InsertFirst('B');
    cobj.InsertFirst('A');
    cobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Adding Node at Last Position: \n";
    cobj.InsertLast('D');

    cobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Adding Node at Position where user need: \n";
    cobj.InsertAtPos('C',3);
    
    cobj.Display();
    cout<<"\n___________________________________________\n";
    
    cobj.Count();
    cout<<"Total nodes are: \n"<<cobj.Count();
    cout<<"\n___________________________________________\n";

    cout<<"\n___________________________________________\n";
    cout<<"Deleting First Node\n";
    cobj.DeleteFirst();
    cobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Last node\n";
    cobj.DeleteLast();
    cobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleteing node whatever user want to delete\n";
    cobj.DeleteAtPos(1);
    cobj.Display();

////////////////////////////////////////////////////////////////////////////////////
    SinglyLL <int>iobj;

    cout<<"\nGeneric Integer\n\n";

    cout<<"\n___________________________________________\n";
    cout<<"Inserting First node\n";
    iobj.InsertFirst(21);
    iobj.InsertFirst(11);
    iobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting Last node\n";
    iobj.InsertLast(51);
    iobj.InsertLast(101);
    iobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting AtPos node\n";
    iobj.InsertAtPos(75,3);
    iobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting First node\n";
    iobj.DeleteFirst();
    iobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Last node\n";
    iobj.DeleteLast();
    iobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Atpos node\n";
    iobj.DeleteAtPos(2);
    iobj.Display();

/////////////////////////////////////////////////////////////////////////////
    SinglyLL <float>fobj;

    cout<<"\nGeneric float\n\n";

    cout<<"\n___________________________________________\n";
    cout<<"Inserting First node\n";
    fobj.InsertFirst(21.11);
    fobj.InsertFirst(11.21);
    fobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting Last node\n";
    fobj.InsertLast(51.101);
    fobj.InsertLast(101.51);
    fobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting AtPos node\n";
    fobj.InsertAtPos(75.101,3);
    fobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting First node\n";
    fobj.DeleteFirst();
    fobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Last node\n";
    fobj.DeleteLast();
    fobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Atpos node\n";
    fobj.DeleteAtPos(2);
    fobj.Display();

//////////////////////////////////////////////////////////////////////////////////
    SinglyLL <double>dobj;

    cout<<"\nGeneric double\n\n";

    cout<<"\n___________________________________________\n";
    cout<<"Inserting First node\n";
    dobj.InsertFirst(21.11);
    dobj.InsertFirst(11.21);
    dobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting Last node\n";
    dobj.InsertLast(51.101);
    dobj.InsertLast(101.51);
    dobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting AtPos node\n";
    dobj.InsertAtPos(75.101,3);
    dobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting First node\n";
    dobj.DeleteFirst();
    dobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Last node\n";
    dobj.DeleteLast();
    dobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Atpos node\n";
    dobj.DeleteAtPos(2);
    dobj.Display();

    ///////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////

    cout<<"Testing of Singly circular linkedlist functions";

    SinglyCL <char>ccobj;
    cout<<"\nGeneric Character\n";
    cout<<"\n___________________________________________\n";
    cout<<"Adding Node at First Position: \n";

    ccobj.InsertFirst('B');
    ccobj.InsertFirst('A');
    ccobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Adding Node at Last Position: \n";
    ccobj.InsertLast('D');

    ccobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Adding Node at Position where user need: \n";
    ccobj.InsertAtPos('C',3);
    
    ccobj.Display();
    cout<<"\n___________________________________________\n";
    
    ccobj.Count();
    cout<<"Total nodes are: \n"<<ccobj.Count();
    cout<<"\n___________________________________________\n";

    cout<<"\n___________________________________________\n";
    cout<<"Deleting First Node\n";
    ccobj.DeleteFirst();
    ccobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Last node\n";
    ccobj.DeleteLast();
    ccobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleteing node whatever user want to delete\n";
    ccobj.DeleteAtPos(1);
    ccobj.Display();

////////////////////////////////////////////////////////////////////////////////////
    SinglyCL <int>Ciobj;

    cout<<"\nGeneric Integer\n";

    cout<<"\n___________________________________________\n";
    cout<<"Inserting First node\n";
    Ciobj.InsertFirst(21);
    Ciobj.InsertFirst(11);
    Ciobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting Last node\n";
    Ciobj.InsertLast(51);
    Ciobj.InsertLast(101);
    Ciobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting AtPos node\n";
    Ciobj.InsertAtPos(75,3);
    Ciobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting First node\n";
    Ciobj.DeleteFirst();
    Ciobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Last node\n";
    Ciobj.DeleteLast();
    Ciobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Atpos node\n";
    Ciobj.DeleteAtPos(2);
    Ciobj.Display();

/////////////////////////////////////////////////////////////////////////////
    SinglyCL <float>CLfobj; 

    cout<<"\nGeneric float\n";

    cout<<"\n___________________________________________\n";
    cout<<"Inserting First node\n";
    CLfobj.InsertFirst(21.11);
    CLfobj.InsertFirst(11.21);
    CLfobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting Last node\n";
    CLfobj.InsertLast(51.101);
    CLfobj.InsertLast(101.51);
    CLfobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting AtPos node\n";
    CLfobj.InsertAtPos(75.101,3);
    CLfobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting First node\n";
    CLfobj.DeleteFirst();
    CLfobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Last node\n";
    CLfobj.DeleteLast();
    CLfobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Atpos node\n";
    CLfobj.DeleteAtPos(2);
    CLfobj.Display();

//////////////////////////////////////////////////////////////////////////////////
    SinglyCL <double>CLdobj;

    cout<<"\nGeneric double\n";

    cout<<"\n___________________________________________\n";
    cout<<"Inserting First node\n";
    CLdobj.InsertFirst(21.11);
    CLdobj.InsertFirst(11.21);
    CLdobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting Last node\n";
    CLdobj.InsertLast(51.101);
    CLdobj.InsertLast(101.51);
    CLdobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting AtPos node\n";
    CLdobj.InsertAtPos(75.101,3);
    CLdobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting First node\n";
    CLdobj.DeleteFirst();
    CLdobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Last node\n";
    CLdobj.DeleteLast();
    CLdobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Atpos node\n";
    CLdobj.DeleteAtPos(2);
    CLdobj.Display();

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

    cout<<"Testing of Doubly Circular linkedlist functions";

    DoublyCL <char>DCLcobj;
    cout<<"\nGeneric Character\n";
    cout<<"\n___________________________________________\n";
    cout<<"Adding Node at First Position: \n";

    DCLcobj.InsertFirst('B');
    DCLcobj.InsertFirst('A');
    DCLcobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Adding Node at Last Position: \n";
    DCLcobj.InsertLast('D');

    DCLcobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Adding Node at Position where user need: \n";
    DCLcobj.InsertAtPos('C',3);
    
    DCLcobj.Display();
    cout<<"\n___________________________________________\n";
    
    DCLcobj.Count();
    cout<<"Total nodes are: \n"<<DCLcobj.Count();
    cout<<"\n___________________________________________\n";

    cout<<"\n___________________________________________\n";
    cout<<"Deleting First Node\n";
    DCLcobj.DeleteFirst();
    DCLcobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Last node\n";
    DCLcobj.DeleteLast();
    DCLcobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleteing node whatever user want to delete\n";
    DCLcobj.DeleteAtPos(1);
    DCLcobj.Display();

////////////////////////////////////////////////////////////////////////////////////
    DoublyCL <int>DCLiobj;

    cout<<"\nGeneric Integer\n";

    cout<<"\n___________________________________________\n";
    cout<<"Inserting First node\n";
    DCLiobj.InsertFirst(21);
    DCLiobj.InsertFirst(11);
    DCLiobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting Last node\n";
    DCLiobj.InsertLast(51);
    DCLiobj.InsertLast(101);
    DCLiobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting AtPos node\n";
    DCLiobj.InsertAtPos(75,3);
    DCLiobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting First node\n";
    DCLiobj.DeleteFirst();
    DCLiobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Last node\n";
    DCLiobj.DeleteLast();
    DCLiobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Atpos node\n";
    DCLiobj.DeleteAtPos(2);
    DCLiobj.Display();

/////////////////////////////////////////////////////////////////////////////
    DoublyCL <float>DCLfobj; 

    cout<<"\nGeneric float\n";

    cout<<"\n___________________________________________\n";
    cout<<"Inserting First node\n";
    DCLfobj.InsertFirst(21.11);
    DCLfobj.InsertFirst(11.21);
    DCLfobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting Last node\n";
    DCLfobj.InsertLast(51.101);
    DCLfobj.InsertLast(101.51);
    DCLfobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting AtPos node\n";
    DCLfobj.InsertAtPos(75.101,3);
    DCLfobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting First node\n";
    DCLfobj.DeleteFirst();
    DCLfobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Last node\n";
    DCLfobj.DeleteLast();
    DCLfobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Atpos node\n";
    DCLfobj.DeleteAtPos(2);
    DCLfobj.Display();

//////////////////////////////////////////////////////////////////////////////////
    DoublyCL <double>DCLdobj;

    cout<<"\nGeneric double\n";

    cout<<"\n___________________________________________\n";
    cout<<"Inserting First node\n";
    DCLdobj.InsertFirst(21.11);
    DCLdobj.InsertFirst(11.21);
    DCLdobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting Last node\n";
    DCLdobj.InsertLast(51.101);
    DCLdobj.InsertLast(101.51);
    DCLdobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Inserting AtPos node\n";
    DCLdobj.InsertAtPos(75.101,3);
    DCLdobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting First node\n";
    DCLdobj.DeleteFirst();
    DCLdobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Last node\n";
    DCLdobj.DeleteLast();
    DCLdobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"Deleting Atpos node\n";
    DCLdobj.DeleteAtPos(2);
    DCLdobj.Display();

////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
    stack <int>stkiobj;

    cout<<"\nTesting of stack\n";

    cout<<"\nGeneric int\n";

    cout<<"\n___________________________________________\n";
    cout<<"\n Pushing value in to the stack\n";
    stkiobj.push(21);
    stkiobj.push(11);
    stkiobj.Display();
    cout<<"\n___________________________________________\n";

    cout<<"\n___________________________________________\n";
    cout<<"\n poping value from the stack\n";
    stkiobj.pop();
    stkiobj.Display();
    cout<<"\n___________________________________________\n";

////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
    stack <char>stkcobj;

    cout<<"\nGeneric char\n";

    cout<<"\n___________________________________________\n";
    cout<<"\nPushing value in to the stack\n";
    stkcobj.push('A');
    stkcobj.push('B');
    stkcobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"\nPopping value in to the stack\n";
    stkcobj.pop();
    stkcobj.Display();

////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
    stack <float>stkfobj;

    cout<<"\nGeneric float\n";

    cout<<"\n___________________________________________\n";
    cout<<"\n Pushing value in to the stack\n";
    stkfobj.push(21.11);
    stkfobj.push(11.21);
    stkfobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"\nPopping value in to the stack\n";
    stkfobj.pop();
    stkfobj.Display();

////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
    stack <float>stkdobj;

    cout<<"\nGeneric Double\n";

    cout<<"\n___________________________________________\n";
    cout<<"\n Pushing value in to the stack\n";
    stkdobj.push(51.101);
    stkdobj.push(101.51);
    stkdobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"\nPopping value in to the stack\n";
    stkdobj.pop();
    stkdobj.Display();

////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
    Queue <int>Qiobj;

    cout<<"\nTesting of Queue\n";

    cout<<"\n___________________________________________\n";
    cout<<"\nGeneric Int\n";
    cout<<"\n___________________________________________\n";
    
    cout<<"\n Inserting value in to the Queue\n";

    Qiobj.Enqueue(21);
    Qiobj.Enqueue(11);
    Qiobj.Enqueue(51);
    Qiobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"\n Deleting Value from Queue\n";
    cout<<"\n___________________________________________\n";

    Qiobj.Dequeue();
    Qiobj.Display();

////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
    Queue <char>Qcobj;

    cout<<"\n___________________________________________\n";
    cout<<"\nGeneric Char\n";
    cout<<"\n___________________________________________\n";
    
    cout<<"\n Inserting value in to the Queue\n";

    Qcobj.Enqueue('A');
    Qcobj.Enqueue('B');
    Qcobj.Enqueue('C');
    Qcobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"\n Deleting Value from Queue\n";
    cout<<"\n___________________________________________\n";

    Qcobj.Dequeue();
    Qcobj.Display();

////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
    Queue <float>Qfobj;

    cout<<"\n___________________________________________\n";
    cout<<"\nGeneric Float\n";
    cout<<"\n___________________________________________\n";
    
    cout<<"\n Inserting value in to the Queue\n";

    Qfobj.Enqueue(21.11);
    Qfobj.Enqueue(11.11);
    Qfobj.Enqueue(51.21);
    Qfobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"\n Deleting Value from Queue\n";
    cout<<"\n___________________________________________\n";

    Qfobj.Dequeue();
    Qfobj.Display();

////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
    Queue <double>Qdobj;

    cout<<"\n___________________________________________\n";
    cout<<"\nGeneric Double\n";
    cout<<"\n___________________________________________\n";
    
    cout<<"\n Inserting value in to the Queue\n";

    Qdobj.Enqueue(21.11);
    Qdobj.Enqueue(11.11);
    Qdobj.Enqueue(51.21);
    Qdobj.Display();

    cout<<"\n___________________________________________\n";
    cout<<"\n Deleting Value from Queue\n";
    cout<<"\n___________________________________________\n";

    Qdobj.Dequeue();
    Qdobj.Display();
    return 0;
}

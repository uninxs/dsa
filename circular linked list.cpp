#include<iostream>
#include<stdlib.h>
//practical 2B

using namespace std;

struct Node
{
    int info;
    Node* next;
};

class List:public Node
{
    Node *begin;
    Node *ptr;
    Node *ptr2;
    Node *pos;
    Node *Newnode;

public:
List()
{
    begin=NULL;
}
void create();
void display();
void searching();
void insert();
void deletion();
};
void List::create()
{
    int y;
    if(begin!=NULL)
    {
        cout<<"\n Linked list already created";
    }
    else
    {
        int y=1;
        while(y==1)
        {
        Newnode=new Node;// empty dabba create hoga
        Newnode->next=NULL;
        cout<<"\nEnter the  element";
        cin>>Newnode->info;
            if(begin==NULL)
            {
                begin=ptr=Newnode;
                begin->next=begin;
            }
            else
            {
                ptr->next=Newnode;
                Newnode->next=begin;
                ptr=Newnode;
            }
        cout<<"\n Do you wish to enter another node?(1/0)";
        cin>>y;
        }
    }

};

void List::display()
{
    if(begin==NULL)
    {
        cout<<"\n No elements to display";
    }
    else
    {
        ptr=begin;
        cout<<"\n The elements are \n";
        do{
            cout<<"\n"<<ptr->info<<"\n";
            ptr=ptr->next;
        }while(ptr!=begin);
    }
};



void List::searching()
{
    int n,flag;
    if(begin==NULL){
        cout<<"\n no nodes present";
    }
    else
    {
        cout<<"\n enter value to search";
        cin>>n;
        ptr=begin;
        do {
            if(ptr->info==n)
            {
                cout<<"\n found at "<<ptr;
                flag=0;
                break;
            }
            else
            {
                ptr=ptr->next;
            }
        }while(ptr!=begin);
    }
    if(flag!=0){
        cout<<"\n search not found";
    }
    getchar();
};

void List::insert(){
    int ch;
Newnode=new Node;
cout<<"Enter the element";
cin>>Newnode->info;
Newnode->next=NULL;
cout<<"\n Insert at \n 1. beginning  \n 2. End \n 3. after a particular element";
cin>>ch;
switch(ch)
{
    case 1:
    if(begin==NULL){
        begin=Newnode;
        Newnode->next=begin;
        
    }
    else{
        ptr=begin;
        while(ptr->next!=begin){
            ptr=ptr->next;
        }
        Newnode->next=begin;
        begin=Newnode;
        ptr->next=begin;
        
    }
    break;
    case 2:
    if(begin==NULL){
        begin=Newnode;
        Newnode->next=begin;
       
    }
    else{
        ptr=begin;
        while(ptr->next!=begin){
            ptr=ptr->next;
        }
        ptr->next=Newnode;
        Newnode->next=begin;
        
    }
    break;

   case 3:
    int item,flag;
    cout<<"\n Enter element after which to insert";
    cin>>item;
    ptr=begin;
    do{
        if(ptr->info==item){
         Newnode->next=ptr->next;
        ptr->next=Newnode;
        cout<<" Data found hence insertion done";
        flag=0;
        break;
        }
        else{
            ptr=ptr->next;
        }
    }while(ptr!=begin);
    if(flag!=0){
        cout<<" Data not found hence insertion not done";
    }
    }
};

void List::deletion(){
    int ch,elem;
    if(begin==NULL)
    {
        cout<<"Deletion not possible no nodes in LL";
    }
    else{
        cout<<"\n Delete at \n 1. beginning  \n 2. End \n 3.a particular element";
        cin>>ch;

        switch(ch)
        {
            case 1:
            cout<<"The elemt to be deleted is "<<begin->info;
             if(begin->next==begin){
                begin=NULL;
            }
            else{
            pos=begin;
            while(pos->next!=begin){
                pos=pos->next;
            }
            begin=begin->next;
            pos->next=begin;
            }
            break;
            case 2:
            if(begin->next==begin){
                begin=NULL;
            }
            else{
            ptr=begin;
            ptr2=ptr->next;
            while(ptr2->next!=begin){
                ptr=ptr->next;
                ptr2=ptr2->next;
            }
            cout<<"The elemt deleted is "<<ptr2->info;
            ptr->next=begin;       
            }   
            break;
            /*case 3:
            int item,flag;
            cout<<"The elemt to delete";
            cin>>elem;
            ptr=begin;
    do{
        if(ptr->info==item){
         Newnode->next=ptr->next;
        ptr->next=Newnode;
        cout<<" Data found hence insertion done";
        flag=0;
        break;
        }
        else{
            ptr=ptr->next;
        }
    }while(ptr!=begin);
    if(flag!=0){
        cout<<" Data not found hence insertion not done";
    }*/
    }
    }
};

int main()
{
    List l;
    int opt;
    system("cls");
    while(1)
    {
       cout<<"\n Menu \n";
       cout<<"\n1.  Create \n";
       cout<<"\n2.  Display \n";
       cout<<"\n3.  Search \n";
       cout<<"\n4.  Insertion \n";
       cout<<"\n5.  Deletion \n";
       cout<<"\n6.  Exit \n";
       cout<<"\n Enter your choice \n";
        cin>>opt;
        switch(opt)
        {
            case 1:
            l.create();
            break;
            case 2: 
            l.display();
            break;
            case 3: 
            l.searching();
            break;
            case 4:
            l.insert();
            break;
            case 5:
            l.deletion();
            break;
            case 6:
            exit(0);
            default:
            cout<<"enter correct option";
            break;
        }
    }
    return 0;
}
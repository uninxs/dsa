#include<iostream>
using namespace std;
struct Node
{
Node *pre;
int info;
Node *next;
};
class List
{
    Node *begin;
    Node *end;
    Node *ptr;
    Node *ptr2;
    Node *prev;
    Node *succ;
    Node *Newnode;

public: List()
{
    begin=NULL;
    end=NULL;
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
    {   int y=1;
        while(y==1)
        {
        Newnode=new Node;// empty dabba create hoga
        Newnode->next=NULL;
        Newnode->pre=NULL;
        cout<<"\nEnter the  element";
        cin>>Newnode->info;
            if(begin==NULL)
            {
                begin=ptr=end=Newnode;  
            }
            else
            {
                Newnode->next=ptr;
                ptr->pre=Newnode;
                begin=Newnode;
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
        while(ptr!=NULL)
        {
            cout<<"\n"<<ptr->info<<"\n";
            ptr=ptr->next;
        }
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
        do
        {
            if(ptr->info==n)
            {
                cout<<"\n found at "<<ptr;
                flag=1;
                break;
            }
            else
            {
                ptr=ptr->next;
            }
        }while(ptr!=NULL);
    }
    if(flag!=1){
        cout<<"\n Element not found";
    }
    getchar();
};

void List::insert(){

    int ch;

Newnode=new Node;

cout<<"Enter the element";
cin>>Newnode->info;
Newnode->next=NULL;
Newnode->pre=NULL;
cout<<"\n Insert at \n 1. beginning  \n 2. End \n 3. after a particular element";
cin>>ch;

switch(ch)
{
    case 1:
        if(begin==NULL){
        begin=Newnode;
        end=Newnode;
    }
    else{
        Newnode->next=begin;
        begin->pre=Newnode;
        begin=Newnode;
    }
    cout<<"Element inserted at the beginning";
    break;
   
   case 2:
        if(begin==NULL){
        begin=Newnode;
        end=Newnode;
    }
    else{
       
        Newnode->pre=end;
        end->next=Newnode;
        end=Newnode;
    }
    cout<<"Element inserted at the end";
    break;
    case 3:
    int item,flag;
    if(begin==NULL){
      cout<<"\n Insertion not possible since LL empty";
      break;
    }
    cout<<"\n Enter element after which to insert";
    cin>>item;
    ptr=begin;
    while(ptr->next!=NULL && ptr->info!=item){
        ptr=ptr->next;
    }
    if(ptr->next==NULL & ptr->info!=item){
        cout<<"data not present";
    }
    if(ptr->next!=NULL){
        ptr2=ptr->next;
        Newnode->next=ptr2;
        ptr->next=Newnode;
        Newnode->pre=ptr;
        ptr2->pre=Newnode;
    }
    else{
        Newnode->next=NULL;
        Newnode->pre=ptr;
        ptr->next=Newnode;
        end=Newnode;
    }

    break;
}
};

void List::deletion(){
int ch;
if(begin==NULL){
cout<<"\n deletion not possible LL empty";
}
else{
cout<<"\n Delete at \n 1. beginning  \n 2. End \n 3.  a particular element";
cin>>ch;

switch(ch)
{
    case 1:
     begin->next->pre=NULL;
begin=begin->next;  \
break;
case 2:
end->pre->next=NULL;
end=end->pre;
break;
case 3:
int item,flag;
    if(begin==NULL){
      cout<<"\n Deletion not possible since LL empty";
      break;
    }
    cout<<"\n Enter element to delete";
    cin>>item;
    ptr=begin;
    while(ptr!=NULL && ptr->info!=item){
        ptr=ptr->next;
    }
    if(ptr==NULL && ptr->info!=item){
        cout<<"data not present";
    }
    else if(ptr->pre==NULL){
        ptr2=ptr->next;
        ptr2->pre=NULL;
begin=ptr2;
    }
    else if(ptr->next==NULL){
        ptr2=ptr->pre;
        ptr2->next=NULL;
        end=ptr2;
    }
    else{
    prev=ptr->pre;
    succ=ptr->next;
    prev->next=succ;
    succ->pre=prev;
}

    break;
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

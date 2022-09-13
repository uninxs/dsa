#include <iostream>
using namespace std;
//creating node
struct node{
    int info;
    node*next;
};
//declaring pointer variables that store addresss of nodes
node *beg, *newnode, *ptr,*ptr1,*ptr2;
//declaring functions
void traversal(struct node*ptr);
void insertion();
void deletion();
void searching();
//main function
int main(){
//declare variables for accepting user choice
    char ch;
    int choice;
    beg = NULL;
    do{
        cout<<"Enter 1 for traversal \n Enter 2 for insertion \n  Enter 3 for deletion \n Enter 4 for Searching \n Enter 5 to exit \n";
        cin>>choice;
        switch(choice){
            case 1: traversal(beg);
            break;
           
           case 2: insertion();
            break;
            case 3: 
            if(beg==NULL){
                cout<<"No nodes, Deletion not possible";
                }
                else{
                    deletion();
                }
            break;
            
           case 4:searching();
            break;
            
            case 5:
            exit(0);
            break;
           
            default:
            cout<<"Incorrect choice";
        }
        cout<<"\nDo you want to continue?";
        cout<<" (Press y/n): ";
        cin>>ch;
    }while(ch=='y');
   
return 0;
   
}


void traversal(struct node *ptr){
//if ptr=beg=null
    if (ptr==NULL){
        cout<<"Empty linked list";
    }
    else{
	//printand traverse till ptr does not come out of the linked list
        while(ptr!=NULL) 
        {
            cout<<ptr->info<<" ";
            ptr=ptr->next;
        }
    }
}

void insertion(){
    int ch,c;
    cout<<"\n1. At start \n2. At end \n3. At a particular position";
    cout<<"\nEnter your choice: ";
    cin>>ch;
    switch(ch){
        case 1:
//create new empty node(dabba)
        newnode= new node();
        cout<<"\nEnter Data: ";
        cin>>newnode->info;
        newnode->next=beg;
        beg=newnode;
        break;
       
        case 2:
        newnode = new node();
        cout<<"\nEnter data: ";
        cin>>newnode->info;
        newnode->next=NULL;
        if(beg==NULL){
            beg=newnode;
        }
        else{
            ptr=beg;
//till ptr does not reach the last node, keep traversing
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=newnode;
        }
        break;
       
        case 3:
        if(beg==NULL){
            cout<<"No Insertion";
        }
        else{
            cout<<"Enter the value after which to insert: \n ";
            cin>>c;
            ptr=beg;
//till ptr is not outside the linekd list and does not find the data,keep traversing
            while(ptr!=NULL & ptr->info!=c){
                ptr=ptr->next;
            }
//if ptr comes out of the linked list, data not foound,no insertion
        if(ptr==NULL){
            cout<<"Data not found hence insertion not possible";
        }
        else{
            newnode = new node();
            cout<<"Enter Data: ";
            cin>>newnode->info;
            newnode->next=ptr->next;
            ptr->next=newnode;
        }
        }
        break;
    }
}

void deletion(){
    int ch,c;
    cout<<"\n1. At start \n2. At end \n3. At a particular position";
    cout<<"\nEnter your choice: ";
    cin>>ch;
    switch(ch){
        case 1:
        beg=beg->next;
        break;
       
        case 2:
        //if only one node
        if(beg->next==NULL){
            beg=NULL;
        }
        //if more than 1 node
        else{
            ptr=beg;
            ptr1=beg->next;
            while(ptr1->next!=NULL){
                ptr=ptr->next;
                ptr1=ptr1->next;
            }
        ptr->next=ptr1->next;
        }
        break;
       
        case 3:
        int item;
        cout<<"Enter the value to delete: \n ";
            cin>>item;
        if(beg->info==item){
            beg=beg->next;
        }
        else{
            ptr1=beg;
            ptr2=beg->next;
// till ptr2 is not outside the linked list and data not found,keep traversing ptr1 and ptr2
            while(ptr2!=NULL && ptr2->info!=item){
                ptr1=ptr2;
                ptr2=ptr2->next;
            }
            if(ptr2==NULL){
                cout<<"Node containing element Item not found";
            }
            else{
                ptr1->next=ptr2->next;
            }
        }
        break;
    }
}

void searching(){
    int data,flag=0;
    cout<<"enter eleemnt to search";
    cin>>data;
    if(beg==NULL){
        cout<<"LL empty";   
    }
    else{
        ptr=beg;
        while(ptr!=NULL){
            if(ptr->info==data){
                flag=1;
                break;
            }
            else{
                ptr=ptr->next;
            }
        }
        if(flag==1){
            cout<<"Element found at " <<ptr;
        }
        else{
        cout<<"Element not found";
        }
    }
}

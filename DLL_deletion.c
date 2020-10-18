#include <stdio.h>
#include <stdlib.h>

struct Node{ 

int data;
struct Node*next;
struct Node*prev;

};



struct Node*start=NULL;


void insert_begin()
{ 

int ele; 

printf("Enter value to be inserted : ");
scanf("%d",&ele);

struct Node*newNode=NULL;

newNode=(struct Node*) malloc(sizeof(struct Node)); 

if(newNode==NULL)
{ printf("out of memory sorry!");
return;
}

newNode->data=ele;

if(start==NULL)
{ 
start=newNode;
}

else
{ 
newNode->next=start;
start=newNode;

}


}




int delete_begin()
{ 

struct Node* next=NULL;
struct Node* prev=NULL;

struct Node* temp=start;

if(start==NULL)
{
printf("list is empty");
}

else{

int x=temp->data;

if(temp->next==NULL)

{
free(temp);
return x;
}

else{

start=temp->next;
temp->next->prev=NULL;
temp->next=NULL;
free(temp);
return x;

}


}



}


int delete_end()
{ 

struct Node* next=NULL;
struct Node* prev=NULL;

struct Node* temp=start;

if(start==NULL)
{
printf("list is empty");
}

else{

int x=temp->data;

if(start->next==NULL)
{
start=NULL;
free(temp);
return x;

}

else{

struct Node*ref=start;

while(temp->next->next!=NULL){

temp=temp->next;
}

ref=temp->next;

int x = ref->data;
ref ->prev=NULL;
temp->next=NULL;
free(ref);
return x;



}


}



}



int delete_before()
{ 

int before_val; 


printf("Enter value before which the element is to be deleted : ");
scanf("%d",&before_val);

struct Node* next=NULL;
struct Node* prev=NULL;

struct Node* temp=start;
struct Node* ref=start;



// searching the before_val to check whether this element really exists in linked list or not

int found=0;

while(ref!=NULL)
{

if(ref->data==before_val)
{ //printf("found!!");
found=1;
}

ref=ref->next;


}



if(found==1)

{


if(start->data==before_val){

printf("nothing before to delete :) ");

}

else{
    
if(start->next->data==before_val)
{
    int x=temp->data;
    start=temp->next;
    start->prev=NULL;
    temp->next=NULL;
    free(temp);
    return x;
}

else{
while(temp->next->next->data!=before_val){
temp=temp->next;
}

ref=temp->next;
int x=ref->data;
temp->next=ref->next;
ref->next->prev=temp;
free(ref);
return x;

}

}

}

else{

printf("The element before which the  value is to be deleted doesnt exist in the linked list!");
}


}


int delete_after()
{ 

int after_val; 

printf("Enter value after which the element is to be deleted : ");
scanf("%d",&after_val);

struct Node* next=NULL;
struct Node* prev=NULL;

struct Node* temp=start;
struct Node* ref=start;


// searching the after_val to check whether this element really exists in linked list or not

int found=0;

while(ref!=NULL)
{

if(ref->data==after_val)
{ //printf("found!!");
found=1;
}

ref=ref->next;


}



if(found==1)

{
    
    
    
if(start->data==after_val && start->next==NULL){
    
    
    printf("nothing after it to delete :) ");
    
}

else
{

while(temp->data!=after_val){
temp=temp->next;
}


ref=temp->next;
int x = ref->data;
if(ref->next==NULL)
{ temp->next=NULL;
  ref->prev=NULL;
  free(ref);
  return x;
}
else
{
  
temp->next=ref->next;
ref->next->prev=temp;
free(ref);
return x;
}
}



}

else{

printf("The element after which the value is to be deleted doesnt exist in the linked list!");
}



}






void traverse() 
{ 

struct Node* p;

if(start==NULL)
{ printf("The list is empty");
printf("\n");
}

else
{ 
p=start;

printf("The elements are : ");

while (p != NULL)
{
printf(" %d ", p->data); 
p = p->next; 


} 

}

} 



int main()
{ 
int ch;

while(1)
{ 
printf("\nDLL deletion \n");

printf("1- insert begin , 2- del begin , 3- del end , 4-del before , 5-del after , 6-traverse , 7-exit\n");

printf("Enter your choice : ");
scanf("%d",&ch);


switch(ch)

{ 

case 1: insert_begin();
break;

case 2: delete_begin();
break;

case 3: delete_end();
break;

case 4: delete_before();
break;

case 5: delete_after();
break;

case 6: traverse();
printf("\n");
break;

case 7: exit(0);
break;

default: printf("Wrong choice !");
break;

}

} 
return 0;
}

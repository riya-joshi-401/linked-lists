#include<stdio.h>
#include<stdlib.h>


struct Node{
   
    int data;
    struct Node*next;
};

struct Node*start=NULL;

void insert()
{
    
    int ele;
   
    printf("Enter value to be inserted : ");
    scanf("%d",&ele);
   
    struct Node*newNode=NULL;
    struct Node*temp;
    temp=start;
   
    newNode=(struct Node*) malloc(sizeof(struct Node));
   
    if(newNode==NULL)
    {
        printf("out of memory sorry!");
        return;
    }
   
    newNode->data=ele;
   
    if(start==NULL)
    {
        start=newNode;
       
    }
   
    else
    {
       
        while(temp->next!=NULL)
        {
           
            temp=temp->next;
        }
       
        temp->next=newNode;
       
    }


}



void reverse_iterative()

{        
    
    struct Node*prevnode , *currentnode , *nextnode;
    
    
    prevnode=0;
    currentnode = nextnode = start;
    
    while(nextnode!=0)
    {  nextnode = nextnode -> next;
       
       currentnode -> next = prevnode;
       
       prevnode = currentnode ;
       
       currentnode = nextnode ;
       
    }
    
    start = prevnode ;
    
}

void reverse_recursive(struct Node*start)
{
    
    
    if(start==NULL)
    { return;
    }
    
    rev(start->next);
    
    printf("%d ",start->data);
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
   
    int choice;
   
    while(1)
   
    {   printf("\n");
        printf("1- insert , 2- reverse iterative , 3- reverse recursive , 4- traverse , 5- exit");
        printf("\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
       
        switch(choice)
       
        {
           
            case 1: insert();
                    break;
                   
            
            case 2: reverse_iterative();
                    break;
                    
            case 3: reverse_recursive(start);
                    break;
            
            case 4: traverse();
                    break;
                   
            case 5: exit(0);
           
            default: printf(" Wrong choice !");
                     break;
           
           
        }
       
       
       
       
    }

    return 0;
}

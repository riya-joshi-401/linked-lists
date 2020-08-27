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


void find_key_count()
{
    
  struct Node*temp=start;
  int count=0,key;
  
  printf("Enter the key : ");
  scanf("%d",&key);
  
 
  while(temp!=NULL)
  {
      
      
      if(temp->data==key)
      { 
          count++;
          
      }
      
      
      temp=temp->next;
      
      
     
      
  }
  
  printf("The count of key in the linked list is : %d",count);
    
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
        printf("1- insert , 2- find number of times a key occurs , 3- traverse , 4- exit");
        printf("\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
       
        switch(choice)
       
        {
           
            case 1: insert();
                    break;
                   
            
            case 2: find_key_count();
                    break;
                    
            case 3: traverse();
                    break;
                   
            case 4: exit(0);
           
            default: printf(" Wrong choice !");
                     break;
           
           
        }
       
       
       
       
    }

    return 0;
}

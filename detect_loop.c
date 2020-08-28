#include<stdio.h>
#include<stdlib.h>


struct Node{
   
    int data;
    struct Node*next;
    int flag;
    
};

struct Node*start=NULL;


void insert()
{
    // we'll insert only four nodes so that we can make a loop and test the code  XD
    
    
    
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
    newNode->flag=0;
   
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


void detect_loop_method1()
{
    
  struct Node*ref1=start,*ref2=start; 
  
  start->next->next->next->next = start;  // using this we make a loop first 
 
  
  // here we will use two pointers to traverse the sll such that one is two nodes ahead of the other.And at some point if they meet then there's a loop. 
  
  while(ref1&&ref2)
  {
      
      ref1=ref1->next;
      ref2=ref2->next->next;
      
      if(ref1==ref2)
      { 
          
          printf("Loop found!");
          break;
          
      }
      
      
      
     
      
  }
  
  
    
}



void detect_loop_method2()
{
  int n=0,tempp=0;
  struct Node*temp;
  temp=start;

  start->next->next->next->next = start->next;

  while(temp!=NULL)
  {  // here the logic used is each node also has a flag ( while inserting always is 0) which if visited has a value 1 .So if a node is already  has flag value of 1 it indicates that theres a loop beacsue in a linked list without a loop a would be traversed only once.

     if(temp->flag==1)
     {
       printf("loop found!");
       tempp=1;
       break;
     }
     n++;
     temp->flag=1;
     temp=temp->next;

  }
   
   if(tempp==1)
   { printf("Length of detected loop is : %d",n);
            }
   else
            {
               printf("No loop found!");
               
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
   
    int choice;
   
    while(1)
   
    {   printf("\n");
        printf("1- insert , 2- detect loop method 1  , 3- detect loop method 2 , 4- traverse , 5- exit");
        printf("\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
       
        switch(choice)
       
        {
           
            case 1: insert();
                    break;
                   
            
            case 2: detect_loop_method1();
                    break;
                    
            case 3: detect_loop_method2();
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

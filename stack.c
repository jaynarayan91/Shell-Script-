// Write a program to implementation of stack using array!!

#include<stdio.h>
#include<stdlib.h>

#define size 5

int top = -1, array[size];

void push();
void pop();
void display();

int main()
{
    int choice;
    while(1)
    {
       printf("\nOperation performed by the stack:\n");
       printf("\n1.Push the element\n2.Pop the element\n3.Display\n4.End");
       printf("\n\nEnter the choice:");
       scanf("%d",&choice);
       
       switch(choice)
       {
          case 1:push();
                        break;
          case 2:pop();
                        break;
          case 3:display();
                        break;
          case 4:exit(0);
          
          default: printf("\nInvalid Choice!!");
       }
    }
}

void push()
{
   int value;
   
   if(top == size - 1)
   {
       printf("\nOverflow!!");
   }
   else
   {
      printf("\nEnter the element to be inserted to the stack:");
      scanf("%d",&value);
      top = top + 1;
      array[top] = value;
   }
}

void pop()
{
   if(top == -1)
   {
      printf("\nUnderflow!!");
   }
   else
   {
      printf("\nPoped Element = %d",array[top]); 
      top = top - 1;
   }
}

void display()
{
   if(top == -1)
   {
       printf("\nUnderflow!!");
   }
   else
   {
      printf("\nElement present in the stack:\n");
      for(int i = top;i>=0;--i)
      {
           printf("%d\n",array[i]);
      }
   }
}                              










      
                                                  

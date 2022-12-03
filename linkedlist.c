//write a program to create a single list!!!

#include<stdlib.h>
#include<stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

void deleteStart(struct Node** head)
{
    struct Node* temp = *head;
  
    if(*head == NULL)
    {
        printf("Impossible to delete from empty Singly Linked List");
        return;
    }
    
   
    *head = (*head)->next;
    printf("Deleted: %d\n", temp->data);
    free(temp);
}

void insertStart(struct Node** head, int data)
{
    
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    
    newNode->data = data;
    newNode->next = *head;

    
    *head = newNode;
    printf("Inserted %d\n",newNode->data);
}

void display(struct Node* node)
{
    printf("\nLinked List: ");
   
    while(node!=NULL){
        printf("%d ",node->data);
        node = node->next;
    }
    printf("\n");
}

int main()
{
    struct Node* head = NULL;

    int n;
    printf("\n\n Linked List : To create and display Singly Linked List :\n");
    printf("-------------------------------------------------------------\n");
		
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    insertStart(n);
    printf("\n Data entered in the list : \n");
    displayList();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node* next;
} Node;
Node* head = NULL;

Node* createNode();
void insertNode();
void deleteNode();
void destroyList();
void viewList();

int main(void){
    int choice;
    while (1)
    {
        printf("\nPress 1 to add a value to the beginning of the list.");
        printf("\nPress 2 to delete a value to the beginning of the list.");
        printf("\nPress 3 to delete the list.");
        printf("\nPress 4 to view the list.");
        printf("\nPress 0 to exit.");

        printf("\n\nEnter your choice: ");
        scanf("%i", &choice);
        switch (choice)
        {
            case 1:
                insertNode();
                break;
             case 2:
                deleteNode();
                break;
            case 3:
                destroyList();
                break;
            case 4:
                viewList();
                break;
            default:
                printf("\nInvalid choice");
        }
        if (choice == 0){
            return 0;
        }
    }
    return 0;
}
Node* createNode(){
    Node* temp = malloc(sizeof(Node));
    return temp;
};
void insertNode(){
    Node* temp = createNode();
    
    int value;
    printf("\nEnter a vlalue to be inserted: ");
    scanf("%i", &temp -> value);
    temp -> next = NULL;
    
    if (head == NULL){
        head = temp;
    } else {
        temp -> next = head;
        head = temp;
    }
}
void deleteNode(){
    if (head == NULL){
        printf("\nList is Empty.\n");
    } else {
        Node* temp = head;
        head = head -> next;
        free(temp);
    }
}
void destroyList(){
    while (head != NULL){
        Node* temp = head -> next;
        free(head);
        head = temp; 
    }
}
void viewList(){
    printf("\nValues: ");
    for (Node* temp = head; temp != NULL; temp = temp -> next){
        printf("%i ", temp -> value);
    }
}
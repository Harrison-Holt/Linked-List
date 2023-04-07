#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

node* start = NULL;

void createHead() {
  
  // allocate memory for the head node 
  start = (node*)malloc(sizeof(node)); 
  
  // prompt the user to enter the data for the head node 
  printf("Enter data for the head node: "); 
  scanf("%d", &start->data); 
  
  // create null pointer 
  start->next = NULL; 
}
void insert_front() {
  
  // create new node and allocate memory for the node 
  node* new_node = (node*)malloc(sizeof(node)); 
  
  // prompt the user to enter for the new node 
  printf("Enter data for the new node: "); 
  scanf("%d", &new_node->data); 
  
  // point the new node pointer to the start node
  new_node->next = start; 
  
  // Set the start node to the new node
  start = new_node; 
 
}
void insert_end() {
        
  node* current; 
  node* new_node = (node*)malloc(sizeof(node)); 
  
  printf("Enter data for the new node: "); 
  scanf("%d", &new_node->data); 
  
  new_node->next = NULL; 
  
  current = start; 
  
  while (current->next != NULL) {
      
      current = current->next; 
  }
  
    current->next = new_node; 
}
void insert_pos() {
    
    node *current, *new_node; 
    int pos; 
    new_node = (node*)malloc(sizeof(node)); 
    
    printf("Enter position to insert the new node: "); 
    scanf("%d", &pos);
    printf("Enter data for the new node: "); 
    scanf("%d", &new_node->data); 
    
    new_node->next = NULL; 
    
    if(pos == 0) {
        
        new_node->next = start; 
        start = new_node; 
    }
    else {
        
        current = start; 
        
        for(int i = 0; i < pos - 1; i++) {
            
            current = current->next; 
        }
        
        new_node->next = current->next; 
        current->next = new_node; 
    }
    
}
void delete_begin() {
    
    node* current; 
    current = start; 
    start = start->next; 
    free(current); 
}
void delete_end() {
    
    node *current, *temp; 
    current = start; 
    while(current->next != NULL) {
        
        temp = current;
        current = current->next; 
    }
    temp->next = NULL; 
    printf("nThe deleted element is:%d",current->data);
    free(current); 
}
void delete_pos() {
    
    node * current, *temp; 
    current = start; 
    int pos; 
    printf("Enter position to delete node: "); 
    scanf("%d", &pos); 
    
    for(int i = 0; i < pos; i++) {
        
        temp = current; 
        current = current->next; 
    }
    temp->next = current->next; 
    free(current); 
}
void display()
{
        struct node *current;
        if(start==NULL)
        {
                printf("\nList is empty\n");
                return;
        }
        else
        {
                current=start;
                printf("\nThe List elements are:\n");
                while(current!=NULL)
                {
                        printf("%d ",current->data );
                        current=current->next ;
                }
        }
}

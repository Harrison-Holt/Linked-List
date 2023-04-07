#ifdef FUNCTIONS_H_
#define FUNCTIONS_H_

typedef struct node {
    
 int data;
 struct node *next;
 
} node;

void createHead();
void display();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void insert_front(); 

#endif 

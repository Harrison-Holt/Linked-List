/** 
 * Linked list in C 
 * 
 *  March 1, 2023 
 */ 
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "functions.h"

int main() {
        
    int choice;
    while(1){
               
    printf("\nMENU");
    printf("\n 1.Create");
    printf("\n 2.Display");
    printf("\n 3.Insert at end");
    printf("\n 4.Insert at position"); 
    printf("\n 5.Delete head"); 
    printf("\n 6.Delete end node");
    printf("\n 7.Delete at position"); 
    printf("\n 8.Insert at front"); 
    printf("\n 9.Exit");
    printf("\n--------------------------------------\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
                
        switch(choice) {
                        https://www.onlinegdb.com/edit/1gPjcu5FI#tab-stdin
            case 1:
            createHead();
            break;
                        
            case 2:
            display();
            break;
                        
            case 3: 
            insert_end(); 
            break; 
                        
            case 4:
            insert_pos(); 
            break; 
            
            case 5:
            delete_begin();
            break; 
            
            case 6:
            delete_end(); 
            break; 
            
            case 7:
            delete_pos(); 
            break; 
            
            case 8:
            insert_front(); 
            break; 

            case 9:
            exit(0);
            break;
                             
            default:
            printf("\nINVALID\n");
            break;
            
                }
        }
        return 0;
}

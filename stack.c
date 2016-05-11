/**
 * 	@file: stack.c
 * 	@author: Guiping Xie 
 *
 * 	@description: Stack data structure 
 *	@date: Spring 2016
 *
 */
 

#include "stack.h"

/**
 * 	Using a linked list implementation
 *
 */
typedef struct linked_list {
	/* The data the node will be holding */
	void* data;

	/* The next pointer --- can be NULL to indicate the end */	
  struct linked_list* next; 
  
} list_node;



/* Initialize the stack --- similar to a constructor in C++ */
void init_stack( stack* s ) {
	
}


/* Destroy the stack --- similar to a destructor in C++ */
void destroy_stack( stack* s ) {

}


/* Checks if the stack is empty or not */
int is_empty( stack* s ) {

}


/* Returns the size of the stack */
int get_size( stack* s ) {

}


/* Returns the data at the top of the stack */
void* top( stack* s ) {

}


/* Pushes in the data into the stack */
void push( stack* s, void* data ) {

} 


/* Remove the last element (data) pushed into the stack */
void pop( stack* s ) {

}


/* Returns the element (data) at the specified index of the stack */
void* get_elem( stack* s, int pos ) {

} 

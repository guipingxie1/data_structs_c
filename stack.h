/**
 * 	@file: stack.h
 * 	@author: Guiping Xie 
 *
 * 	@description: Stack data structure header file
 *	@date: Spring 2016
 *
 */
 

#ifndef STACK_H 
#define STACK_H

/* Stack cannot be bigger than 65536 */	
#define STACK_MAX_CAP 65536


/**
 * 	The stack struct the user will use
 *	Implemented with a linked list
 *
 */
typedef struct stack {
	/* The tail of the linked list struct */	
	struct linked_list* tail;
	
	/* The head of the linked list struct (used for iterating) */	
	struct linked_list* head;

	/* The current size of the stack */		
	int size;
  
} stack;


/**
 *	Initialize the stack --- similar to a constructor in C++
 *
 * 	@param s: The stack struct we want to operate with
 */
void init_stack( stack* s );


/**
 *	Destroy the stack --- similar to a destructor in C++
 *
 * 	@param s: The stack struct we want to operate with
 */
void destroy_stack( stack* s );


/**
 *	Checks if the stack is empty or not
 *
 * 	@param s: The stack struct we want to operate with
 * 	@return 1 (true) if the stack is empty, 0 (false) otherwise
 */
int is_empty( stack* s );


/**
 *	Returns the size of the stack
 *
 * 	@param s: The stack struct we want to operate with
 * 	@return The size of the stack
 */
int get_size( stack* s );


/**
 *	Returns the data at the top of the stack
 *
 * 	@param s: The stack struct we want to operate with
 * 	@return The data at the top of the stack
 */
void* top( stack* s );


/**
 *	Pushes in the data into the stack
 *
 * 	@param s: The stack struct we want to operate with
 * 	@param data: The data we want to push into the stack
 */
void push( stack* s, void* data );  


/**
 *	Remove the last element (data) pushed into the stack
 *
 * 	@param s: The stack struct we want to operate with
 */
void pop( stack* s );


/**
 *	Returns the element (data) at the specified index of the stack
 *
 * 	@param s: The stack struct we want to operate with
 * 	@param pos: The index we of the element we want to access
 * 	@return The data at the specified index
 */
void* get_elem( stack* s, int pos ); 


#endif

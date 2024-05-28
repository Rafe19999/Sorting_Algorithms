#include <stdio.h>
#define SIZE 8

int stack[SIZE];
int top = -1;

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}


int peek() {
   return stack[top];
}

int pop() {
   int data;

   if(top==-1) {

    printf("Empty stack\n");
   }

   else {
      data = stack[top];
      top = top - 1;
      printf("Deleted Element %d",data);
   }
}

int push(int data) {

   if(top==SIZE-1) {
        printf("Stack Full\n");
   }

    else {
      top = top + 1;
      stack[top] = data;
   }
}

void display() {
  if (top == -1)
    printf("\Stack is Empty!!!");
  else {
    int i;
    printf("\Stack elements are:\n");
    for (i = 0; i <= top; i++)
      printf("%d  ", stack[i]);
  }
}

int main() {
   // push items on to the stack
   push(1);
   push(2);
   push(3);
   push(4);
   push(5);
   push(6);


   display();
   printf("\nElement at top of the stack: %d\n" ,peek());


   // print stack data
   pop();
   printf("\n\nAfter Delete:\n");
   display();
   return 0;
}

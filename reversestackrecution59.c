#include <stdio.h>
#include <stdlib.h>


#define MAX 100


struct Stack {
    int arr[MAX];
    int top;
};


void initStack(struct Stack* stack) {
    stack->top = -1;
}


int isFull(struct Stack* stack) {
    return stack->top == MAX - 1;
}


int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}


void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top] = value;
}


int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        return -1;
    }
    return stack->arr[stack->top];
}


void insertAtBottom(struct Stack* stack, int value) {
    if (isEmpty(stack)) {
        push(stack, value);
    } else {
        int topValue = pop(stack);  
        insertAtBottom(stack, value); 
        push(stack, topValue);  
    }
}


void reverseStack(struct Stack* stack) {
    if (!isEmpty(stack)) {
        int value = pop(stack);  
        reverseStack(stack);  
        insertAtBottom(stack, value);  
    }
}


void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}

int main() {
    struct Stack stack;
    initStack(&stack);

    
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);

    printf("Original Stack:\n");
    display(&stack);

    
    reverseStack(&stack);

    printf("Reversed Stack:\n");
    display(&stack);

    return 0;
}

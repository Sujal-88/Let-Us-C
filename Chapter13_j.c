#include <stdio.h>
#define MAX 100

char dequeue[MAX];
int front = -1, rear = -1;

int isEmpty()
{
    return (front == -1);
}

void insertLeft(char ch)
{
    if (front == -1)
    {
        front = rear = 0;
    }
    else if (front == 0)
    {
        rear = MAX - 1;
    }
    else
    {
        front--;
    }
    dequeue[front] = ch;
    printf("Inserted '%c' on the left.\n", ch);
}

char retrieveLeft()
{
    if (isEmpty())
    {
        printf("The dequeue is empty cannot retrieve.\n");
        return '\0';
    }
    char ch = dequeue[front];
    if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == MAX - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
    printf("Retrieved '%c' from left.\n", ch);
    return ch;
}

int main()
{
    insertLeft('A');
    insertLeft('Z');
    printf("Retrieve: %c\n", retrieveLeft());
    printf("Retrieve: %c\n", retrieveLeft());
    return 0;
}
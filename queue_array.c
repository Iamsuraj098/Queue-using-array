#include <stdio.h>
int front = -1, rear = -1;
int arr[10];
int isempty()
{
    if ((front == -1) && (rear == -1))
    {
        return 1;
    }
}
void enqueue(int element)
{
    int x = isempty();
    if (x == 1)
    {
        rear = front = 0;
        arr[rear] = element;
    }
    else
    {
        arr[++rear] = element;
    }
}
void dequeue()
{
    int x = isempty();
    if (x == 1)
    {
        return;
    }
    else
    {
        front++;
    }
}

void print()
{
    int  x = front;
    while (x <= rear)
    {
        printf("%d ", arr[x]);
        x++;
    }
    printf("\n");
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    print();
    return 0;
}
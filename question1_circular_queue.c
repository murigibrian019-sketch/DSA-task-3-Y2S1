Disadvantages of a linear queue
A linear queue is a data structure that follows the FIFO (First In, First Out) principle. The first element inserted is the first one removed.

Its disadvantages include:
1. Memory wastage: When elements are deleted from the front, the empty spaces cannot easily be reused.
2. False overflow: The queue may report overflow even when there are empty spaces at the beginning.
3. Fixed size: An array-based linear queue has a limited capacity.
4. Shifting overhead: Moving elements to the beginning to create space requires additional processing time.
5. Poor memory utilization: Available memory is not used efficiently.

-----C Program-----
  
#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if ((rear + 1) % SIZE == front) {
        printf("Queue is full\n");
    } else {
        if (front == -1)
            front = 0;

        rear = (rear + 1) % SIZE;
        queue[rear] = value;

        printf("%d inserted\n", value);
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("%d deleted\n", queue[front]);

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    int i = front;

    while (1) {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    dequeue();

    enqueue(50);
    enqueue(60);

    display();

    return 0;
}

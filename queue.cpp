#include <iostream>                  // using array
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1; // Initialize queue

// Enqueue operation
void enqueue(int item) {
    if (rear == SIZE - 1) { // Check for full
        cout << "Queue Overflow! Cannot insert " << item << endl;
        return;
    }
    if (front == -1) { // First element
        front = 0;
    }
    rear++;             // Move rear
    queue[rear] = item; // Insert element
    cout << "Inserted: " << item << endl;
}

// Dequeue operation
void dequeue() {
    if (front == -1) { // Check for empty
        cout << "Queue Underflow! Cannot delete element" << endl;
        return;
    }
    int deleted = queue[front];
    cout << "Deleted: " << deleted << endl;
    if (front == rear) { // Last element deleted
        front = rear = -1; // Reset queue
    } else {
        front++; // Move front forward
    }
}

// Display queue elements
void display() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display(); // 10 20 30

    dequeue(); // Deletes 10
    display(); // 20 30

    enqueue(40);
    enqueue(50);
    enqueue(60); // Overflow
    display();   // 20 30 40 50

    dequeue();
    dequeue();
    dequeue();
    dequeue(); // Queue becomes empty
    display(); // Queue is empty

    return 0;
}



#include <iostream>             // using ll
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear  = NULL;

// Enqueue
void enqueue(int x)
{
    Node* temp = new Node;   // changed name to temp
    temp->data = x;
    temp->next = NULL;

    if (front == NULL)   // queue empty
    {
        front = rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }

    cout << "Inserted: " << x << endl;
}

// Dequeue
void dequeue()
{
    if (front == NULL)
    {
        cout << "Queue Underflow\n";
        return;
    }

    Node* temp = front;
    cout << "Deleted: " << temp->data << endl;

    front = front->next;
    delete temp;

    if (front == NULL)
        rear = NULL;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();
    dequeue();
    dequeue();  // underflow

    return 0;
}

#include <iostream>            // priority queue
using namespace std;

#define SIZE 5

int value[SIZE];
int priority[SIZE];
int rear = -1;

// Insert element
void enqueue(int val, int pr) {
    if (rear == SIZE - 1) {
        cout << "Priority Queue Overflow!" << endl;
        return;
    }

    rear++;
    value[rear] = val;
    priority[rear] = pr;

    cout << "Inserted: " << val << " with priority " << pr << endl;
}

// Delete highest priority element
void dequeue() {
    if (rear == -1) {
        cout << "Priority Queue Underflow!" << endl;
        return;
    }

    // Find highest priority (smallest number)
    int highest = 0;
    for (int i = 1; i <= rear; i++) {
        if (priority[i] < priority[highest]) {
            highest = i;
        }
    }

    cout << "Deleted: " << value[highest] << endl;

    // Shift elements
    for (int i = highest; i < rear; i++) {
        value[i] = value[i + 1];
        priority[i] = priority[i + 1];
    }

    rear--;
}

// Display queue
void display() {
    if (rear == -1) {
        cout << "Priority Queue is empty" << endl;
        return;
    }

    cout << "Elements in Priority Queue:\n";
    for (int i = 0; i <= rear; i++) {
        cout << "Value: " << value[i] 
             << " Priority: " << priority[i] << endl;
    }
}

int main() {

    enqueue(10, 2);
    enqueue(20, 1);
    enqueue(30, 3);

    display();

    dequeue();  // deletes 20 (priority 1)
    display();

    return 0;
}

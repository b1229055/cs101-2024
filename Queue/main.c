#include <iostream>
using namespace std;

const int MAX = 1000; // 最大容量
int queue[MAX]; // 用來存放元素的陣列
int front = 0, rear = 0; // 佇列的前端和後端

// Enqueue 操作：向佇列中加入元素
void enqueue(int x) {
    if (rear == MAX-1) {
        cout << "Queue overflow\n";
        return;
    }
    queue[rear++] = x;
    cout << x << " enqueued to queue\n";
}
// f         r
// 10 20 30
// Dequeue 操作：從佇列中取出元素
int dequeue() {
    if (front == rear) {
        cout << "Queue underflow\n";
        return -1; // 返回 -1 代表佇列是空的
    }
    int item = queue[front++];
    return item;
}

// Peek 操作：查看佇列前端元素
int peek() {
    if (front == rear) {
        cout << "Queue is empty\n";
        return -1; // 返回 -1 代表佇列是空的
    }
    return queue[front];
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    cout << dequeue() << " dequeued from queue\n"; // 輸出 10

    cout << "Front element is " << peek() << endl; // 輸出 20

    return 0;
}

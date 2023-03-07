#include <iostream>

using namespace std;

class Queue {
  int front, rear, capacity;
  int *queue;

  Queue(int c) {
    front = rear = 0;
    capacity = c;
    queue = new int;
  }

  ~Queue() { delete[] queue; }

  void queueEnqueue(int data) {
    if (capacity == rear) {
      printf("\nQueue is full\n");
      return;
    } else {
      queue[rear] = data;
      rear++;
    }
    return;
  }

  void queueDequeue() {
    if (front == rear) {
      printf("\nThe queue is empty\n");
      return;
    }

    else {
      for (int i = 0; i < rear; i++) {
        queue[i] = queue[i + 1];
      }
      rear--;
    }
    return;
  }

  void queueDisplay() {
    int i;
    if (front == rear) {
      printf("\nThe queue is empty\n");
      return;
    } else {
      for (i = front; i < rear; i++) {
        cout << queue[i];
      }
    }
  }

  void queueFront() {
    if (front == rear) {
      printf("\nThe queue is empty\n");
      return;
    }
    cout << "The front element is " << queue[front];
    return;
  }
};

int main() {
  Queue q(4);
  q.queueDisplay();
}

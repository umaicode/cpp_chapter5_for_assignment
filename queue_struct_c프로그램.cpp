#include <stdio.h>
#include <stdlib.h>
#include <iostream>
/*
1. queue�� C�� �迭�� ����� ����
2. queue�� C�� struct�� ����� ����
3. queue�� C++�� class�� ��� > ť ������ ����� ������ ����� ����
4. queue�� C++�� class�� ��� > ť ������ ����� person ��ü > person�� name�� char* ���ڿ��� ����
5. queue�� C++�� class�� ��� > ť ������ ����� person ��ü > person�� name�� string ��ü�� ����
*/
using namespace std;

void Add(struct Queue &, int&);
int Delete(struct Queue &);
void InitializeQueue(struct Queue&);
struct Queue {
    int front, rear;
    int queue[100];
};


int main() {
    struct Queue q1, q2;
    InitializeQueue(q1);
    InitializeQueue(q2);
    int result = 0;
    int n = 10;
    Add(q1, n);//ù��° queue�� ���
    result = Delete(q1);
    cout << "result = " << result << endl;
    int m = 20;
    Add(q2, m);//�ι�° queue�� ���
    result = Delete(q2);
    cout << "result2 = " << result << endl;
    q2.queue[q2.rear] = 30; q2.rear++;//struct Queue�� �������� �̹Ƿ� ���� ��ҿ��� ���� - ����� ������ ��ƴ� 
    result = Delete(q2);
    cout << "result2 = " << result << endl;
    system("pause");
    return 1;
}
void InitializeQueue(struct Queue& q) {
    q.front = q.rear = 0;
}
void Add(struct Queue &q, int& x) {
    if (q.rear == 100) {
        cout << "queue is full" << endl;
        return;
    }
    q.queue[q.rear++] = x;
}

int Delete(struct Queue& q) {
    if (q.front == q.rear) {
        printf("queue empty");
        return 0;
    }
    int temp = q.queue[q.front];
    q.front++;
    return temp;
}
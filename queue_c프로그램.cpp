#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
/* queue�� C�� �迭�� ����� ����, �� ���α׷��� 2���� ť�� ����� �������,
hard-coding ������ ����� 
*/
/*
1. queue�� C�� �迭�� ����� ����
2. queue�� C�� struct�� ����� ����
3. queue�� C++�� class�� ��� > ť ������ ����� ������ ����� ����
4. queue�� C++�� class�� ��� > ť ������ ����� person ��ü > person�� name�� char* ���ڿ��� ����
5. queue�� C++�� class�� ��� > ť ������ ����� person ��ü > person�� name�� string ��ü�� ����
*/
void Add(int& x);
int Delete();
int front=0, rear=0;
int queue[100];

void Add2(int& x);
int Delete2();//hard-coding�� ���ҷ��� queue[]�� parameter�� ����
int front2=0, rear2=0;
int queue2[100];

void Add3(int [], int &, int &, int&);//hard-coding ��ſ� queue�� parameter�� �����ϴ� ���
int Delete3(int[], int &, int&);//hard-coding ��ſ� queue�� parameter�� �����ϴ� ���

int main() {
    int n = 10;
    int result = 0;
    Add(n);//ù��° queue�� ���
    result = Delete();
    cout << "result = " << result << endl;

    int m = 20;
    Add2(m);//�ι�° queue�� ���
    result = Delete2();
    cout << "result = " << result << endl;
    system("pause");
    return 1;
}
void Add(int& x) {
    if (rear >= 100) {
        printf("queue full");
        return;
    }
    queue[rear++] = x;
    return;
}

int Delete() {
    if (front == rear) {
        printf("queue empty");
        return 0;
    }
    return queue[front++];
}

void Add2(int& x) {
    if (rear >= 100) {
        printf("queue full");
        return;
    }
    queue[rear++] = x;
    return;
}
int Delete2() {
    if (front == rear) {
        printf("queue empty");
        return 0;
    }
    return queue[front++];
}

#include <stdlib.h>
#include <iostream>
using namespace std;
/*
1. queue�� C�� �迭�� ����� ����
2. queue�� C�� struct�� ����� ����
3. queue�� C++�� class�� ��� > ť ������ ����� ������ ����� ����
4. queue�� C++�� class�� ��� > ť ������ ����� person ��ü > person�� name�� char* ���ڿ��� ����
5. queue�� C++�� class�� ��� > ť ������ ����� person ��ü > person�� name�� string ��ü�� ����
*/

class Queue {
    int front, rear;
    int* queue;
public:

};

int main() {
    Queue q1(50), q2(30);

    int result = 0;
    int n = 10;
    q1.Add(n);//ù��° queue�� ���
    result = q1.Delete();
    cout << "result = " << result << endl;
    int m = 20;
    q2.Add(m);//�ι�° queue�� ���
    result = q2.Delete();
    cout << "result2 = " << result << endl;
    //q2.queue[q2.rear] = 30; q2.rear++;//struct Queue�� �������� �̹Ƿ� ���� ��ҿ��� ���� - ����� ������ ��ƴ� 
    result = q2.Delete();
    cout << "result2 = " << result << endl;
    system("pause");
    return 1;
}

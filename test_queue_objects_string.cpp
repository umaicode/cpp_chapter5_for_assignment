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

class Person {
    friend class Queue;
    string pid;
    string pname;
    int age;
public:

};

class Queue {
    int front, rear;
    Person* queue[100];
    int capacity;
public:

};



int main() {
    Queue q1(50), q2(30);
    Person p1("s1", "hong", 12);
    Person p2("s2", "kim", 22);
    Person result("s3", "a", 0);
    q1.Add(p1);//ù��° queue�� ���
    result = q1.Delete();
    cout << "result = " << result << endl;
    int m = 20;
    q2.Add(p2);//�ι�° queue�� ���
    result = q2.Delete();
    cout << "result2 = " << result << endl;

    system("pause");
    return 1;
}

/*
int main() {
    Person p1("s1, "hong", "12);
    Person p2 = p1; // -> ���������
    P2 = p1; // -> ġȯ��
    // �� �ڵ�� overloading���� ����! -> ��ü������ �̵��� ������.
*/

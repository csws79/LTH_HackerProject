#include <iostream>
#include <ctime>
#include "person.h"
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

//	�� ������ �ذ����� ������, �ش� �������� commit �� ��.
//	commit �޽����� �����Ӱ� �ص� �˴ϴ�.
void ascend(int arr[]);
int main()
{
	//	1��
	//	0~99 ������ ������ ���� 100���� �����ϰ�, ������������ �����Ͽ� ����Ͻÿ�.
	//	��, ��� ������ int�� �����͸� ����� ��.
	/*
	srand(unsigned int(time));
	int i;
	int arr[100];
	int* asc = arr;
	
	for (i = 0; i < 100; i++){
		arr[i] = rand() % 100;
	}
	ascend(asc);
	for (i = 0; i < 100; i++){
		cout << setw(5) << asc[i];
	}
	cout << endl;
	*/
	//	2��
	//	���(Person)�� ��Ÿ�� Ŭ������ �ۼ��Ͻÿ�. Person.h, Person.cpp ������ ����� ������ ��.
	//	��� ����, �Լ��� public���� �����ϰ� �� ��.
	//	�������
	//		�̸�(name)			: string
	//		����(age)			: int
	//		���翩��(isAlive)	: bool
	//	����Լ�
	//		���ϱ�(talk)			: "Hello, world!"�� ����Ѵ�.
	//		���ڱ�(sleep)		: "zzz"�� ����Ѵ�.
	/*
	person aa;
	aa.age = 10;
	aa.sleep();
	aa.isAlive = 0;
	person bb;
	bb.age = 19;
	bb.talk();
	bb.isAlive = true;
	*/

	

	//  3��
	//	�� ���� ���� �ý���
    //  �л�(student)�� ���� ����ü�� ���ð���(item)�� ���� ����ü�� �����.
    //
    //  list.txt ������ �о�鿩 main���� student* �����͸� �̿��Ͽ� �ο����� �����Ҵ�
    //  ���� ���ð��񺰷� subject�� ���� �����Ҵ��� �����Ѵ�.
    //  ���Ͽ��� ��� �����͸� �о��ٸ�
    //  �� ������ "�� �����ο�: 00��" �� ǥ���ϰ�,
    //  �л��̸�: �̸� / ���ð����: 0�� / ����1: 00, ����2: 00, ����3: 00 ...
    //  �� ���� �÷� ����Ѵ�.
    //
    //  �߰��� ���� �����Ϳ� �Ѹ� ���� �ֿܼ��� �߰��Ͽ�
    //  �� �����ο��� ���ο� �л��� ���� ������ ����ϴ� �ڵ带 ������ ��!
    //
    //  struct subject {
    //      string itemName;
    //      int score;
    //  };
    //  struct student {
    //      string name;		// �л��̸�
    //      int subjectCount;	// ���ð����
    //      subject* pItem;		// ���� ���
    //  };
	/*
	struct subject {
		string itemName;
		int score;
	};

	struct student {
		string name;		// �л��̸�
		int subjectCount;	// ���ð����
		subject* pItem;
	};

	ifstream fin;
	fin.open("list.txt");
	student studentName[10];
	for (int i = 0; !fin.eof(); i++){
		
	
		fin >> studentName[i].name;
		fin >> studentName[i].subjectCount;
		studentName[i].pItem = new subject[studentName[i].subjectCount];
		for (int j = 0; j < studentName[i].subjectCount; j++){
			fin >> studentName[i].pItem[j].itemName;
			fin >> studentName[i].pItem[j].score;
		}
	}

	for (int i = 0; i < 6; i++){
		cout << studentName[i].name << " " << studentName[i].subjectCount << " " << studentName[i].pItem[i].itemName << " " << studentName[i].pItem[i].score << endl;
	}

	fin.close();
	*/

	
	//	4��
	//	�����ڿ��� �ϰ���� ���� �����ÿ�.
	/*
	��������, �¿�����, �׸��� �������� �ø��ϴ�.
	���� ������ ���� ���� �� ������,
	���� ���̵��� �� �������(�ٸ� �ֵ����� �𸣰����� �ּ��� ����ŭ�� �Ф�).
	������ ���� �� �ִµ� ���� ���� ���ּ��� ���� ������������
	�׷��� ���鵵 �Ͻô� �ϵ� �����ŵ� ���� �ð� �Ҿ��ؼ� ���� ������ ���� ���ֽô��� ������ ������ �����Դϴ�.
	���� 6���� �� ����ϰڽ��ϴ�!!
	*/
	return 0;
}
void ascend(int arr[])
{
	int i, j, key;
	for (j = 0; j < 100; j++)
	{
		key = arr[j];
		for (i = j - 1; (i >= 0) && (arr[i] > key); i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[i + 1] = key;
	}
	return;
}
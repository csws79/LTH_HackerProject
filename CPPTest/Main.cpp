#include <iostream>
#include <ctime>

using namespace std;

//	�� ������ �ذ����� ������, �ش� �������� commit �� ��.
//	commit �޽����� �����Ӱ� �ص� �˴ϴ�.
void ascend(int arr[]);
int main()
{
	//	1��
	//	0~99 ������ ������ ���� 100���� �����ϰ�, ������������ �����Ͽ� ����Ͻÿ�.
	//	��, ��� ������ int�� �����͸� ����� ��.
	srand(unsigned int(time));
	int i;
	int* arr[100], arr2[100];
	for (i = 0; i < 100; i++){
		arr2[i] = rand() % 100;
	}
	ascend(arr2);
	for (i = 0; i < 100; i++){
		cout << arr2[i] << " ";
	}
	cout << endl;
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


	
	//	4��
	//	�����ڿ��� �ϰ���� ���� �����ÿ�.
	//	
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
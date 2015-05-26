#include <iostream>
#include <ctime>
#include "person.h"
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

//	각 문제를 해결했을 때마다, 해당 시점에서 commit 할 것.
//	commit 메시지는 자유롭게 해도 됩니다.
void ascend(int arr[]);
int main()
{
	//	1번
	//	0~99 범위의 임의의 정수 100개를 저장하고, 오름차순으로 정렬하여 출력하시오.
	//	단, 모든 변수는 int형 포인터만 사용할 것.
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
	//	2번
	//	사람(Person)을 나타낼 클래스를 작성하시오. Person.h, Person.cpp 파일을 만들어 구현할 것.
	//	모든 변수, 함수는 public으로 접근하게 할 것.
	//	멤버변수
	//		이름(name)			: string
	//		나이(age)			: int
	//		생사여부(isAlive)	: bool
	//	멤버함수
	//		말하기(talk)			: "Hello, world!"를 출력한다.
	//		잠자기(sleep)		: "zzz"를 출력한다.
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

	

	//  3번
	//	반 성적 관리 시스템
    //  학생(student)에 대한 구조체와 응시과목(item)에 대한 구조체를 만든다.
    //
    //  list.txt 파일을 읽어들여 main에서 student* 포인터를 이용하여 인원별로 동적할당
    //  또한 응시과목별로 subject에 대한 동적할당을 구현한다.
    //  파일에서 모든 데이터를 읽었다면
    //  맨 위에는 "총 응시인원: 00명" 을 표시하고,
    //  학생이름: 이름 / 응시과목수: 0개 / 과목1: 00, 과목2: 00, 과목3: 00 ...
    //  와 같은 꼴로 출력한다.
    //
    //  추가로 현재 데이터에 한명만 직접 콘솔에서 추가하여
    //  총 응시인원과 새로운 학생에 대한 점수를 출력하는 코드를 만들어보실 것!
    //
    //  struct subject {
    //      string itemName;
    //      int score;
    //  };
    //  struct student {
    //      string name;		// 학생이름
    //      int subjectCount;	// 응시과목수
    //      subject* pItem;		// 과목 목록
    //  };
	/*
	struct subject {
		string itemName;
		int score;
	};

	struct student {
		string name;		// 학생이름
		int subjectCount;	// 응시과목수
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

	
	//	4번
	//	교육자에게 하고싶은 말을 적으시오.
	/*
	준현이형, 승완이형, 그리고 성수형께 올립니다.
	교육 진도가 빠른 감이 좀 빠르고,
	과제 난이도도 좀 어려워요(다른 애들한텐 모르겠지만 최소한 저만큼은 ㅠㅠ).
	진도는 따라갈 순 있는데 좀만 쉽게 내주세요 과제 ㅎㅎㅎㅎㅎㅎ
	그래도 형들도 하시는 일들 많으신데 형들 시간 할애해서 저희 막내들 교육 봐주시느라 언제나 감사할 따름입니다.
	남은 6개월 더 노력하겠습니다!!
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
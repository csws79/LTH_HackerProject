#include <iostream>
#include <ctime>
#include "person.h"
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

//	唖 庚薦研 背衣梅聖 凶原陥, 背雁 獣繊拭辞 commit 拝 依.
//	commit 五獣走澗 切政罫惟 背亀 桔艦陥.
void ascend(int arr[]);
int main()
{
	//	1腰
	//	0~99 骨是税 績税税 舛呪 100鯵研 煽舌馬壱, 神硯託授生稽 舛慶馬食 窒径馬獣神.
	//	舘, 乞窮 痕呪澗 int莫 匂昔斗幻 紫遂拝 依.
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
	//	2腰
	//	紫寓(Person)聖 蟹展馨 適掘什研 拙失馬獣神. Person.h, Person.cpp 督析聖 幻級嬢 姥薄拝 依.
	//	乞窮 痕呪, 敗呪澗 public生稽 羨悦馬惟 拝 依.
	//	呉獄痕呪
	//		戚硯(name)			: string
	//		蟹戚(age)			: int
	//		持紫食採(isAlive)	: bool
	//	呉獄敗呪
	//		源馬奄(talk)			: "Hello, world!"研 窒径廃陥.
	//		節切奄(sleep)		: "zzz"研 窒径廃陥.
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

	

	//  3腰
	//	鋼 失旋 淫軒 獣什奴
    //  俳持(student)拭 企廃 姥繕端人 誓獣引鯉(item)拭 企廃 姥繕端研 幻窮陥.
    //
    //  list.txt 督析聖 石嬢級食 main拭辞 student* 匂昔斗研 戚遂馬食 昔据紺稽 疑旋拝雁
    //  暁廃 誓獣引鯉紺稽 subject拭 企廃 疑旋拝雁聖 姥薄廃陥.
    //  督析拭辞 乞窮 汽戚斗研 石醸陥檎
    //  固 是拭澗 "恥 誓獣昔据: 00誤" 聖 妊獣馬壱,
    //  俳持戚硯: 戚硯 / 誓獣引鯉呪: 0鯵 / 引鯉1: 00, 引鯉2: 00, 引鯉3: 00 ...
    //  人 旭精 加稽 窒径廃陥.
    //
    //  蓄亜稽 薄仙 汽戚斗拭 廃誤幻 送羨 嬬車拭辞 蓄亜馬食
    //  恥 誓獣昔据引 歯稽錘 俳持拭 企廃 繊呪研 窒径馬澗 坪球研 幻級嬢左叔 依!
    //
    //  struct subject {
    //      string itemName;
    //      int score;
    //  };
    //  struct student {
    //      string name;		// 俳持戚硯
    //      int subjectCount;	// 誓獣引鯉呪
    //      subject* pItem;		// 引鯉 鯉系
    //  };
	/*
	struct subject {
		string itemName;
		int score;
	};

	struct student {
		string name;		// 俳持戚硯
		int subjectCount;	// 誓獣引鯉呪
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

	
	//	4腰
	//	嘘整切拭惟 馬壱粛精 源聖 旋生獣神.
	/*
	層薄戚莫, 渋刃戚莫, 益軒壱 失呪莫臆 臣験艦陥.
	嘘整 遭亀亜 匙献 姶戚 岨 匙牽壱,
	引薦 貝戚亀亀 岨 嬢形趨推(陥献 蕉級廃度 乞牽畏走幻 置社廃 煽幻鏑精 ばば).
	遭亀澗 魚虞哀 授 赤澗汽 岨幻 襲惟 鎧爽室推 引薦 ぞぞぞぞぞぞ
	益掘亀 莫級亀 馬獣澗 析級 弦生重汽 莫級 獣娃 拝蕉背辞 煽費 厳鎧級 嘘整 坐爽獣汗虞 情薦蟹 姶紫拝 魚硯脊艦陥.
	害精 6鯵杉 希 葛径馬畏柔艦陥!!
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
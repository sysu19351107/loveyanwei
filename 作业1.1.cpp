#include<iostream>
using namespace std;
class Student                                                                  //ѧ����Ķ���
{
public:                                                                        //�ⲿ�ӿ�
	Student()                                                                  //���캯��
	{
		Sno[10] = { 0 };
		name[10] = { 0 };
		age = 0;
	}
	void setting();
	void gets(const char Sno1[20],const char name1[20],int age1);
	void print();
private:                                                                        //˽�����ݳ�Ա
	char name[20],Sno[20];
	int age;
};

int main() {
	class Student S1;
	cout << "The first student:";
	S1.gets("19351520","RZH",17);
	S1.setting();
	S1.print();
	cout << "The second student:";
	S1.gets("19351521", "CYW", 19);
	S1.setting();
	S1.print();
	return 0;
}
void Student::setting()                                                        //���ú���(����������)
{
	for (int i = 0; Sno[i] != '\0'; i++)
		if ((Sno[i] < '0' || Sno[i]>'9') || (age < 0)) {
			cout << "The data is wrong" << endl;
			break;
		}
}
void Student::gets(const char Sno1[20],const char name1[20], int age1)         //ȡֵ����
{
	for (int i = 0; Sno1[i] != '\0'; i++) {
		Sno[i] = Sno1[i];
		Sno[i + 1] = '\0';
	}
	for (int i = 0; name1[i] != '\0'; i++) {
		name[i] = name1[i];
		name[i + 1] = '\0';
	}
	age = age1;
}
void Student::print()                                                           //��ӡ����
{
	cout << "ѧ��:" << Sno << "����:" << name << "����:" << age << endl;
}
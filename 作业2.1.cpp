#include<iostream>
using namespace std;
class Timedate                                                                   //����ʱ���ຯ��
{
public:
	Timedate()
	{
		year = 0;
		month = 0;
		day = 0;
		hour = 0;
		minute = 0;
		s = 0;
	}
	void setting();
	void gets();
	void print();
private:
	int year, month, day, hour, minute, s;
}; 
enum Year {first=2010,second,third,fourth,fifth,sixth};
enum month { Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sept, Oct, Nov, Dec };
int main()
{
	class Timedate t1;
	t1.gets();
	t1.setting();
	t1.print();
}
void Timedate::setting()                                                        //���ú���(����������)
{
	if(!(year>=first&&year<=sixth)||!(month>=Jan&&month<=Dec)||!(day>0&&day<=31)||!(hour>=0&&hour<24)||!(minute>=0&&minute<60)||!(s>=0&&s<60))
		cout << "The data is wrong" << endl;
}
void Timedate::gets()                                                           //ȡֵ����
{
	cout << "input the data:" << endl;
	cin >> year >> month >> day >> hour >> minute >> s;
}
void Timedate::print()                                                           //��ӡ����
{
	cout << year << "-" << month << "-" << day << "   " << hour << ":" << minute << ":" << s << endl;
}	
#include<iostream>
#include<string>
using namespace std;

class Call
{
	string request;
public:

	string Request()
	{
		cout << "\n������� ���� ������ � ��������� \n";
		getline(cin, request);
		return request;
	}

	string GetRequest()
	{
		return request;
	}

};

class Bot :public Call
{
	string request;
	int flag;
public:

	Bot()
	{
		request = Call::GetRequest();
	}

	string Request()
	{
		cout << "\n������� ���� ������ � ���������� \n";
		getline(cin, request);
		return request;
	}

	int Answer()
	{
		cout << "\n��������� ���� �������\n";
		cout << "\n1. ���������� ������������� ��������� \n";
		cout << "\n2. �������������� �������� �� ����� �����\n";
		cout << "\n3. ������� ������\n";
		cout << "\n4. ���� �� �� ����� ������ ����� ���������� � ����-�����\n";
		cin >> flag;
		if (flag == 1)
		{
			cout << "\n������������ ���������� ... \n";
		}
		if (flag == 2)
		{
			system("chrome.exe https://ru.wikipedia.org/wiki/%D0%97%D0%B0%D0%B3%D0%BB%D0%B0%D0%B2%D0%BD%D0%B0%D1%8F_%D1%81%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0");
		}
		if (flag == 3)
		{
			cout << "\n��������� �� �������� ����� ������ ...\n";
		}

		return flag;
	}


};

class Call_�enter :public Bot
{
	string request;
	int flag;

public:

	Call_�enter()
	{
		request = Bot::Call::GetRequest();
	}

	string Request()
	{
		cout << "\n������� ���� ������ � ���������� \n";
		getline(cin, request);
		return request;
	}

	int Answer()
	{
		cout << "\n��������� ���� �������\n";
		cout << "\n1. ���������� ��������� �������� ��������� \n";
		cout << "\n2. ���� �� �� ����� ������ ����� ���������� � �����������\n";
		cin >> flag;
		return flag;
	}
};

class Specialist :public Call_�enter
{
	string request;
	int flag;

public:

	Specialist()
	{
		request = Call_�enter::Bot::Call::GetRequest();
	}

	string Request()
	{
		cout << "\n������� ���� ������ � ���������� \n";
		getline(cin, request);
		return request;
	}

	int Answer()
	{
		cout << "\n�� �����, � �� ����, �� �����, �� �������\n";
		return 0;
	};

};


class Vizov
{
	int i;

public:

	Vizov()
	{
		Call call;
		call.Request();

		cout << "\n���\n";
		Bot bot;
		i = bot.Answer();
		if (i == 4)
		{
			cout << "\n\n����-�����\n";
			Call_�enter call_center;
			i = call_center.Answer();
			if (i == 2)
			{
				cout << "\n\n����������\n";
				Specialist specialist;
				specialist.Answer();
			}
		}
	}


};

int main()
{
	setlocale(LC_ALL, "Rus");
	Vizov vizov;


	return 0;
}
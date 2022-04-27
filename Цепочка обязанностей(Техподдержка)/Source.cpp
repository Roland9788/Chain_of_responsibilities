#include<iostream>
#include<string>
using namespace std;

class Call
{
	string request;
public:

	string Request()
	{
		cout << "\nВведите свой запрос с проблемой \n";
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
		cout << "\nВведите свой запрос с проблеммой \n";
		getline(cin, request);
		return request;
	}

	int Answer()
	{
		cout << "\nВозможные пути решения\n";
		cout << "\n1. Попробуйте перезагрузить компьютер \n";
		cout << "\n2. Возпользуйтесь справкой на нашем сайте\n";
		cout << "\n3. Смените пароль\n";
		cout << "\n4. Если вы не нашли нужный пункт обратитесь в колл-центр\n";
		cin >> flag;
		if (flag == 1)
		{
			cout << "\nПерезагрузка компьютера ... \n";
		}
		if (flag == 2)
		{
			system("chrome.exe https://ru.wikipedia.org/wiki/%D0%97%D0%B0%D0%B3%D0%BB%D0%B0%D0%B2%D0%BD%D0%B0%D1%8F_%D1%81%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0");
		}
		if (flag == 3)
		{
			cout << "\nПереходим на страницу смены пароля ...\n";
		}

		return flag;
	}


};

class Call_Сenter :public Bot
{
	string request;
	int flag;

public:

	Call_Сenter()
	{
		request = Bot::Call::GetRequest();
	}

	string Request()
	{
		cout << "\nВведите свой запрос с проблеммой \n";
		getline(cin, request);
		return request;
	}

	int Answer()
	{
		cout << "\nВозможные пути решения\n";
		cout << "\n1. Попробуйте выключить включить компьютер \n";
		cout << "\n2. Если вы не нашли нужный пункт обратитесь к специалисту\n";
		cin >> flag;
		return flag;
	}
};

class Specialist :public Call_Сenter
{
	string request;
	int flag;

public:

	Specialist()
	{
		request = Call_Сenter::Bot::Call::GetRequest();
	}

	string Request()
	{
		cout << "\nВведите свой запрос с проблеммой \n";
		getline(cin, request);
		return request;
	}

	int Answer()
	{
		cout << "\nДа ладно, я всё решу, да ладно, не кипишуй\n";
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

		cout << "\nБот\n";
		Bot bot;
		i = bot.Answer();
		if (i == 4)
		{
			cout << "\n\nКолл-центр\n";
			Call_Сenter call_center;
			i = call_center.Answer();
			if (i == 2)
			{
				cout << "\n\nСпециалист\n";
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
//#include<iostream>
//using namespace std;
//
////煮水-冲泡-倒入杯中-加入辅料
//
//class AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil() = 0;
//	//冲泡
//	virtual void Brew() = 0;
//	//倒入
//	virtual void PourInCup() = 0;
//	//加入辅料
//	virtual void PutSomething() = 0;
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
//class Coffee : public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "煮农夫山泉" << endl;
//	};
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "加入糖和牛奶" << endl;
//	}
//
//};
//
//class Tea : public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "煮矿泉水" << endl;
//	};
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "加入枸杞" << endl;
//	}
//
//};
////制作
//void doWork(AbstractDrinking* abs)
//{
//	abs->makeDrink();
//	delete abs;		//不要忘记释放
//}
//
//void test01()
//{
//	//制作咖啡
//	//AbstractDrinking* abs = new Coffee 父类指针指向子类对象
//	doWork(new Coffee);
//
//	//制作茶叶
//	cout << "---------------------------" << endl;
//	doWork(new Tea);
//	
//}
//
//int main()
//{
//	test01();
//
//
//
//	system("pause");
//	return 0;
//}

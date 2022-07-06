/***Unit03 对象和类基础***/

/** 2 类拷贝以及分离声明与实现 **/
#include <iostream>

using std::cout;
using std::endl;

// 创建一个银行账户类
class Account {
	double balance;

public:
	Account() {
		balance = 0.0;
	}

	Account(double balance) {
		this->balance = balance;
	}

	// 存钱
	void deposit(double amount) {
		balance += amount;
	}
	
	// 取钱
	double withdraw(double amount) {
		if (balance < amount) {
			double temp = balance;
			balance = 0.0;
			return temp;
		}
		else {
			balance -= amount;
			return amount;
		}
	
	}

};

int main() {
	Account a1;
	Account a2 = Account{100.0};
	a1.deposit(9.0);

	cout << a1.withdraw(10.0) << endl;
	cout << a2.withdraw(52.0) << endl;
	cout << Account(1000.0).withdraw(10001.0) << endl;

	return 0;
}

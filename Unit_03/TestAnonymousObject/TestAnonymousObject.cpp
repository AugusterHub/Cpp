/***Unit03 ����������***/

/** 2 �࿽���Լ�����������ʵ�� **/
#include <iostream>

using std::cout;
using std::endl;

// ����һ�������˻���
class Account {
	double balance;

public:
	Account() {
		balance = 0.0;
	}

	Account(double balance) {
		this->balance = balance;
	}

	// ��Ǯ
	void deposit(double amount) {
		balance += amount;
	}
	
	// ȡǮ
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

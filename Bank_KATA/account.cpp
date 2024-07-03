class Account
{
public:
	int getBalance() 
	{ 
		return balance;
	}

	Account(int money) : balance{money}, interest{1}
	{
	}

	Account() : balance{ 10000 }, interest{ 1 } {}

	void deposit(int money)
	{
		balance += money;
	}

	void withdraw(int money)
	{
		balance -= money;
	}

	void applyInterest()
	{
		balance *= (1 + ((double)interest / 100));
	}

	void setInterest(int n)
	{
		interest = n;
	}

	int getInterest()
	{
		return interest;
	}

	int predictIncome(int year)
	{
		int income = balance;
		for (int y = 1; y <= year; y++)
		{
			income *= (1 + ((double)interest / 100));
		}
		return income;
	}


private:
	int balance;
	int interest;
};

#include "pch.h"
#include "../Bank_KATA/account.cpp"

class AccountFixture : public testing::Test {
public:
	Account account{ 10000 };
	
	void checkBalance(int expected) {
		int ret = account.getBalance();
		EXPECT_EQ(expected, ret);
	}
};

TEST_F(AccountFixture, CreateAccountInit10000) {
	checkBalance(10000);
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	checkBalance(10500);
}

TEST_F(AccountFixture, Withdraw) {
	account.withdraw(600);
	checkBalance(9400);
}

// google test에서 중복코드 없애려면, Test Fixture

TEST_F(AccountFixture, compoundInterest5percent) {
	account.applyInterest();
	checkBalance(10000*1.01);
}

TEST_F(AccountFixture, setInterest) {
	account.setInterest(7);
	int ret = account.getInterest();
	EXPECT_EQ(7, ret);
}

TEST_F(AccountFixture, adjustInterest) {
	account.setInterest(7);
	account.applyInterest();
	checkBalance(10000 * 1.07);
}

TEST_F(AccountFixture, predictAfterNYear) {
	account.setInterest(5);
	int ret = account.predictIncome(3);
	EXPECT_EQ(11576, ret);
}
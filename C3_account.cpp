#include<iostream>

class Account
{
public:
    //add a constructor that receives an initial balance (with validation)
    explicit Account( int value )
        :account_balance( value )
        {
            if( value >= 0 )
                account_balance = value;
            else
            {
                account_balance = 0;
                std::cerr << "Invalid balance!\n";
            }
            
        }
    //implement function 'credit' that adds an amount to the balance
    void credit( int p_balance )
    {
        account_balance += p_balance;
    }
    //implement function 'debit' that withdraws money from the balance (with validation)
    void debit( int n_balance )
    {
        if ( n_balance <= account_balance )
            account_balance -= n_balance;
        else
            std::cerr << "Debit amount exeeded account balance!\n";
        
    }
    //implement function 'getBalance' that returns the current balance
    int getBalance()
    {
        return account_balance;
    }
private:
    //add a data member named 'account_balance'
    int account_balance;
};  //end class definition

int main()
{
    //todo
}
#ifndef _BACKACCOUNT_
    #define _BACKACCOUNT_

    class BackAccount 
    {
        public:
            BackAccount(int balance);
            int getBalance();
            void deposit(int amount);
            void withdrawal(int amount);

        private:
            int _balance;
    };

#endif
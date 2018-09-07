/*********************************************************************
** Author:          Sandro Aguilar, Kuljot Biring and Christian Martinez
** Date:            September 6, 2018
** Description:     BankingApp class specification file
*********************************************************************/
#ifndef BANKAPP_HPP
#define BANKAPP_HPP
#include <string>
#include <vector>

class BankApp {
    private:
        // hold checkings and savings accounts
        std::vector<Checkings> checkingAccounts;
        std::vector<Savings> savingsAccounts;
        std::string accountNumber;
        std::string username;

    public:

};

#endif //OSU_FALL2018_HACKATHON_BANKAPP_HPP

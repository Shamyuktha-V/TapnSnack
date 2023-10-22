#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include<iostream>
#include<string>
#include<fstream>
#include<time.h>
#include<string.h>
#include<sstream>
#include<stdlib.h>

using namespace std;

class Product
{
private:
    float price;
    int quantity;
    int Stock_no;
    string name;
public:
    Product();
    void  purchase();
    int checkstock();
    float get_price();
    void set_price(float);
    int get_quantity();
    void set_quantity(int);
    int get_stock();
    void set_stock(int);
    string get_name();
    void set_name(string);
    ~Product(){};
};

class Drinks:public Product
{
public:
    Drinks(){};
    ~Drinks(){};
};

class Chocolates:public Product
{
public:
    Chocolates(){};
    ~Chocolates(){};
};

class Chips:public Product
{
public:
    Chips(){};
    ~Chips(){};
};

class Transaction
{
private:
    string card_no;
    string cvv;
public:
    Transaction(){};
    int checkCard(char [] ,char []);
    ~Transaction(){};

};

class Bill
{
private:
    float totalamount;
public:
    Bill(){};
    float get_totalamount();
    void Calculate(Drinks [10],Chocolates [10],Chips [10]);
    void display_bill(Drinks [10],Chocolates [10],Chips [10]);
    ~Bill(){};
};
class Cash_dispenser
{
private:
    int balance;
public:
    Cash_dispenser(){};
    int get_balance();
    int checkBalance(char [],Bill);
    ~Cash_dispenser(){};
};


class VendingMachine
{
private:
    Product &P;
public:
    VendingMachine(Product &P1):P(P1){};
    Cash_dispenser C;
    Transaction T;
    ~VendingMachine(){};
};




#endif // HEADER_H_INCLUDED

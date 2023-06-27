#ifndef WORK_H_INCLUDED
#define WORK_H_INCLUDED
#include <bits/stdc++.h>
#include <string>

using namespace std;
struct u
{
    int id;
    std::string name;
    std::string pwd;
    string number;
    std::string site;
    double money;
    int type;//1-seller,2-buyer,3-admin
    int ing;
};
struct p
{
    int id;
    int sell_id;
    int buy_id;
    int tid;
    string name;
    string describe;
    double price;
    int year;
    int month;
    int day;
    int hour;
    int min;
    int sec;
    string ing;
    string sell;
    string buy;

};
extern struct u user[100];
extern struct p product[100];


extern int choice;
extern int login;
extern int signnum;
extern int goods_num;
extern int goods_id;
extern int user_index;
extern int out_num;
extern int tnum;//订单数量

void user_login();
void user_sign_in();
void admin_sign();
void admin_func();
void user_main_menu();
void seller();
void buyer();
void shelf_goods();
void see_my_sell_goods();
void change_goods();
void sold_out();
void see_history_sell_order();
void see_product();
void buy_goods();
void search_goods();
void see_buy();
void see_more();
void my_message();
void change_messgae();
void see_my_message();
void chongzhi();
void save_goods();
void save_order();
void admin_see_goods();
void admin_search();
void admin_order();
void admin_see_user();
void del_user();
void admin_sold_goods();
#endif // WORK_H_INCLUDED

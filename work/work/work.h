#ifndef WORK_H_INCLUDED
#define WORK_H_INCLUDED
#include <bits/stdc++.h>
#include <string>
struct u
{
    int id;
    std::string name;
    std::string pwd;
    int number;
    std::string site;
    int money;
    int type;//1-seller,2-buyer,3-admin
};

extern struct u user[100];

extern int choice;
extern int login;
extern int signnum;

void user_login();
void user_sign_in();
void admin_sign();
void admin_func();

#endif // WORK_H_INCLUDED

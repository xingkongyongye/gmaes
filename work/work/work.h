#ifndef WORK_H_INCLUDED
#define WORK_H_INCLUDED
#include <stdlib.h>
#include <string.h>
typedef struct u
{
    string name;
    string pwd;
    int type;//1-seller,2-buyer,3-admin
}User;
User user[100];void user_login();
void user_sign_in();

#endif // WORK_H_INCLUDED

#include "work.h"
void see_my_message()
{
    cout<<"*****************************************************"<<endl;
    cout<<"用户名："<<user[user_index].name<<endl;
    cout<<"联系方式："<<user[user_index].number<<endl;
    cout<<"地址："<<user[user_index].site<<endl;
    printf("钱包余额：%.1lf\n",user[user_index].money);
    cout<<"*****************************************************"<<endl;
}

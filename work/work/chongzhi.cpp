#include "work.h"
void chongzhi()
{
    double money;
    cout<<"请输入充值数目：";
    cin>>money;
    user[user_index].money=user[user_index].money+money;
    cout<<"**************************************************"<<endl;
    cout<<"充值成功!"<<endl;
    cout<<"当前余额为："<<user[user_index].money<<endl;
}

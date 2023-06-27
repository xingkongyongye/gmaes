#include "work.h"
#include <ctime>
void shelf_goods()
{
    string name,describe;
    char choice;
    double price;
label_0:
    cout<<"请输入商品名称：";
    cin>>name;
    cout<<"请输入商品金额：";
    cin>>price;
    cout<<"请输入商品描述：";
    cin>>describe;
    cout<<endl<<endl;
    cout<<"请确认发布商品的信息无误！"<<endl;
    cout<<"***************************"<<endl;
    cout<<"商品名称"<<' '<<name<<endl;
    cout<<"商品金额"<<' '<<price<<endl;
    cout<<"商品描述"<<' '<<describe<<endl;
    cout<<"***************************"<<endl<<endl<<endl;
    cout<<"您确定要发布该商品吗？(y/n或者退出e)"<<' ';
    cin>>choice;
    if(choice=='e')
        return;
    if(choice=='y')
    {
        time_t now=time(0);
        tm *ltm=localtime(&now);
        product[goods_num].name=name;
        product[goods_num].price=price;
        product[goods_num].describe=describe;
        product[goods_num].year=1900+ltm->tm_year;
        product[goods_num].month=1+ltm->tm_mon;
        product[goods_num].day=ltm->tm_mday;
        product[goods_num].hour=ltm->tm_hour;
        product[goods_num].min=ltm->tm_min;
        product[goods_num].sec=ltm->tm_sec;
        product[goods_num].id=goods_id;
        product[goods_num].sell=user[user_index].name;
        product[goods_num].sell_id=user[user_index].id;
        product[goods_num].ing="销售中";
        //cout<<product[goods_num].name;
        goods_num++;
        goods_id++;
        save_goods();
        cout<<"商品发布成功!"<<endl;

    }
    if(choice=='n')
    {
        goto label_0;
    }




}

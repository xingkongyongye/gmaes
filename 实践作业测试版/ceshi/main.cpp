#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
using namespace std;

typedef struct u
{
    string name;
    string pass;
    int type;
}user;
user us[10];

int main()
{
    /*
    freopen("use_data.txt","a+",stdout);

    for(int i=1;i<=2;i++)
    {
        cin>>us[i].name;
        cin>>us[i].pass;
        cin>>us[i].type;
    }
    printf("name    pass    type\n");
    for(int i=1;i<=2;i++)
    {
        cout<<us[i].name<<' '<<us[i].pass<<' '<<us[i].type<<endl;

    }

    fclose(stdout);
    freopen("con","w",stdout);
    printf("hello");
    */
    FILE *f=fopen("use_data.txt","w");
    for(int i=1;i<=2;i++)
    {
        cin>>us[i].name;
        cin>>us[i].pass;
        cin>>us[i].type;
    }
    fprintf(f,"%-11s%-21s%-11s\n", "name", "pass", "type");
    for(int i=1;i<=2;i++)
    {
        fprintf(f," %-11s,",us[i].name.c_str());
        fprintf(f," %-21s,",us[i].pass.c_str());
        fprintf(f," %-11d\n",us[i].type);
    }
    return 0;
}

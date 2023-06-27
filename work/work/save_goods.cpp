#include "work.h"
void save_goods()
{
    FILE *f=fopen("goods_data.txt","w");
    fprintf(f,"%s,%s,%s,%s,%s,%s,%s\n","商品ID","名称", "价格","描述","卖家ID","上架时间","商品状态");
    for(int i=0;i<goods_num;i++)
    {
        fprintf(f,"M%05d,",product[i].id);
        fprintf(f,"%s,",product[i].name.c_str());
        fprintf(f,"%.1lf,",product[i].price);
        fprintf(f,"%s,",product[i].describe.c_str());
        fprintf(f,"U%05d,",product[i].sell_id);
        fprintf(f,"%d-%d-%d %d:%d:%d,",product[i].year,product[i].month,product[i].day,product[i].hour,product[i].min,product[i].sec);
        fprintf(f,"%s\n",product[i].ing.c_str());
    }
    fclose(f);
}

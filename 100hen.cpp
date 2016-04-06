/**
 *  百钱买百鸡问题
 *  题目：100元买100只鸡，公鸡5元一只，母鸡3元一只，小鸡一元3只
 *  分析：设 公鸡数量为x，母鸡数量为y，小鸡数量为z，则有
 *          x + y + z  == 100;
            5*x + 3*y + z/3.0 ==100;
            ( z == 100-x-y ) 
            15*x + 9*y + 100-x-y == 300 ,
            14*x + 8*y == 200 , 
            7*x + 4*y == 100 ,
            y = 25 - 7*x/4 ,
            z = 100 - x - y ,
            5*x + 3*y + z/3.0 ==100;
 */

#include"stdio.h"
int main()
{
    int x,y,z;
    for(x=0;x<15;x+=4)
    {
            y=(100-7*x)/4;
            z=100-x-y;
            if(x*5+y*3+z/3.0==100)
                printf("%d %d %d\n",x,y,z);     
    }
    return 0;
}
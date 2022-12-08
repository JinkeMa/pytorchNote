

/*
MAX_BYTE = 8
二进制表示8的倍数：
8   1000
16  10000
32  100000
64  1000000
128 10000000
要把一个数x上调为8的倍数：
  xxx1000 = 2^n * 2^3
  xxxaxxx (= Δ)
&    1000 (= ~(MAX_BYTE - 1))
= ? * 2^3 
result of & operation = 2^3(a + x*2^4 + x*2^5+...)
因为要上调，所以要把(0000,1000)区间的数，加一个值0111
变成(1000,1111)之间,然后低位置0

(8,)，直接进位，然后同样低位置0

首先，除最高位以外全部置0，
可以通过和1000...0进行&操作来实现
  MAX_BYTE - 1  = 0111
~(MAX_BYTE - 1) = 1000

x + MAX_BYTE - 1 = 
10000 & 1000
10001 & 1000
...
1xxxx & 1000 = 
11xxx
*/

/*
    bytes    ÷8     need   
 0<=?<=8   0...,1    0        
 8<?<=16   1...,2    1     
16<?<=24   2...,3    2

((bytes -1) / 8) 

bytes - 1     ÷8
-1<=?<=7       0 
 8<=?<=15      1
16<=?<=23      2
24<=?<=31      3     
32<=?<=39      4
40<=?<=47      5
        ...
120<=?<127     15
    */
#include<iostream>

using namespace std;

int main()
{

    
}

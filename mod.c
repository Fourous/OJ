//peking 2835

/*
在古代的孙子算静（Sun大师的数学手册），下面的问题被提到。
“我们有很多事情，但我们不知道到底有多少。如果我们把它们数为三，我们还剩两个。
如果我们指望他们我们还剩下三个。如果我们指望他们以我们两剩下七。有多少东西？“
Sunzi在他的作品中写道，“答案是二十三。”
1592，笪伟城把解决问题作为suanfa彤宗一首诗（算术系统的论述）。
“三古稀之年的人走在一起，这是罕见的！

五棵梅花，花二十一枝，

七个门徒在半月前聚集，

“一百零五拿走，结果将出现。”！“


在现代符号，孙子的问题是要找到一个数x，


X≡2（mod 3），

X≡3（mod 5），

X≡2（mod 7）。


程的解决方案是


X≡2×70 + 3 + 2 15 21××≡233（mod 105）。


该解决方案还表明，如果给定一个三个整数R1，R2，R3，并要求找到一个数字X，这样


X≡R1（mod 3），

X≡R2（mod 5），

X≡R3（mod 7），


那么答案是


X≡R1 + R2×70×R3×21 + 15（mod 105）。


例如，对于R1 = 1，R2 = 4，R3＝4，答案是


X≡1×70 + 4 + 4 15 21××≡214（mod 105）。


在泛化，给定n个正整数a1，a2，…，一个，问题是要确定是否存在正整数n
B1，B2，…，BN，对于任意正整数n，让PI（1≤我≤N）是剩余的N模AI和
M = P1×B1 + P2×B2 +…+ PN×BN，然后我≡PI（MOD AI）我（1≤我≤N）；
并找到一组值，B1，B2，…，BN如果存在。


输入


输入由多个测试用例组成。每个测试用例都在一行中给出。在每一个测试案例，
第一是整数n（1≤N≤10），其次是A1，A2，…，一个（AI≤50, 1≤我≤N）。
最后一个用例，n＝0，表示输入的结束，不应该被处理。


输出


对于每个测试用例，输出一行。如果正整数B1，B2，…，BN存在，输出它们
（它们不应该超过50个小数位数）由单个空格隔开。如果有多个答案，输出任何一个。
输出“否”，如果它们不存在。


3 3 5 7

0


示例输出


70 21 15
#include <stdio.h>
#include <stdlib.h>
int main(void){
char a[5]={};
int num=0;
char p,q,m;//n是个数,pqm是输入的三个值
char c;
while(c!=0){
  c=getchar();
  a[num++]=c;
}
for(int i=1;i<3;i++){
  printf("%s\n",&a[i]);
}



提示


注意你的程序输出格式，因为特别法官使用。
*/


//证明中国取余定理
#include <stdio.h>
#include <stdlib.h>
int main(void){
char a[10];
int num=0;
//n是个数,pqm是输入的三个值
char c;
while(c!='0'){
  a[num++]=c;
  c=getchar();
}
for(int i=0;i<4;i++){
  printf("%c",a[i]);
}
  return 0;
}

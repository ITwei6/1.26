#include <stdio.h>
//enum Day//星期
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//性别
//{
//	MALE,
//	FEMALE
//};
//enum Color//颜色
//{
//	RED=5,
//	GREEN=8,
//	BLUE=4
//};
//int main()
//{
//	enum Color col = BLUE;//枚举变量col只能由枚举常量赋值，才不会出现类型差异
//	//如果这样写： RED=3；可以吗？
//	return 0;
//}
//联合类型的声明
//union UN
//{
//	char c;//1字节
//	int i;//4字节
//};
////联合类型的定义
//union UN un;
////联合成员的访问    (un.c)   (un.i)
////计算联合类型变量的大小
//int main()
//{
//	/*printf("%p\n", &un);
//	printf("%p\n", &(un.c));
//	printf("%p\n", &(un.i));
//	*/
//
//	un.i = 0x11223344;
//	un.c = 0x55;                                        //i,和c同时都使用了，都给各自赋值后，原来自己的值就会发现变化，因为它们共用同一块空间
//	printf("%x\n", un.i);
//	return 0;
//}
//union Un1
//{
//	char c[5];
//	int i;
//}un1;
//union Un2
//{
//	short c[7];
//	int i;
//}un2;
//int main()
//{
//	//下面输出大小是多少？
//	printf("%d\n", sizeof(un1));
//	printf("%d\n", sizeof(un2));
//	return 0;
//}
//int check()//利用char类型指针解引用访问1个字节，如果数据在内存中倒着存，那访问1字节就能访问到1
//{
//	int i = 1;
//	int* p = &i;
//	return *((char*)p);
//}

int check()
{
	union Un
	{
		char c;
		int i;
	}un;
	un.i = 1;
	return un.c;//利用联合共用相同空间，给i赋值1，那c也存着i的数据，如果小段，那么c就是1

}
int main()
{
	int ret=check();
	if (ret == 1)
	{
		printf("小段\n");
	}
	else
		printf("大段\n");
	return 0;
}
#include <stdio.h>
//enum Day//����
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//�Ա�
//{
//	MALE,
//	FEMALE
//};
//enum Color//��ɫ
//{
//	RED=5,
//	GREEN=8,
//	BLUE=4
//};
//int main()
//{
//	enum Color col = BLUE;//ö�ٱ���colֻ����ö�ٳ�����ֵ���Ų���������Ͳ���
//	//�������д�� RED=3��������
//	return 0;
//}
//�������͵�����
//union UN
//{
//	char c;//1�ֽ�
//	int i;//4�ֽ�
//};
////�������͵Ķ���
//union UN un;
////���ϳ�Ա�ķ���    (un.c)   (un.i)
////�����������ͱ����Ĵ�С
//int main()
//{
//	/*printf("%p\n", &un);
//	printf("%p\n", &(un.c));
//	printf("%p\n", &(un.i));
//	*/
//
//	un.i = 0x11223344;
//	un.c = 0x55;                                        //i,��cͬʱ��ʹ���ˣ��������Ը�ֵ��ԭ���Լ���ֵ�ͻᷢ�ֱ仯����Ϊ���ǹ���ͬһ��ռ�
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
//	//���������С�Ƕ��٣�
//	printf("%d\n", sizeof(un1));
//	printf("%d\n", sizeof(un2));
//	return 0;
//}
//int check()//����char����ָ������÷���1���ֽڣ�����������ڴ��е��Ŵ棬�Ƿ���1�ֽھ��ܷ��ʵ�1
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
	return un.c;//�������Ϲ�����ͬ�ռ䣬��i��ֵ1����cҲ����i�����ݣ����С�Σ���ôc����1

}
int main()
{
	int ret=check();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
		printf("���\n");
	return 0;
}
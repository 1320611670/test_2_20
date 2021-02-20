#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>


//int main()
//{
	/*const char*p = "abcdef";
	printf("%s\n", p);
	return 0;*/

	/*char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	const char*p1 = "abcdef";
	const char*p2 = "abcdef";

	if (arr1 == arr2)
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}

	if (p1 == p2)
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	return 0;*/

	//int arr[10] = { 0 }; // 整形数组
	//char ch[5] = { 0 }; // 字符数组
	//int *parr[4]; // 存放整形指针的数组-指针数组
	//char*pch[5]; // 存放字符指针的数组-指针数组

	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int d = 40;
	//int*arr1[4] = { &a,&b,&c,&d };
	//int i = 0;
	//for (i = 0; i < 4; i++)
	//{
	//	printf("%d ", *(arr1[i]));
	//}
	//return 0;

	//int arr1[] = { 1,2,3,4,5 };
	//int arr2[] = { 2,3,4,5,6 };
	//int arr3[] = { 3,4,5,6,7 };
	//int *parr[] = { arr1,arr2,arr3 };
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 5; j++)
	//	{
	//		printf("%d ", *(parr[i] + j));
	//	}
	//	printf("\n");
	//}
	//return 0;
	
	//int *p=NULL; //p是整形指针 - 指向整形的指针 - 可以存放整形的地址
	//char*pc = NULL; //pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
	//// 数组指针 - 指向数组的指针 - 存放数组的地址
	//int arr[10] = { 0 };
	//// arr - 首元素地址
	//// &arr[0] - 首元素的地址
	//// &arr - 数组的地址

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int(*p)[10] = &arr; // 数组的地址要存起来
	//// 上面的p就是数组指针
	//return 0; 

	/*char*arr[5];
	char(*pa)[5]=&arr;

	int arr2[10] = { 0 };
	int(*pa2)[10] = &arr2;
	return 0;*/

	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*pa)[10] = &arr;
	int i = 0;*/
	/*for (i = 0; i < 10; i++)
	{
		printf("%d ", *(*pa+i));
	}*/

	/*for (i = 0; i < 10; i++)
	{
		printf("%d ", (*pa)[i]);
	}
	return 0;*/
//}

// 参数是数组的形式
void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

// 参数是指针的形式
void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", p[i][j]);
			printf("%d ", *(p[i]+j));
			printf("%d ", *(*(p+i) + j));
			printf("%d ", (*(p+i))[j]);
			// 打印结果都一样
		}
		printf("\n");
	}
}

//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}

//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
//void tets(int arr[3][])//err
//{}
//
//void test(int*arr) // err
//{}
//void test(int**arr) // err
//{}
//void test(int(*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr); // 二维数组传参
//	return 0;
//}

void test1(int*p)
{

}

void test(int **p)
{

}

int add(int x, int y)
{
	return x + y;
}

//int main()
//{
//	int a = 10;
//	int*p1 = &a;
//	test1(&a);// ok
//	test1(p1);// ok
//	
//	int *ptr;
//	int **p = &ptr;
//	test(&ptr);
//	test(p);
//	int*arr[10];
//	test(arr);// 指针数组也可以
//	return 0;
//}

//void print(char*str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = add;
//	printf("%d\n", (*pa)(2, 5));
//
//	void(*p)(char*) = print;
//	(*p)("hello word");
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

char*my_strcpy(char*dest, const char*str);

// 函数指针
char*(*pf)(char*, const char*);
char*(*pfArr[4])(char*, const char*);
int main()
{
	int(*pa[4])(int, int) = { Add,Sub,Mul,Div };
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", pa[i](2, 3));
	}
	return 0;
}

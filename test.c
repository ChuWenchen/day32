#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	float* p = (float*)&n;
//	printf("n=%d\n",n);
//    printf("*p=%f\n",*p);
//
//	*p = 9.0;
//	printf("n=%d\n", n);
//	printf("*p=%f\n", *p);
//
//	return 0;
//}


//          指针进阶

//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "hello";
//	char* arr3 = "hello";       // 常量字符串，只存一份，无法被更改， *arr3=w  不可行
//	char* arr4 = "hello";     
//	if (arr1 == arr2)
//		printf("same");
//	else
//		printf("not same");
//	if (arr3 == arr4)
//		printf("same");
//	else
//		printf("not same");
//	return 0;
//}



//              指针数组

//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	int* arr[] = { a,b,c };   //整型指针的数组，有3个元素，每个元素是一个整型指针
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(arr[i]+j));  // printf("%d", *(arr[i][j]));
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int* pa = &a;
//
//	char c = 0;
//	char* pc = &c;
//	
//	int arr[5] = { 1,2,3,4,5 };
//	int(*par)[5] = &arr;        // par,是数组指针的名字， int(*)[5]  是指向的类型
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p1 = arr;       // 首元素的地址
//	int(*p2)[5] = &arr;  // 数组的地址
//	printf("%p  ", p1);
//	printf("%p\n", p1 + 1);    // 走过4个字节，一个整型
//	printf("%p  ", p2);
//	printf("%p\n", p2 + 1);    // 走过整个数组
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",(*p)[i]);
//		printf("%d ", *((*p) + i));
//	}
//
//	return 0;
//}


//void print(int arr[3][4], int h, int l)
//{
//	int i = 0;
//	for (i = 0; i < h; i++)
//	{
//		int j = 0;
//		for (j = 0; j < l; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[4], int h, int l)
//{
//	int i = 0;
//	for (i = 0; i < h; i++)
//	{
//		int j = 0;
//		for (j = 0; j < l; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
//	//print(arr, 3, 4);
//	print2(arr, 3, 4);   // 二维数组的首元素是第一行
//	return 0;
//}


//int arr[5];      //整型数组，有5个元素
//int* p[10];      //指针数组，存放10个整型指针的数组
//int(*p)[10];     //数组指针，指向一个数组，这个数组有10个元素，每个元素的类型是int
//int(*p[10])[5];  //p是一个存放10个指针的数组，每个指针可以指向一个数组，数组5个元素，类型是int

//void test(int arr[])    // 可行，arr是一个整型数组，创建一个整型数组接收
//{}
//
//void test(int arr[10])  //  可行，与上一种形式没有什么区别，10可以省略
//{}
//
//void test(int *arr)      //  可行，实参arr，数组名本质上是首元素的地址，而元素是int类型，所以可以用整型指针接收
//{}
//
//void test2(int *arr[20])  //  可行，实参brr，是一个存放了20个元素的数组，每个元素类型是整型指针。
//{}
//
//void test2(int **arr)      // 可行，brr是一个存放指针的数组，而brr（数组名）又是首元素的地址，第一次解引用找到brr的首元素（是一个指针），再解引用找到这个指针指向的元素
//{}
//
//int main()
//{
//	int arr[10] = {0};
//	int* brr[20] ={0};
//	test(arr);
//	test2(brr);
//}

void test(int arr[3][5])     //可行，用一个二维数组接收，行可以省略，但列不能省略
{}

void test(int * arr)         // 不可行， 不能用一个整型指针接收
{}

void test(int * arr[5])      //  不可行，这里arr是一个数组，存放了5个元素，每个元素的类型是int*，也就是存放了5个整型指针
{}

void test(int (*arr)[5])     // 可行， arr是一个数组指针，指向一个含有5个元素的数组，每个元素是int类型
{}

void test(int ** arr)        // 不可行，arr不是二级指针
{}
int main()
{
	int arr[3][5] = { 0 };
	test(arr);
}
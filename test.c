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


//          ָ�����

//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "hello";
//	char* arr3 = "hello";       // �����ַ�����ֻ��һ�ݣ��޷������ģ� *arr3=w  ������
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



//              ָ������

//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	int* arr[] = { a,b,c };   //����ָ������飬��3��Ԫ�أ�ÿ��Ԫ����һ������ָ��
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
//	int(*par)[5] = &arr;        // par,������ָ������֣� int(*)[5]  ��ָ�������
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p1 = arr;       // ��Ԫ�صĵ�ַ
//	int(*p2)[5] = &arr;  // ����ĵ�ַ
//	printf("%p  ", p1);
//	printf("%p\n", p1 + 1);    // �߹�4���ֽڣ�һ������
//	printf("%p  ", p2);
//	printf("%p\n", p2 + 1);    // �߹���������
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
//	print2(arr, 3, 4);   // ��ά�������Ԫ���ǵ�һ��
//	return 0;
//}


//int arr[5];      //�������飬��5��Ԫ��
//int* p[10];      //ָ�����飬���10������ָ�������
//int(*p)[10];     //����ָ�룬ָ��һ�����飬���������10��Ԫ�أ�ÿ��Ԫ�ص�������int
//int(*p[10])[5];  //p��һ�����10��ָ������飬ÿ��ָ�����ָ��һ�����飬����5��Ԫ�أ�������int

//void test(int arr[])    // ���У�arr��һ���������飬����һ�������������
//{}
//
//void test(int arr[10])  //  ���У�����һ����ʽû��ʲô����10����ʡ��
//{}
//
//void test(int *arr)      //  ���У�ʵ��arr������������������Ԫ�صĵ�ַ����Ԫ����int���ͣ����Կ���������ָ�����
//{}
//
//void test2(int *arr[20])  //  ���У�ʵ��brr����һ�������20��Ԫ�ص����飬ÿ��Ԫ������������ָ�롣
//{}
//
//void test2(int **arr)      // ���У�brr��һ�����ָ������飬��brr����������������Ԫ�صĵ�ַ����һ�ν������ҵ�brr����Ԫ�أ���һ��ָ�룩���ٽ������ҵ����ָ��ָ���Ԫ��
//{}
//
//int main()
//{
//	int arr[10] = {0};
//	int* brr[20] ={0};
//	test(arr);
//	test2(brr);
//}

void test(int arr[3][5])     //���У���һ����ά������գ��п���ʡ�ԣ����в���ʡ��
{}

void test(int * arr)         // �����У� ������һ������ָ�����
{}

void test(int * arr[5])      //  �����У�����arr��һ�����飬�����5��Ԫ�أ�ÿ��Ԫ�ص�������int*��Ҳ���Ǵ����5������ָ��
{}

void test(int (*arr)[5])     // ���У� arr��һ������ָ�룬ָ��һ������5��Ԫ�ص����飬ÿ��Ԫ����int����
{}

void test(int ** arr)        // �����У�arr���Ƕ���ָ��
{}
int main()
{
	int arr[3][5] = { 0 };
	test(arr);
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//调整整数数组中数字的顺序，使得数组中所有的奇数 位于数组的前半部分
//void move_odd_even(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			right--;
//			left++;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//12345796
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	move_odd_even(arr, sz);
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//
//typedef void(*pf_t)(int);
//int main()
//{
//	/*(  *(  void(*)()  )0  )();*/
//	void(  *signal(  int, void(*)(int)  )  )(int);
//	可改写为
//	pf_t signal(int, pf_t);
//	return 0;
//}

//写一个计算器，加减乘除
//void menu()
//{
//	printf("********************\n");
//	printf("*******1.ADD*******\n");
//	printf("*******2.SUB*******\n");
//	printf("*******3.MUL*******\n");
//	printf("*******4.DIV*******\n");
//	printf("*******0.EXIT*******\n");
//	printf("********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void calc(int(*pf)(int, int))
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	printf("请输入参数：>");
//	scanf("%d %d", &a, &b);
//	ret = pf(a, b);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择计算方法：>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		/*case 1:
//			printf("请输入参数：>");
//			scanf("%d %d", &a, &b);
//			ret = Add(a,b);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入参数：>");
//			scanf("%d %d", &a, &b);
//			ret = Sub(a, b);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入参数：>");
//			scanf("%d %d", &a, &b);
//			ret = Mul(a, b);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入参数：>");
//			scanf("%d %d", &a, &b);
//			ret = Div(a, b);
//			printf("%d\n", ret);
//			break;*/
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算\n");
//			break;
//		default:
//			printf("输入错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*pf)(int, int) = Add;
//	int (*arr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//void menu()
//{
//	printf("********************\n");
//	printf("*******1.ADD*******\n");
//	printf("*******2.SUB*******\n");
//	printf("*******3.MUL*******\n");
//	printf("*******4.DIV*******\n");
//	printf("*******0.EXIT*******\n");
//	printf("********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	int (*pf[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	
//	do
//	{
//		menu();
//		printf("请选择计算方法：>");
//		scanf("%d", &input);
//
//		if (input == 0)
//		{
//			printf("退出游戏\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入参数：>");
//			scanf("%d %d", &a, &b);
//			ret = pf[input];
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}


//冒泡排序
//void bubble_sort(int* arr, int sz)//只能排序整型数组
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)//sz-1
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr [j + 1]= tmp;
//				flag = 0;//如果有元素交换，则置为0
//			}
//		}
//		if (flag == 1)//为1，则未发生交换,即数组本来为1 2 3 4 5 6 7 8 9
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };//1 2 3 4 5 6 7 8 9
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//void qsort(void* base,   //要排序的起始位置
//	size_t num,            //待排序的数据元素的个数
//	size_t width,          //待排序的数据元素的大小
//	int (*cmp)(const void* e1, const void* e2)  //函数指针——比较函数
//    );
//int cmp_t(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);//降序就(*(int*)e2 - *(int*)e1)
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };//1 2 3 4 5 6 7 8 9
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_t);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdlib.h>//qsort头文件
//int cmp_t(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_t);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->age, ((struct Stu*)e2)->age);
//}
//void test2()//排序结构体数据
//{
//	struct Stu s[] = { {"zhangsan",24},{"lisi",64},{"wangwu",35} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//
//}
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}

int cmp_t(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
struct Stu
{
	char name[20];
	int age;
};
void Swap(char* buf1, char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void *base, int sz,int width,int (*cmp)(const void *e1,const void *e2))//冒泡排序优化可以排序任何类型
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1)//为1，则未发生交换,即数组本来为1 2 3 4 5 6 7 8 9
		{
			break;
		}
	}
}
void test3()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	//int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_t);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age, ((struct Stu*)e2)->age;
}
void test4()//排序结构体数据
{
	struct Stu s[] = { {"zhangsan",24},{"lisi",64},{"wangwu",35} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);

}
int main()
{
	//test3();
	test4();
	return 0;
}
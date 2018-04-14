//堆排序
#include<iostream>
#include<algorithm>
using namespace std;
int left(int i)
{
	return 2*i+1;
}
int right(int i)
{
	return 2*i+2;
}
//根节点的索引为0；得到左右节点
void max_heapify(int *a,int i,int size)//维护最大堆的性质，i是堆下标，在此函数中，size只用来判断数组是否越界
{
	int l,r,largest;
									//找出父节点，左子节点，右子节点中最大的下标
	l=left(i);
	r=right(i);
	if(l<size&&a[l]>a[i])
		largest=l;
	else
		largest=i;
	if(r<size&&a[r]>a[largest])
		largest=r;
									//如果最大下标不等于父节点的下标，进行交换
	if(largest!=i)
	{
		swap(a[i],a[largest]);
		max_heapify(a,largest,size);			//继续判断子节点为根节点的树是否满足性质
	}
}
void build_max_heap(int *a,int size)			//建立一个新堆
{
	int i;		//i是堆下标
	for(i=size/2-1;i>=0;i--)//从不是叶节点开始维护堆的性质
		max_heapify(a,i,size);
}
void heap_sort(int *a,int size)
{
	int i;
	build_max_heap(a,size);
	for(i=size-1;i>=1;i--)
	{
		swap(a[0],a[i]);//从堆的最大索引开始到2，依次交换
		max_heapify(a,0,i);//维护交换后堆的性质
	}
}
void print(int *a,int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<' ';
	cout<<endl;
}
int main()
{
	int a[5]={3,5,4,9,1};
	heap_sort(a,5);
	print(a,5);
	return 0;
}

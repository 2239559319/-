//������
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
//���ڵ������Ϊ0���õ����ҽڵ�
void max_heapify(int *a,int i,int size)//ά�����ѵ����ʣ�i�Ƕ��±꣬�ڴ˺����У�sizeֻ�����ж������Ƿ�Խ��
{
	int l,r,largest;
									//�ҳ����ڵ㣬���ӽڵ㣬���ӽڵ��������±�
	l=left(i);
	r=right(i);
	if(l<size&&a[l]>a[i])
		largest=l;
	else
		largest=i;
	if(r<size&&a[r]>a[largest])
		largest=r;
									//�������±겻���ڸ��ڵ���±꣬���н���
	if(largest!=i)
	{
		swap(a[i],a[largest]);
		max_heapify(a,largest,size);			//�����ж��ӽڵ�Ϊ���ڵ�����Ƿ���������
	}
}
void build_max_heap(int *a,int size)			//����һ���¶�
{
	int i;		//i�Ƕ��±�
	for(i=size/2-1;i>=0;i--)//�Ӳ���Ҷ�ڵ㿪ʼά���ѵ�����
		max_heapify(a,i,size);
}
void heap_sort(int *a,int size)
{
	int i;
	build_max_heap(a,size);
	for(i=size-1;i>=1;i--)
	{
		swap(a[0],a[i]);//�Ӷѵ����������ʼ��2�����ν���
		max_heapify(a,0,i);//ά��������ѵ�����
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

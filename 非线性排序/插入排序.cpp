//��������
//����ߵĸ�ֵ����a[i]

for(j=1;j<n;j++)
	{
		key=a[j];
		while(j-1>=0&&a[j-1]>a[j])
		{
			a[j]=a[j-1];
			j--;
			a[j]=key;
		}
	}

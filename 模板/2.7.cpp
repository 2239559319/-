//��ģ�������������� 
template <class Type>
class TLinkList				//����
{
	//������ģ�嶨��	
}; 
//����ģ������������ģ��
template <class Type>
class TOrderedLinkList():public TLinkList<Type>
 //TOrderedLinkListΪ������ģ��
{
//������ģ�嶨��	
}; 


//ʹ����ģ��ʵ�������ģ�������������ģ���ࣨ���ࣩ 
//���������ģ��
template <class Type>
class  TLinkList
{
	//������ģ�嶨��	
};
//��ģ����������ģ����
class TOrderedLinkList():public TLinkList<ʵ������>
//ʵ������Ϊint֮���
{
	
};


//����ģ��ʵ������õ���ģ�������������ķ�ģ���ࣨ���ࣩ
class TOrderedLinkList():public TLinkList<int>  //����ĳ���һ�������int����
{
public:
	bool Insert(Type value);//��ģ����ĺ������� 
};

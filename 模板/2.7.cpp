//从模板类派生出新类 
template <class Type>
class TLinkList				//基类
{
	//基类类模板定义	
}; 
//用类模板生成派生类模板
template <class Type>
class TOrderedLinkList():public TLinkList<Type>
 //TOrderedLinkList为派生类模板
{
//派生类模板定义	
}; 


//使用类模板实例化后的模板类可以派生非模板类（新类） 
//定义基类类模板
template <class Type>
class  TLinkList
{
	//基类类模板定义	
};
//用模板类派生非模板类
class TOrderedLinkList():public TLinkList<实参类型>
//实参类型为int之类的
{
	
};


//从类模板实例化后得到的模板类派生而来的非模板类（新类）
class TOrderedLinkList():public TLinkList<int>  //这里改成了一个具体的int类型
{
public:
	bool Insert(Type value);//非模板类的函数声明 
};

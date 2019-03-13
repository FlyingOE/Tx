// Dictionary.h: interface for the CDictionary class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DICTIONARY_H__D4AF5746_B0F3_11D5_9118_000102981438__INCLUDED_)
#define AFX_DICTIONARY_H__D4AF5746_B0F3_11D5_9118_000102981438__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <map>
#include <iostream>  
#include <algorithm>  
#include <vector>  
#include <string>  
 using namespace std; 
 namespace GWDPApi
{
class CGWDictionary 
{
public:
	CGWDictionary();
	virtual ~CGWDictionary();

public:
	//�Ƿ���������ֵ�
	bool IsLoadDict(){return m_bLoadFlag;}
	//���������ֵ�
	 bool LoadDictionary();
	 void Clear();
	 
	 //����������ı������ݣ�ȥ��ע�ͺͿ���
	 int checktxt(char* buf,int len);

	 //�ַ���ת��д
	 void upperstr(char *p);

	 //���ֵ�ID��ѯ�ֵ�������
	 short GetDictTypeByID(int Id);

	 //���ֵ�ID��ѯ�ֵ�������
	 string GetDictNameByID(int Id);

	 //���ֵ����Ʋ�ѯ�ֵ�������
	 short GetDictTypeByName(string Name);

	 //���ֵ����Ʋ�ѯ�ֵ���ID
	 short GetDictItemIDByName(string Name);

	 //��ȡ�ֵ���
	 string GetNextToken(char* string);

protected:

	//�ֵ�ṹ���ֵ�ID���ֵ�Name,�ֵ����ͣ�
	typedef std::map<short/*DictId*/, std::pair <string/*DictName*/,short/*DictType*/> >  MAP_ID2FIELD;
	MAP_ID2FIELD m_mapId2Field;

	//�ֵ�ṹ���ֵ����ƣ��ֵ��
	typedef std::map<string/*DictName*/, std::pair <short/*DictIID*/, short/*DictType*/> >  MAP_FNAME2FIELD;
	MAP_FNAME2FIELD m_mapFName2Field;

	//�Ƿ�����ֵ�
	bool m_bLoadFlag;
};
};
#endif // !defined(AFX_DICTIONARY_H__D4AF5746_B0F3_11D5_9118_000102981438__INCLUDED_)

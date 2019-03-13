#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "GWDictionary.h"

#include <map>
#include <string>
using namespace std;
namespace GWDPApi
{
class CPackData
{
public:
	CPackData();
	//~CPackData();
	
	//��ͷ��ʼ��
	void HeadInit();

	//��ջ���
	void Clear();

	//��շ��Ͱ�����
	void ClearSendPackage();

	//���Ӧ�������
	void ClearRecvPackage();

	//���������ܺ�
    void SetFunctionCode(const char* sFuncCode);

	//���ð�ͷflag
	//flags = 0	���״β�ѯ��������������
	//flags = 2 	��ʾ��������ĺ�����������ʱʹ�ã���һ�����ڲ�ѯ����ġ���һҳ��ʱʹ�á�
    void SetFlags(short Flag);

    //���ð�ͷSerialno
    void SetSerialno(const char* sSerialno);

	//�������������iRecNo��ʾ������ţ�sFieldName��ʾ��������ֵ����ƣ�sFieldValue��ʾ����Ĳ���ֵ
    bool SetValue(int iRecNo, const char * sFieldName, const char * sFieldValue);

	//���ö��������ݵ����������iRecNo��ʾ������ţ�sFieldName��ʾ��������ֵ����ƣ�sFieldValue��ʾ����Ĳ���ֵ
    bool SetValueBin(int iRecNo, const char * sFieldName, long lpBuff, int lLen);

	//��ȡ�������Ӧ�����ݵ�ĳ���ֶε�ֵ��iRecNo��ʾ��ţ�sFieldName��ʾ������ֶ�����
    string GetValue(int iRecNo, const char * sFieldName);

	//��ȡ�����������ֶεĳ���
    long GetBinLength(int iRecNo, const char * sFieldName);

	//��ȡ�����������ֶε�����
    char* GetValueBin(int iRecNo, const char * sFieldName);

	//��ȡ������ĳ���
    long GetPackageLen();

	//����Ӧ�������iRecNo��ʾ������ţ�sFieldName��ʾ��������ֵ����ƣ�sFieldValue��ʾ����Ĳ���ֵ
	bool SetRespValue(int iRecNo, const char * sFieldName, const char * sFieldValue);
	
	//�ѻ������ݽ�����һ��һ�����ֶΣ�������
    bool ChangeToStruct(char* lpRevBuf,int lLen);

	//�����õ�������ֵ���֯���������ݱ���
    char* ChangeToStream();

	//�������������
    long CalculateLengthInt();

	//���������ͷ��Ϣ
    void SetPktHead(char* Buff);

	//��ȡ�����ĵĹ��ܺ�
    string GetFunctionCode();

	//��ȡ�����ĵ�flag��־
    short GetFlag();

	//��ȡ�������Ӧ�����ݵ�ĳ���ֶε�ֵ��iRecNo��ʾ��ţ�sFieldName��ʾ������ֶ�����
    string GetReqValue(int iRecNo, const char * sFieldName);

	//У���ͷ
	bool CheckHeadVerify(char* chHeadBuf);

	//���ɲ�����ͷУ��λ
	void CalculateHeadVerify(char* chHeadBuf);

	//
	int CRC(int crc, int c);

	//
	short CRC16(char* lpszData,long nDataLen);

	//��ȡMAC��ַ
	void GetMac_Windows();
	void GetMac_Linux();

	//���Ӧ����е�BIN���ݻ���
	void ReleaseRspBinBuf();
		
public:
	// ���ݰ�����
	enum StockDataType
	{
		// �������ݰ�����
		Send = 0,
			
        // �������ݰ�����
        Receive = 1
    };

	typedef struct
	{
		short	pktlen;
		char	flag;
		char	MAC[12];
		char	serial[8];
		char	optcode[8];
		char	checksum[2];
	}HEAD;
	
	typedef struct
	{
		//bin����ֵ
		char* Buff;
		
		//bin���ͳ���
        int iBuffLen;
	}FieldValue;

    typedef std::map<string/*DictName*/, std::pair<string/*strValue*/,FieldValue/*DictType*/> > FIELDS;	

	typedef struct
	{
		//�򳤶�
		short RecordLen;
		
		//���е��ֶ�
		FIELDS Fields; 
	}RECORD;

	//���ݱ��İ�ͷ
	HEAD m_oPackHead;

	//MAC��ַ
	string  m_strMac;

	//���ݰ����ȣ����ڰ�ͷ���������Ϊushort������ֻ����65535��ʵ�ʴ�������ȿ��ܴ���65535��
	//���������ʱ�����ð�ͷ�еĳ��ȣ�����һ�������������,����ʱ����ÿ���ֶμ��������
    int m_iReqPackLen;

	//�������ݰ����б�
	//key=recordNo
	//key1=dictId
	//string=value
	typedef std::map<int/*RecordNo*/ , RECORD/*Record*/> RequestData;
	RequestData m_oReqData;

	//Ӧ�����ݰ����б�
	//key=recordNo
	//key1=dictId
	//string=value
    typedef std::map<int/*RecordNo*/ , RECORD> ResponsData;
	ResponsData m_oRspData;

};
}
#ifdef _MSC_VER
#include <winsock2.h>
#else
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#endif

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 4251 4183)
#endif

#include "PackData.h"

#ifdef  WIN32
#ifdef __cplusplus 
#define DLL_EXPORT_C_DECL extern "C" __declspec(dllexport)
#define DLL_IMPORT_C_DECL extern "C" __declspec(dllimport)
#define DLL_EXPORT_DECL extern __declspec(dllexport)
#define DLL_IMPORT_DECL extern __declspec(dllimport)
#define DLL_EXPORT_CLASS_DECL __declspec(dllexport)
#define DLL_IMPORT_CLASS_DECL __declspec(dllimport)
#else
#define DLL_EXPORT_DECL __declspec(dllexport)
#define DLL_IMPORT_DECL __declspec(dllimport)
#endif
#else
#ifdef __cplusplus
#define DLL_EXPORT_C_DECL extern "C"
#define DLL_IMPORT_C_DECL extern "C"
#define DLL_EXPORT_DECL extern
#define DLL_IMPORT_DECL extern
#define DLL_EXPORT_CLASS_DECL
#define DLL_IMPORT_CLASS_DECL
#else
#define DLL_EXPORT_DECL extern
#define DLL_IMPORT_DECL extern
#endif
#endif

#define INVALID_SOCKET  (SOCKET)(~0)
#define SOCKET_ERROR            (-1)

typedef struct sockaddr SOCKADDR;
typedef u_int           SOCKET;

#include <map>
#include <string>
using namespace std;
namespace GWDPApi
{
class CPackData;
class DLL_EXPORT_CLASS_DECL CPackage
{
public:
	CPackage();
	virtual ~CPackage();

	//��ʼ��
	bool Init();
	bool UnInit();
	bool Initialize();

	string  GetVersion();

	//���������ܺ�
	void SetFunctionCode(const char* strFunctionCode);

	//���ð�ͷflag
	//flags = 0	���״β�ѯ��������������
    //flags = 2 	��ʾ��������ĺ�����������ʱʹ�ã���һ�����ڲ�ѯ����ġ���һҳ��ʱʹ�á�
	void SetFlags(short nNewValue);

	//������������
	void SetSerialno(const char* strSerialno);

	//�������������iRecNo��ʾ������ţ�sFieldName��ʾ��������ֵ����ƣ�sFieldValue��ʾ����Ĳ���ֵ
	bool SetValue(int iRecNo, const char* sFieldName, const char* sFieldValue);

	//��շ��Ͱ�����
	void ClearSendPackage();

	bool ExchangeMessage();
	bool ExchangeMessageEx(char* byBuff, int lLen);
	
	//�������ݵ�������
    bool SendMessage(SOCKET socket, char* byteMessage,int iLen);

    //����Ӧ����
    int ReceiveMessage(SOCKET socket,char* byRecvMsg,int iLen);

	//��ȡ�������Ӧ�����ݵ�ĳ���ֶε�ֵ��iRecNo��ʾ��ţ�sFieldName��ʾ������ֶ�����
	const char*  GetValue(int iRecNo,const char* sFieldName);

	//�ѻ������ݽ�����һ��һ�����ֶΣ�������
    bool ChangeToStruct(char* byBuf, int lLen);

	//�����õ�������ֵ���֯���������ݱ���
    char* ChangeToStream(bool bCompressFlag);

	//ѹ���������
    char* CompressChangeToStream(char* byBuff);

private:
	//����Ӧ����Ļ�����
	char* m_pBuf;
	int m_nRawSize;
	int m_nBufSize;

	//��������
	string m_strEncryptType;

	//��������
	string m_strEncryptKey;
	string m_strAesGenKey;

	//������Ȩ�ļ�
	bool LoadAuthFunc();

	//���������ļ�
	bool LoadGWConfig();

	//������ջ�����
	char* _GetBuffer(int nBufSize = 2048);

	//�ж��Ƿ�����
	bool _IsLastPack(char* header);

	void socket_init();
	void socket_close( int s );

	//��ȡ�����㷨����Կ
	bool GetEncryptMode();

	//��ȡ��������
	bool GetEncryptKey();

	//����
	string Encrypt(char* password, char* plainText);

	//����
	string decrypt(char* password, char* plainText);

//public:	
	//��������
	CPackData oReqData;
	
	//Ӧ������
	CPackData oRespData;
	
	SOCKET	m_oSocket;

	//��Ȩ���ܺ��б�
    typedef std::map<string/*DictId*/, string/*value*/> AUTH_FUNC;	
	AUTH_FUNC m_oAuthFunc;

	typedef struct GWConfig{
		int iConnectSvr;
		int iTimeout;
		int iQueryTimeOut;
		string oGwSvrIp[5];
		int    iGwSvrPort[5];
		GWConfig()
		{
			iConnectSvr  = 0;
			iTimeout     = 30000;
			iQueryTimeOut= 30000;
			for(int i=0;i<5;i++)
			{
				oGwSvrIp[i] = "-1";
				iGwSvrPort[i] = 0;
			}
		}
	} ;

	//������
	GWConfig m_oGwCfg;
};
}
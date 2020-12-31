/////////////////////////////////////////////////////////////////////////
///@system ��Ž���ϵͳ
///@company �����н�ſƼ����޹�˾
///@file JGtdcFutTraderApi.h
///@brief �����˿ͻ����ڻ�����Ȩ�ӿ�
///@history 
///2018-06-13	ff	�������ļ�
/////////////////////////////////////////////////////////////////////////


#if !defined(JGTDC_FUTTRADER_API)
#define JGTDC_FUTTRADER_API


#if _MSC_VER > 1000
#pragma once 
#endif  // _MSC_VER

#include <string>

#include "JGtdcUserApiStruct.h"

#if defined(__WINDOWS__) || defined(WIN32) || defined(WIN64) || defined(_WINDOWS)
#ifndef LIB_TRADER_API_EXPORT
#define LIB_TRADER_API_EXPORT
#endif
#ifdef LIB_TRADER_API_EXPORT
#define TRADER_API_EXPORT __declspec(dllexport) 
#else
#define TRADER_API_EXPORT __declspec(dllimport) 
#endif
#else /* End winows defines */
#undef  __stdcall
#define __stdcall 
#define TRADER_API_EXPORT 
#endif /* End linux defines */

class CJGtdcFutTraderSpi
{
public:
	///< �ͻ����뽻�׺�̨�ѳɹ����ӵ���
	virtual void OnFrontConnected() { };
	///< �ͻ����뽻�׺�̨���ӶϿ�ʱ����
	virtual void OnFrontDisConnected() { };
	///< ����Ӧ��
	virtual void OnRspError(const std::string& strError){};
	///< ������������Ӧ��
	virtual void OnRspSubscription(CJGtdcRspUserSubData* pRspSubData, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ��û���¼Ӧ��
	virtual void OnRspFutureUserLogin(CJGtdcFutureRspUserLogin* pRspUserLogin, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ��û��ǳ�Ӧ��
	virtual void OnRspFutureUserLogout(CJGtdcFutureRspUserLogout* pRspUserLogout, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ��˵���ѯӦ��
	virtual void OnRspFuturQrySettlement(CJGtdcFutureRspQrySettlement* pRspQrySettlement, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ��˵�ȷ��Ӧ��
	virtual void OnRspFutureConfirmSettle(CJGtdcFutureRspConfirmSettle* pRspConfirmSettle, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ���Լ��ѯӦ��
	virtual void OnRspFutureQryContract(CJGtdcFutureRspQryContract* pRspQryContract, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ�ί���µ�Ӧ��
	virtual void OnRspFutureEntrust(CJGtdcFutureRspEntrust* pRspEntrust, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ�ί�г���Ӧ��
	virtual void OnRspFutureCancel(CJGtdcFutureRspCancel* pRspCancel, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ������������ѯӦ��
	virtual void OnRspFutureQryMax(CJGtdcFutureRspQryMax* pRspQryMax, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ����ױ����ѯӦ��
	virtual void OnRspFutureQryHolder(CJGtdcFutureRspQryHolder* pRspQryHolder, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ��ʽ��ѯӦ��
	virtual void OnRspFutureQryFund(CJGtdcFutureRspQryFund* pRspQryFund, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ��ֲֲ�ѯӦ��
	virtual void OnRspFutureQryHold(CJGtdcFutureRspQryHold* pRspQryHold, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ�����ί�в�ѯӦ��
	virtual void OnRspFutureQryEntrust(CJGtdcFutureRspQryEntrust* pRspQryEntrust, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ��ɳ�����ѯӦ��
	virtual void OnRspFutureQryRevocEnt(CJGtdcFutureRspQryRevocEnt* pRspQryRevocEnt, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ������ɽ���ѯӦ��
	virtual void OnRspFutureQryBusByPos(CJGtdcFutureRspQryBusByPos* pRspQryBusByPos, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };

	///< Ͷ�����ڻ������˺Ų�ѯӦ��
	virtual void OnRspFutureQryBankAccount(CJGtdcFutureRspQryBankAccount* pRspQryBankAccount, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ�����ת��Ӧ��
	virtual void OnRspFutureBankTrans(CJGtdcFutureRspBankTrans* pRspBankTrans, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ�����ת�˲�ѯӦ��
	virtual void OnRspFutureQryBankTrans(CJGtdcFutureRspQryBankTrans* pRspQryBankTrans, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ�����ת�˿�ת�ʽ�Ӧ��
	virtual void OnRspFutureQryBankMaxTrans(CJGtdcFutureRspQryBankMaxTrans* pRspQryBankMaxTrans, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ���ѯ���˻������ʽ�Ӧ��
	virtual void OnRspFutureQryChildBankFund(CJGtdcFutureRspQryChildBankFund* pRspQryChildBankFund, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�����ڻ�ͬ���˻��ʽ���תӦ��
	virtual void OnRspFutureQryInTransferFund(CJGtdcFutureRspInTransferFund* pRspInTransferFund, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };

};


class TRADER_API_EXPORT CJGtdcFutTraderApi
{
public:
	///< ����TraderApi
	static CJGtdcFutTraderApi* CreatetdcTraderApi();
	///< ��ȡ�ӿڰ汾
	static const char* GetVersion(int& nMajorVersion, int& nMinorVersion);
	///< �ͷ�ʵ������
	virtual void Release() = 0;
	///< ��ʼ������
	virtual bool Init() = 0;
	///< �ͷŻ���
	virtual bool Fini() = 0;
	///< ע��ص��ӿ�
	virtual void RegisterCallBack(CJGtdcFutTraderSpi* pSpi) = 0;
	///< ���ӷ����� ������ bdomain ��� false  ���� bdomain ���Ϊ true  
	virtual bool Connect(const char* pszAddress, unsigned short uPort, bool bdomain = false) = 0;
	///< �Ͽ�������
	virtual bool Disconnect() = 0;
	///< ����������SSL������Ĭ�ϲ����� ���ڳ�ʼ��Initǰ���ã�
	virtual bool SetSSLParamer(const char* sz_ca_cert, const char* sz_private_key = nullptr, const char* sz_dh_file = nullptr, const char* sz_us_ca_cert = nullptr, const char* szKeyPwd = nullptr) = 0;
	///< ������������
	virtual int ReqSubscription(CJGtdcReqUserSubData* pReqSubData, int nRequestID) = 0;
	///< �����û�������Ϣ,��½ǰ���ã�Ĭ��ȡ������Ϣ��
	virtual void SetUserMachineInfo(CJGtdcMachineInfo *pUserMachineInfo) = 0;
	///< Ͷ�����ڻ��û�����
	virtual int ReqFutureUserLogin(CJGtdcFutureReqUserLogin* pReqLogin, int nRequestID) = 0;
	///< Ͷ�����ڻ��û��ǳ�
	virtual int ReqFutureUserLogout(CJGtdcFutureReqUserLogout* pReqLogout, int nRequestID) = 0;
	///< Ͷ�����ڻ��˵���ѯ
	virtual int ReqFutureQrySettlement(CJGtdcFutureReqQrySettlement* pQrySettlement, int nRequestID) = 0;
	///< Ͷ�����ڻ��˵�ȷ��
	virtual int ReqFutureReqConfirmSettle(CJGtdcFutureReqConfirmSettle* pReqConfirmSettle, int nRequestID) = 0;
	///< Ͷ�����ڻ���Լ��ѯ
	virtual int ReqFutureQryContract(CJGtdcFutureReqQryContract* pQryContract, int nRequestID) = 0;
	///< Ͷ�����ڻ�ί���µ�
	virtual int ReqFutureReqEntrust(CJGtdcFutureReqEntrust* pReqEntrust, int nItem, int nRequestID) = 0;
	///< Ͷ�����ڻ�ί�г���
	virtual int ReqFutureReqCancel(CJGtdcFutureReqCancel* pReqCancel, int nItem, int nRequestID) = 0;
	///< Ͷ�����ڻ������������ѯ
	virtual int ReqFutureQryMax(CJGtdcFutureReqQryMax* pQryMax, int nRequestID) = 0;
	///< Ͷ�����ڻ����ױ����ѯ
	virtual int ReqFutureQryHolder(CJGtdcFutureReqQryHolder* pQryHolder, int nRequestID) = 0;
	///< Ͷ�����ڻ��ʽ��ѯ
	virtual int ReqFutureQryFund(CJGtdcFutureReqQryFund* pQryFund, int nRequestID) = 0;
	///< Ͷ�����ڻ��ֲֲ�ѯ
	virtual int ReqFutureQryHold(CJGtdcFutureReqQryHold* pQryHold, int nRequestID) = 0;
	///< Ͷ�����ڻ�����ί�в�ѯ
	virtual int ReqFutureQryEntrust(CJGtdcFutureReqQryEntrust* pQryEntrust, int nRequestID) = 0;
	///< Ͷ�����ڻ��ɳ�����ѯ
	virtual int ReqFutureQryRevocEnt(CJGtdcFutureReqQryRevocEnt* pQryRevocEnt, int nRequestID) = 0;
	///< Ͷ�����ڻ������ɽ���ѯ
	virtual int ReqFutureQryBusByPos(CJGtdcFutureReqQryBusByPos* pQryBusByPos, int nRequestID) = 0;

	///< Ͷ�����ڻ������˺Ų�ѯ
	virtual int ReqFutureQryBankAccount(CJGtdcFutureReqQryBankAccount* pReqQryBankAccount, int nRequestID) = 0;
	///< Ͷ�����ڻ�����ת��
	virtual int ReqFutureBankTrans(CJGtdcFutureReqBankTrans* pReqBankTrans, int nRequestID) = 0;
	///< Ͷ�����ڻ�����ת�˲�ѯ
	virtual int ReqFutureQryBankTrans(CJGtdcFutureReqQryBankTrans* pReqQryBankTrans, int nRequestID) = 0;
	///< Ͷ�����ڻ�����ת�˿�ת�ʽ�
	virtual int ReqFutureQryBankMaxTrans(CJGtdcFutureReqQryBankMaxTrans* pReqQryBankMaxTrans, int nRequestID) = 0;
	///< Ͷ�����ڻ���ѯ���˻������ʽ�
	virtual int ReqFutureQryChildBankFund(CJGtdcFutureReqQryChildBankFund* pReqQryChildBankFund, int nRequestID) = 0;
	///< Ͷ�����ڻ�ͬ���˻��ʽ���ת
	virtual int ReqFutureQryInTransferFund(CJGtdcFutureReqInTransferFund* pReqInTransferFund, int nRequestID) = 0;
};


#endif /*  JGTDC_FUTTRADER_API */
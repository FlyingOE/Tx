/////////////////////////////////////////////////////////////////////////
///@system ��Ž���ϵͳ
///@company �����н�ſƼ����޹�˾
///@file JGtdcUserApiStruct.h
///@brief �����˿ͻ��˽ӿ�
///@history 
///2018-02-24	zl	�������ļ�
/////////////////////////////////////////////////////////////////////////


#if !defined(JGTDC_TRADER_API)
#define JGTDC_TRADER_API


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

class CJGtdcTraderSpi
{
public:
	///< �ͻ����뽻�׺�̨�ѳɹ����ӵ���
	virtual void OnFrontConnected() { };
	///< �ͻ����뽻�׺�̨���ӶϿ�ʱ����
	virtual void OnFrontDisConnected() { };
	///< ����Ӧ��
	virtual void OnRspError(const char* pErrMsg){};
	///< ������������Ӧ��
	virtual void OnRspSubscription(CJGtdcRspUserSubData* pRspSubData, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< �û���¼Ӧ��
	virtual void OnRspUserLogin(CJGtdcRspUserLogin* pRspUserLogin, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< �û��ǳ�Ӧ��
	virtual void OnRspUserLogout(CJGtdcRspUserLogout* pRspUserLogout, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< ����¼��Ӧ��
	virtual void OnRspOrderInsert(CJGtdcRspOrderInsert* pRspOrderInsert, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< ��������Ӧ��
	virtual void OnRspOrderCancel(CJGtdcRspOrderCancel* pRspOrderCancel, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ���߿ɳ�����ѯӦ��
	virtual void OnRspQryCancel(CJGtdcRspQryCancel* pRspQryCancel, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ����ί�в�ѯӦ��
	virtual void OnRspQryOrder(CJGtdcRspQryOrder* pRspQryOrder, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ���߳ɽ�����ѯӦ��
	virtual void OnRspQryTrade(CJGtdcRspQryTrade* pRspQryTrade, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ���ֲֲ߳�ѯ
	virtual void OnRspQryHold(CJGtdcRspQryHold* pRspQryHold, CJGtdcRspInfoField* pRspInfo, int nRequestID){ };
	///< Ͷ�����ʽ��ѯ
	virtual void OnRspQryFund(CJGtdcRspQryFund* pRspQryFund, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�������ί������ѯӦ��
	virtual void OnRspQryMax(CJGtdcRspQryMax* pRspQryMax, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ���߽����ѯ
	virtual void OnRspQryDelivery(CJGtdcRspQryDelivery* pRspQryDelivery, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ���߱���֪ͨ
	virtual void OnRtnOrder(CJGtdcRspQryOrder *pOrder,int nItems) { };
	///< Ͷ���߳ɽ�֪ͨ
	virtual void OnRtnTrade(CJGtdcRspQryTrade *pTrade,int nItems) { };


	////////////////////////////////////������ȯר��///////////////////////////////////////////////////////////
	///< Ͷ����������ȯ�ʲ���ѯ
	virtual void OnRspQryAssets(CJGtdcRspQryAssets* pRspQryAssets, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������ȯ����������ѯ
	virtual void OnRspQryMaxLoan(CJGtdcRspQryMaxLoan* pRspQryMaxLoan, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ���߿���ȯ˽������������ѯ
	virtual void OnRspQryReserveCreditStock(CJGtdcRspQryReserveCreditStock *pRspQryReserve, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ����ֱ�ӻ�ȯ
	virtual void OnRspStockBack(CJGtdcRspStockBack* pRspStockBack, CJGtdcRspInfoField* pRspInfo, int nRequestID){};
	///< Ͷ����ֱ�ӻ���
	virtual void OnRspMoneyBack(CJGtdcRspMoneyBack* pRspMoneyBack, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ�������ʸ�ծ״����ѯ
	virtual void OnRspQryFinance(CJGtdcRspQryFinance* pRspQryFinance, CJGtdcRspInfoField* pRspInfo, int nRequestID) {};
	///< Ͷ������ȯ��ծ״����ѯ
	virtual void OnRspQryShortSell(CJGtdcRspQryShortsell* pRspQryShortSell, CJGtdcRspInfoField* pRspInfo, int nRequestID){};
	///< Ͷ���ߵ���Ʒ��ת
	virtual void OnRspMortgageTrans(CJGtdcRspMortgageTrans* pRspMortgageTrans, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ���߱��ȯ��ѯ
	virtual void OnRspQryObject(CJGtdcRspQryObject *pRspQryObject, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ���������˻�����ͨ�˻���Ӧ��ϵ��ѯӦ��
	virtual void OnRspQryAccMatch(CJGtdcRspQryAccMatch *pRspQryAccMatch, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };

	////////////////////////�۹�ͨר�ù��ܺ���//////////////////////////////////////////////////////////////
	///< Ͷ���߸۹�ͨ�ɳ�����ѯ
	virtual void OnRspQryHKCancel(CJGtdcRspQryCancel* pRspQryCancel, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ���߸۹�ͨί�в�ѯ
	virtual void OnRspQryHKOrder(CJGtdcRspQryOrder* pRspQryOrder, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ���߸۹�ͨ�ɽ�����ѯ
	virtual void OnRspQryHKTrade(CJGtdcRspQryTrade* pRspQryTrade, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ���߸۹�ͨ�ֲֲ�ѯ
	virtual void OnRspQryHKHold(CJGtdcRspQryHold* pRspQryHold, CJGtdcRspInfoField* pRspInfo, int nRequestID){ };
	///< Ͷ���߸۹�ͨ�ʽ��ѯ
	virtual void OnRspQryHKFund(CJGtdcRspQryFund* pRspQryFund, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ���߸۹�ͨ���ʲ�ѯ
	virtual void OnRspQryHKExRate(CJGtdcRspQryHKExRate* pRspQryHKExRate, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ���߸۹�ͨ��Ȳ�ѯ
	virtual void OnRspQryHKLimit(CJGtdcRspQryHKLimit* pRspQryHKLimit, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	////////////////////////////////////////////////////////////////////////////////////////////////////////
};


class /*TRADER_API_EXPORT*/ CJGtdcTraderApi
{
public:
	///< ����TraderApi
	static CJGtdcTraderApi* CreatetdcTraderApi();
	///< ��ȡ�ӿڰ汾
	static const char* GetVersion(int& nMajorVersion,int& nMinorVersion);
	///< �ͷ�ʵ������
	virtual void Release() = 0 ;
	///< ��ʼ������
	virtual bool Init() = 0 ;
	///< �ͷŻ���
	virtual bool Fini() = 0 ;
 	///< ע��ص��ӿ�
	virtual void RegisterCallBack(CJGtdcTraderSpi* pSpi) = 0 ;
	///< ���ӷ����� ������ bdomain ��� false  ���� bdomain ���Ϊ true  
	virtual bool Connect(const char* pszAddress,unsigned short uPort,bool bdomain = false ) =  0 ;
	///< �Ͽ�������
	virtual bool Disconnect() = 0 ;
	///< ����������SSL������Ĭ�ϲ����� ���ڳ�ʼ��Initǰ���ã�
	virtual bool SetSSLParamer(const char* sz_ca_cert, const char* sz_private_key = nullptr, const char* sz_dh_file = nullptr, const char* sz_us_ca_cert = nullptr, const char* szKeyPwd = nullptr) = 0;
	///< ��������Ӧ��ʱ��(����Ӧ���Ż����ͳɽ���ί������)
	virtual void OpenOrderSequential(bool bOpen = false) = 0;
	///< ������������
	virtual int ReqSubscription(CJGtdcReqUserSubData* pReqSubData, int nRequestID) = 0;
	///< �����û�������Ϣ,��½ǰ���ã�Ĭ��ȡ������Ϣ��
	virtual void SetUserMachineInfo(CJGtdcMachineInfo *pUserMachineInfo) = 0;
	///< �û�����(��ͨ�˻� bCredit ��� false  �����˻� bCredit ��� true )
	virtual int ReqUserLogin(CJGtdcReqUserLogin* pReqLogin, bool bCredit, int nRequestID) = 0;
	///< �û��˻���Ϣ
	// ��Χ�����ڴ�ռ� �ռ䲻���򷵻� -2  �޴��˺Ż��߿ͻ��ſ�ֵ ����-1 �ɹ����� 0 
	// pszClientId �ͻ��� account �˻�������Ϣ pHolderInfo �ɶ���Ϣ nHolderInfo �ɶ����� 
	virtual int GetUserAccount(const char* pszClientId,CJGtdcUserAccountInfo& account, CJGtdcUserHolderInfo* pHolderInfo, int& nHolderItem) = 0 ;
	///< �û��ǳ�
	virtual int ReqUserLogout(CJGtdcReqUserLogout* pReqLogout, int nRequestID) = 0;
	///< ����¼������
	virtual int ReqOrderInsert(CJGtdcReqOrderInsert* pReqOrderInsert,int nItem, int nRequestID) = 0;
	///< ������������
	virtual int ReqOrderCancel(CJGtdcReqOrderCancel* pReqOrderCancel,int nItem, int nRequestID) = 0;
	///< Ͷ���߿ɳ�����ѯ
	virtual int ReqQryCancel(CJGtdcReqQryCancel* pQryCancel, int nRequestID) = 0;
	///< Ͷ����ί�в�ѯ
	virtual int ReqQryOrder(CJGtdcReqQryOrder* pQryOrder, int nRequestID) = 0;
	///< Ͷ���߳ɽ�����ѯ
	virtual int ReqQryTrade(CJGtdcReqQryTrade* pQryTrade, int nRequestID) = 0;
	///< Ͷ���ֲֲ߳�ѯ
	virtual int ReqQryHold(CJGtdcReqQryHold* pQryHold, int nRequestID) = 0;
	///< Ͷ�����ʽ��ѯ
	virtual int ReqQryFund(CJGtdcReqQryFund* pReqFund, int nRequestID) = 0;
	///< Ͷ�������ί������ѯ
	virtual int ReqQryMax(CJGtdcReqQryMax* pReqMax,int nRequestID) = 0 ;
	///< Ͷ���߽����ѯ
	virtual int ReqQryDelivery(CJGtdcReqQryDelivery* pReqQryDelivery, int nRequestID) = 0;
	
	////////////////////////������ȯר�ù��ܺ���///////////////////////////////////////////////////////////
	///< Ͷ���������ʲ���ѯ
	virtual int ReqQryAssets(CJGtdcReqQryAssets *pQryAssets, int nRequestID) = 0;
	///< Ͷ���߿���ȯ����������ѯ
	virtual int ReqQryMaxLoan(CJGtdcReqQryMaxLoan *pQryMaxLoan, int nRequestID) = 0;
	///< Ͷ���߿���ȯ˽������������ѯ
	virtual int ReqQryReserveCreditStock(CJGtdcReqQryReserveCreditStock *pQryReserve, int nRequestID) = 0;
	///< Ͷ����ֱ�ӻ�ȯ
	virtual int ReqStockBack(CJGtdcReqStockBack *pReqStockBack, int nRequestID) = 0;
	///< Ͷ����ֱ�ӻ���
	virtual int ReqMoneyBack(CJGtdcReqMoneyBack *pReqMoneyBack, int nRequestID) = 0;
	///< Ͷ�������ʸ�ծ״����ѯ
	virtual int ReqQryFinance(CJGtdcReqQryFinance* pQryFinance, int nRequestID) = 0;
	///< Ͷ������ȯ��ծ״����ѯ
	virtual int ReqQryShortSell(CJGtdcReqQryShortsell* pQryShortSell, int nRequestID) = 0;
	///< Ͷ���ߵ���Ʒ��ת
	virtual int ReqMortgageTrans(CJGtdcReqMortgageTrans* pReqMortgageTrans, int nRequestID) = 0;
	///< Ͷ���߱��ȯ��ѯ
	virtual int ReqQryObject(CJGtdcReqQryObject *pReqQryObject, int nRequestID) = 0;
	///< Ͷ���������˻�����ͨ�˻���Ӧ��ϵ��ѯ
	virtual int ReqQryAccMatch(CJGtdcReqQryAccMatch *pReqQryAccMatch, int nRequestID) = 0;
	////////////////////////////////////////////////////////////////////////////////////////////////////////

	////////////////////////�۹�ͨר�ù��ܺ���//////////////////////////////////////////////////////////////
	///< Ͷ���߸۹�ͨ�ɳ�����ѯ
	virtual int ReqQryHKCancel(CJGtdcReqQryCancel* pQryCancel, int nRequestID) = 0;
	///< Ͷ���߸۹�ͨί�в�ѯ
	virtual int ReqQryHKOrder(CJGtdcReqQryOrder* pQryOrder, int nRequestID) = 0;
	///< Ͷ���߸۹�ͨ�ɽ�����ѯ
	virtual int ReqQryHKTrade(CJGtdcReqQryTrade* pQryTrade, int nRequestID) = 0;
	///< Ͷ���߸۹�ͨ�ֲֲ�ѯ
	virtual int ReqQryHKHold(CJGtdcReqQryHold* pQryHold, int nRequestID) = 0;
	///< Ͷ���߸۹�ͨ�ʽ��ѯ
	virtual int ReqQryHKFund(CJGtdcReqQryFund* pReqFund, int nRequestID) = 0;
	///< Ͷ���߸۹�ͨ���ʲ�ѯ
	virtual int ReqQryHKExRate(CJGtdcReqQryHKExRate* pReqQryHKExRate, int nRequestID) = 0;
	///< Ͷ���߸۹�ͨ��Ȳ�ѯ
	virtual int ReqQryHKLimit(CJGtdcReqQryHKLimit* pReqQryHKLimit, int nRequestID) = 0;
	////////////////////////////////////////////////////////////////////////////////////////////////////////
};


#endif /*  JGTDC_TRADER_API */
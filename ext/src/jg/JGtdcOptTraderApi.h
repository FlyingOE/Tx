/////////////////////////////////////////////////////////////////////////
///@system ��Ž���ϵͳ
///@company �����н�ſƼ����޹�˾
///@file JGtdcFutOptTraderApi.h
///@brief �����˿ͻ�����Ȩ�ӿ�
///@history 
///2018-06-13	ff	�������ļ�
/////////////////////////////////////////////////////////////////////////


#if !defined(JGTDC_FUTOPTTRADER_API)
#define JGTDC_FUTOPTTRADER_API


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

class CJGtdcOptTraderSpi
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
	///< �û���¼Ӧ��
	virtual void OnRspOptionUserLogin(CJGtdcRspUserLogin* pRspUserLogin, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< �û��ǳ�Ӧ��
	virtual void OnRspOptionUserLogout(CJGtdcRspUserLogout* pRspUserLogout, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ��Լ��ѯӦ��
	virtual void OnRspOptionQryContract(CJGtdcOptionRspQryContract* pRspQryContract, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩί���µ�Ӧ��
	virtual void OnRspOptionEntrust(CJGtdcOptionRspEntrust* pRspEntrust, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩί�г���Ӧ��
	virtual void OnRspOptionCancel(CJGtdcOptionRspCancel* pRspCancel, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ�����������ѯӦ��
	virtual void OnRspOptionQryMax(CJGtdcOptionRspQryMax* pRspQryMax, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ����֤ȯ��תӦ��
	virtual void OnRspOptionCoveredTrans(CJGtdcOptionRspCoveredTrans* pRspCoveredTrans, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ���ҿɻ�ת������ѯӦ��
	virtual void OnRspOptionQryCoveredMax(CJGtdcOptionRspQryCoveredMax* pRspQryCoveredMax, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ�ʽ��ѯӦ��
	virtual void OnRspOptionQryFund(CJGtdcOptionRspQryFund* pRspQryFund, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ�ֲֲ�ѯӦ��
	virtual void OnRspOptionQryHold(CJGtdcOptionRspQryHold* pRspQryQryHold, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩί�в�ѯӦ��
	virtual void OnRspOptionQryEntrust(CJGtdcOptionRspQryEntrust* pRspQryEntrust, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ�ɳ�����ѯӦ��
	virtual void OnRspOptionQryRevocEnt(CJGtdcOptionRspQryRevocEnt* pRspQryRevocEnt, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ�����ɽ���ѯӦ��
	virtual void OnRspOptionQryBusByPos(CJGtdcOptionRspQryBusByPos* pRspQryBusByPos, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ���ҳֲֲ�ѯӦ��
	virtual void OnRspOptionQryCoveredHold(CJGtdcOptionRspQryCoveredHold* pRspQryCoveredHold, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ��Ȩָ�ɲ�ѯӦ��
	virtual void OnRspOptionQryExerciseAssign(CJGtdcOptionRspQryExerciseAssign* pRspQryExerciseAssign, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ���ҳֲֲ����ѯӦ��
	virtual void OnRspOptionQryLackCoveredStock(CJGtdcOptionRspQryLackCoveredStock* pRspQryLackCoveredStock, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ��ȡ�ʽ��ѯӦ��
	virtual void OnRspOptionQryFetchFund(CJGtdcOptionRspQryFetchFund* pRspQryFetchFund, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ��ʷί�в�ѯӦ��
	virtual void OnRspOptionQryHisEntrust(CJGtdcOptionRspQryHisEntrust* pRspQryHisEntrust, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ��ʷ�ɽ���ѯӦ��
	virtual void OnRspOptionQryHisBusiness(CJGtdcOptionRspQryHisBusiness* pRspQryHisBusiness, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ��ʷ��Ȩָ�ɲ�ѯӦ��
	virtual void OnRspOptionQryHisExerciseAssign(CJGtdcOptionRspQryHisExerciseAssign* pRspQryHisExerciseAssign, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ�����Զ���ȨӦ��
	virtual void OnRspOptionAddAutoExercise(CJGtdcOptionRspAddAutoExercise* pRspAddAutoExercise, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ�޸��Զ���ȨӦ��
	virtual void OnRspOptionModAutoExercise(CJGtdcOptionRspModAutoExercise* pRspModAutoExercise, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩɾ���Զ���ȨӦ��
	virtual void OnRspOptionDelAutoExercise(CJGtdcOptionRspDelAutoExercise* pRspDelAutoExercise, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ�Զ���Ȩ��ѯӦ��
	virtual void OnRspOptionQryAutoExercise(CJGtdcOptionRspQryAutoExercise* pRspQryAutoExercise, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ���ҿɻ�ת��ѯӦ��
	virtual void OnRspOptionQryCovered(CJGtdcOptionRspQryCovered* pRspQryCovered, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ���ճֲֲ�ѯӦ��
	virtual void OnRspOptionQryHisHold(CJGtdcOptionRspQryHisHold* pRspQryHisHold, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ���㵥��ѯӦ��
	virtual void OnRspOptionQrySettlement(CJGtdcOptionRspQrySettlement* pRspQrySettlement, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ�����ѯӦ��
	virtual void OnRspOptionQryDelivery(CJGtdcOptionRspQryDelivery* pRspQryDelivery, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ�����ʽ�Ӧ��
	virtual void OnRspOptionTransferFund(CJGtdcOptionRspTransferFund* pRspTransferFund, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ������ϲ��ί��Ӧ��
	virtual void OnRspOptionShareCombSplitEntrust(CJGtdcOptionRspShareCombSplitEntrust* pRspShareCombSplitEntrust, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ������ϳֲ���ϸ��ѯӦ��
	virtual void OnRspOptionQryShareCombSplitHold(CJGtdcOptionRspQryShareCombSplitHold* pQryShareCombSplitHold, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ���ɿ���Ͽɲ��������ѯӦ��
	virtual void OnRspOptionQryShareCombSplitLots(CJGtdcOptionRspQryShareCombSplitLots* pRspQryShareCombSplitLots, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ���ɿͻ��ʽ�䶯��ˮ��ʷ��ѯӦ��
	virtual void OnRspOptionQryShareUserHisFundChange(CJGtdcOptionRspQryShareUserHisFundChange* pRspQryShareUserHisFundChange, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ���㵥ȷ��Ӧ��
	virtual void OnRspOptionSettlementConfrim(CJGtdcOptionRspSettlementConfrim* pRspSettlementConfrim, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ����ί��֪ͨ
	virtual void OnRtnOptionOrder(CJGtdcOptionRspQryEntrust* pRspQryEntrust, int nItems) { };
	///< Ͷ���߳ɽ�֪ͨ
	virtual void OnRtnOptionTrade(CJGtdcOptionRspQryBusByPos* pRspQryBusByPos, int nItems) { };


	///< Ͷ������Ȩ�����˺Ų�ѯӦ��
	virtual void OnRspOptionQryBankAccount(CJGtdcOptionRspQryBankAccount* pRspQryBankAccount, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ����ת��Ӧ��
	virtual void OnRspOptionBankTrans(CJGtdcOptionRspBankTrans* pRspBankTrans, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ����ת�˲�ѯӦ��
	virtual void OnRspOptionQryBankTrans(CJGtdcOptionRspQryBankTrans* pRspQryBankTrans, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ����ת�˿�ת�ʽ�Ӧ��
	virtual void OnRspOptionQryBankMaxTrans(CJGtdcOptionRspQryBankMaxTrans* pRspQryBankMaxTrans, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩ��ѯ���˻������ʽ�Ӧ��
	virtual void OnRspOptionQryChildBankFund(CJGtdcOptionRspQryChildBankFund* pRspQryChildBankFund, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
	///< Ͷ������Ȩͬ���˻��ʽ���תӦ��
	virtual void OnRspOptionQryInTransferFund(CJGtdcOptionRspInTransferFund* pRspInTransferFund, CJGtdcRspInfoField* pRspInfo, int nRequestID) { };
};


class TRADER_API_EXPORT CJGtdcOptTraderApi
{
public:
	///< ����TraderApi
	static CJGtdcOptTraderApi* CreatetdcTraderApi();
	///< ��ȡ�ӿڰ汾
	static const char* GetVersion(int& nMajorVersion, int& nMinorVersion);
	///< �ͷ�ʵ������
	virtual void Release() = 0;
	///< ��ʼ������
	virtual bool Init() = 0;
	///< �ͷŻ���
	virtual bool Fini() = 0;
	///< ע��ص��ӿ�
	virtual void RegisterCallBack(CJGtdcOptTraderSpi* pSpi) = 0;
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
	///< �û�����
	virtual int ReqOptionUserLogin(CJGtdcReqUserLogin* pReqLogin, int nRequestID) = 0;
	///< �û��˻���Ϣ
	// ��Χ�����ڴ�ռ� �ռ䲻���򷵻� -2  �޴��˺Ż��߿ͻ��ſ�ֵ ����-1 �ɹ����� 0 
	// pszClientId �ͻ��� account �˻�������Ϣ pHolderInfo �ɶ���Ϣ nHolderInfo �ɶ����� 
	virtual int GetUserAccount(const char* pszClientId, CJGtdcUserAccountInfo& account, CJGtdcUserHolderInfo* pHolderInfo, int& nHolderItem) = 0;
	///< �û��ǳ�
	virtual int ReqOptionUserLogout(CJGtdcReqUserLogout* pReqLogout, int nRequestID) = 0;
	///< Ͷ������Ȩ��Լ��ѯ
	virtual int ReqOptionQryContract(CJGtdcOptionReqQryContract* pQryContract, int nRequestID) = 0;
	///< Ͷ������Ȩί���µ�
	virtual int ReqOptionEntrust(CJGtdcOptionReqEntrust* pReqEntrust, int nItem, int nRequestID) = 0;
	///< Ͷ������Ȩί�г���
	virtual int ReqOptionCancel(CJGtdcOptionReqCancel* pReqCancel, int nItem, int nRequestID) = 0;
	///< Ͷ������Ȩ�����������ѯ
	virtual int ReqOptionQryMax(CJGtdcOptionReqQryMax* pQryMax, int nRequestID) = 0;
	///< Ͷ������Ȩ����֤ȯ��ת
	virtual int ReqOptionCoveredTrans(CJGtdcOptionReqCoveredTrans* pReqCoveredTrans, int nRequestID) = 0;
	///< Ͷ������Ȩ���ҿɻ�ת������ѯ
	virtual int ReqOptionQryCoveredMax(CJGtdcOptionReqQryCoveredMax* pQryCoveredMax, int nRequestID) = 0;
	///< Ͷ������Ȩ�ʽ��ѯ
	virtual int ReqOptionQryFund(CJGtdcOptionReqQryFund* pQryFund, int nRequestID) = 0;
	///< Ͷ������Ȩ�ֲֲ�ѯ
	virtual int ReqOptionQryHold(CJGtdcOptionReqQryHold* pQryQryHold, int nRequestID) = 0;
	///< Ͷ������Ȩί�в�ѯ
	virtual int ReqOptionQryEntrust(CJGtdcOptionReqQryEntrust* pQryEntrust, int nRequestID) = 0;
	///< Ͷ������Ȩ�ɳ�����ѯ
	virtual int ReqOptionQryRevocEnt(CJGtdcOptionReqQryRevocEnt* pQryRevocEnt, int nRequestID) = 0;
	///< Ͷ������Ȩ�����ɽ���ѯ
	virtual int ReqOptionQryBusByPos(CJGtdcOptionReqQryBusByPos* pQryBusByPos, int nRequestID) = 0;
	///< Ͷ������Ȩ���ҳֲֲ�ѯ
	virtual int ReqOptionQryCoveredHold(CJGtdcOptionReqQryCoveredHold* pQryCoveredHold, int nRequestID) = 0;
	///< Ͷ������Ȩ��Ȩָ�ɲ�ѯ
	virtual int ReqOptionQryExerciseAssign(CJGtdcOptionReqQryExerciseAssign* pQryExerciseAssign, int nRequestID) = 0;
	///< Ͷ������Ȩ���ҳֲֲ����ѯ
	virtual int ReqOptionQryLackCoveredStock(CJGtdcOptionReqQryLackCoveredStock* pQryLackCoveredStock, int nRequestID) = 0;
	///< Ͷ������Ȩ��ȡ�ʽ��ѯ
	virtual int ReqOptionQryFetchFund(CJGtdcOptionReqQryFetchFund* pQryFetchFund, int nRequestID) = 0;
	///< Ͷ������Ȩ��ʷί�в�ѯ
	virtual int ReqOptionQryHisEntrust(CJGtdcOptionReqQryHisEntrust* pQryHisEntrust, int nRequestID) = 0;
	///< Ͷ������Ȩ��ʷ�ɽ���ѯ
	virtual int ReqOptionQryHisBusiness(CJGtdcOptionReqQryHisBusiness* pQryHisBusiness, int nRequestID) = 0;
	///< Ͷ������Ȩ��ʷ��Ȩָ�ɲ�ѯ
	virtual int ReqOptionQryHisExerciseAssign(CJGtdcOptionReqQryHisExerciseAssign* pQryHisExerciseAssign, int nRequestID) = 0;
	///< Ͷ������Ȩ�����Զ���Ȩ
	virtual int ReqOptionAddAutoExercise(CJGtdcOptionReqAddAutoExercise* pAddAutoExercise, int nRequestID) = 0;
	///< Ͷ������Ȩ�޸��Զ���Ȩ
	virtual int ReqOptionModAutoExercise(CJGtdcOptionReqModAutoExercise* pModAutoExercise, int nRequestID) = 0;
	///< Ͷ������Ȩɾ���Զ���Ȩ
	virtual int ReqOptionDelAutoExercise(CJGtdcOptionReqDelAutoExercise* pDelAutoExercise, int nRequestID) = 0;
	///< Ͷ������Ȩ�Զ���Ȩ��ѯ
	virtual int ReqOptionQryAutoExercise(CJGtdcOptionReqQryAutoExercise* pQryAutoExercise, int nRequestID) = 0;
	///< Ͷ������Ȩ���ҿɻ�ת��ѯ
	virtual int ReqOptionQryCovered(CJGtdcOptionReqQryCovered* pQryCovered, int nRequestID) = 0;
	///< Ͷ������Ȩ���ճֲֲ�ѯ
	virtual int ReqOptionQryHisHold(CJGtdcOptionReqQryHisHold* pQryHisHold, int nRequestID) = 0;
	///< Ͷ������Ȩ���㵥��ѯ
	virtual int ReqOptionQrySettlement(CJGtdcOptionReqQrySettlement* pQrySettlement, int nRequestID) = 0;
	///< Ͷ������Ȩ�����ѯ
	virtual int ReqOptionQryDelivery(CJGtdcOptionReqQryDelivery* pQryDelivery, int nRequestID) = 0;
	///< Ͷ������Ȩ�����ʽ�
	virtual int ReqOptionTransferFund(CJGtdcOptionReqTransferFund* pTransferFund, int nRequestID) = 0;
	///< Ͷ������Ȩ������ϲ��ί��
	virtual int ReqOptionShareCombSplitEntrust(CJGtdcOptionReqShareCombSplitEntrust* pShareCombSplitEntrust, int nRequestID) = 0;
	///< Ͷ������Ȩ������ϳֲ���ϸ��ѯ
	virtual int ReqOptionQryShareCombSplitHold(CJGtdcOptionReqQryShareCombSplitHold* pQryShareCombSplitHold, int nRequestID) = 0;
	///< Ͷ������Ȩ���ɿ���Ͽɲ��������ѯ
	virtual int ReqOptionQryShareCombSplitLots(CJGtdcOptionReqQryShareCombSplitLots* pQryShareCombSplitLots, int nRequestID) = 0;
	///< Ͷ������Ȩ���ɿͻ��ʽ�䶯��ˮ��ʷ��ѯ
	virtual int ReqOptionQryShareUserHisFundChange(CJGtdcOptionReqQryShareUserHisFundChange* pQryShareUserHisFundChange, int nRequestID) = 0;
	///< Ͷ������Ȩ���㵥ȷ��
	virtual int ReqOptionSettlementConfrim(CJGtdcOptionReqSettlementConfrim* pSettlementConfrim, int nRequestID) = 0;

	///< Ͷ������Ȩ�����˺Ų�ѯ
	virtual int ReqOptionQryBankAccount(CJGtdcOptionReqQryBankAccount* pReqQryBankAccount, int nRequestID) = 0;
	///< Ͷ������Ȩ����ת��
	virtual int ReqOptionBankTrans(CJGtdcOptionReqBankTrans* pReqBankTrans, int nRequestID) = 0;
	///< Ͷ������Ȩ����ת�˲�ѯ
	virtual int ReqOptionQryBankTrans(CJGtdcOptionReqQryBankTrans* pReqQryBankTrans, int nRequestID) = 0;
	///< Ͷ������Ȩ����ת�˿�ת�ʽ�
	virtual int ReqOptionQryBankMaxTrans(CJGtdcOptionReqQryBankMaxTrans* pReqQryBankMaxTrans, int nRequestID) = 0;
	///< Ͷ������Ȩ��ѯ���˻������ʽ�
	virtual int ReqOptionQryChildBankFund(CJGtdcOptionReqQryChildBankFund* pReqQryChildBankFund, int nRequestID) = 0;
	///< Ͷ������Ȩͬ���˻��ʽ���ת
	virtual int ReqOptionQryInTransferFund(CJGtdcOptionReqInTransferFund* pReqInTransferFund, int nRequestID) = 0;
};


#endif /*  JGTDC_FUTOPTTRADER_API */
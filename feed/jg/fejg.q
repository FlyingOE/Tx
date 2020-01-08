.module.fejg:2019.12.26;

txload "core/febase";
txload "feed/jg/jgbase";

`initjgt`freejgt`jgtrun`userLoginT`userLogoutT`getUserAccountT`orderInsert`orderCancel`qryCancel`qryOrder`qryTrade`qryHold`qryFund`qryMax {x set `extfejg 2:(x;y);}' 2 1 1,11#2;

.ctrl.O:$[`ft=.conf.feedtype;`O1;`O];

\d .enum
`JG_TDC_LOGINTYPE_FundAccount`JG_TDC_LOGINTYPE_ClientID`JG_TDC_LOGINTYPE_StockAccount`JG_TDC_LOGINTYPE_OnlyQuery set' "0123"; /TJGtdcLoginType(��½����):0(�ʽ��˺�)1(�ͻ���)2(�ɶ�����)3(ֻ����ѯ)
`JG_TDC_EXCHANGETYPE_SZA`JG_TDC_EXCHANGETYPE_SHA`JG_TDC_EXCHANGETYPE_SZB`JG_TDC_EXCHANGETYPE_SHB`JG_TDC_EXCHANGETYPE_TZA`JG_TDC_EXCHANGETYPE_TZB`JG_TDC_EXCHANGETYPE_OPTSZA`JG_TDC_EXCHANGETYPE_OPTSHA`JG_TDC_EXCHANGETYPE_SHHK`JG_TDC_EXCHANGETYPE_SZHK`JG_TDC_EXCHANGETYPE_CFFEX`JG_TDC_EXCHANGETYPE_SHFE`JG_TDC_EXCHANGETYPE_CZCE`JG_TDC_EXCHANGETYPE_DCE  set' `int$(1+til 6),(11+til 4),100+til 4; /TJGtdcExchangeType(�г�����):1(��A)2(��A)3(��B)4(��B)5(��תA)6(��תB)11(������Ȩ��A)12(������Ȩ��A)13(����ͨ)14(���ͨ)100(�����ڻ�)101(�Ϻ���Ʒ�ڻ�)102(֣����Ʒ�ڻ�)103(������Ʒ�ڻ�)
`JG_TDC_SUBTYPE_Subscription`JG_TDC_SUBTYPE_UnSubscription set' '01'; /TJGtdcSubType cSubType:0(��������)1(ȡ����������)
`JG_TDC_TRADETYPE_Buy`JG_TDC_TRADETYPE_Sell`JG_TDC_TRADETYPE_ETFApply`JG_TDC_TRADETYPE_ETFRedeem`JG_TDC_TRADETYPE_ETFTranApply`JG_TDC_TRADETYPE_ETFTranRedeem`JG_TDC_TRADETYPE_StructuredFundMarge`JG_TDC_TRADETYPE_StructuredFundSplit`JG_TDC_TRADETYPE_LOFApply`JG_TDC_TRADETYPE_LOFRedeem`JG_TDC_TRADETYPE_LoanBuy`JG_TDC_TRADETYPE_LoanSell`JG_TDC_TRADETYPE_EnBuyBack`JG_TDC_TRADETYPE_EnSellBack`JG_TDC_TRADETYPE_StockBack`JG_TDC_TRADETYPE_PayBack`JG_TDC_TRADETYPE_MortgageIn`JG_TDC_TRADETYPE_MortgageOut`JG_TDC_TRADETYPE_CallExercise`JG_TDC_TRADETYPE_PutExercise`JG_TDC_TRADETYPE_StockLock`JG_TDC_TRADETYPE_StockUnLock`JG_TDC_TRADETYPE_AutoCallExercise`JG_TDC_TRADETYPE_AutoPutExercise`JG_TDC_TRADETYPE_ETFCrossApply`JG_TDC_TRADETYPE_ETFCrossRedeem`JG_TDC_TRADETYPE_MoneyFundApply`JG_TDC_TRADETYPE_MoneyFundRedeem`JG_TDC_TRADETYPE_NewStockApply`JG_TDC_TRADETYPE_ValueAllotApply set' `int$(1+til 16),(21+til 2),(31+til 6),(50+til 4),60+til 2; /TJGtdcTradeType(��������):1(��ͨ����)2(��ͨ����)3(ETF�깺)4(ETF���)5(����ETF�깺)6(����ETF���)7(�ּ�����ϲ�)8(�ּ�������)9(LOF�깺)10(LOF���)11(��������)12(��ȯ����)13(��ȯ��ȯ)14(��ȯ����)15(ֱ�ӻ�ȯ)16(ֱ�ӻ���)21(����Ʒ����)22(����Ʒ����)31(�Ϲ���Ȩ)32(�Ϲ���Ȩ)33(֤ȯ����)34(֤ȯ����)35(�Ϲ��Զ���Ȩ)36(�Ϲ��Զ���Ȩ)50(�羳ETF�깺)51(�羳ETF���)52(���һ����깺)53(���һ������)60(�¹��깺)61(�����깺)
`JG_TDC_PRICETYPE_Limit`JG_TDC_PRICETYPE_OtherBest`JG_TDC_PRICETYPE_Best`JG_TDC_PRICETYPE_Timely`JG_TDC_PRICETYPE_BestOrCancel`JG_TDC_PRICETYPE_FillOrCancel`JG_TDC_PRICETYPE_BestOrLimit`JG_TDC_PRICETYPE_MarketOrLimit`JG_TDC_PRICETYPE_FillOrLimit`JG_TDC_PRICETYPE_CPLimit`JG_TDC_PRICETYPE_EPLimit`JG_TDC_PRICETYPE_ZSLimit`JG_TDC_PRICETYPE_AfterMarketFix set' `int$1+til 13; /TJGtdcPriceType(�۸�����):1(�޼�)2(�Է����ż۸�)3(�������ż۸�)4(��ʱ�ɽ�ʣ�೷��)5(�����嵵ʣ�೷��)6(ȫ��ɽ�����)7(�����嵵ʣ��ת�޼�)8(�м�ʣ��ת�޼�)9(ȫ�ʱ�޼�)10(�����޼�)11(��ǿ�޼�)12(����޼�)13(�̺󶨼�)
`JG_TDC_QUERYMODE_All`JG_TDC_QUERYMODE_ByFundAccount`JG_TDC_QUERYMODE_ByExchange`JG_TDC_QUERYMODE_ByCode`JG_TDC_QUERYMODE_ByEntrustNo`JG_TDC_QUERYMODE_ByMoneyType`JG_TDC_QUERYMODE_ByDebitStatus`JG_TDC_QUERYMODE_ByOptionNumber`JG_TDC_QUERYMODE_ByOptionType`JG_TDC_QUERYMODE_ByOptionHoldType`JG_TDC_QUERYMODE_ByComboID`JG_TDC_QUERYMODE_ByBankCode`JG_TDC_QUERYMODE_ByServerType`JG_TDC_QUERYMODE_BySubServerType`JG_TDC_QUERYMODE_ByExerciseStrategyType`JG_TDC_QUERYMODE_ByTerminalType`JG_TDC_QUERYMODE_BySubTerminalType`JG_TDC_QUERYMODE_ByIndexEntrustNo set' `int$til 18; /TJGtdcQueryMode(��ѯģʽ):0(��ѯȫ��)1(���ʽ��˺Ų�ѯ)2(���г���ѯ)3(��֤ȯ������Լ�����ѯ)4(��ί�к�ͬ�Ų�ѯ)5(�����ֲ�ѯ)6(����ծ��״��ѯ)7(����Լ�����ѯ)8(����Ȩ���Ͳ�ѯ)9(����Ȩ�ֲ�����ѯ)10(�����ID��ѯ)11(�����д����ѯ)12(�����������Ͳ�ѯ)13(�������������Ͳ�ѯ)14(����Ȩ�������Ͳ�ѯ)15(���ն����Ͳ�ѯ)16(���ն������Ͳ�ѯ)17(��������ѯ)
`JG_TDC_QUERYDIRECTION_Inverted`JG_TDC_QUERYDIRECTION_Sequence set' '01'; /TJGtdcQueryDirection(��ѯ����):0(����<����,��ѯ�������Ϣ>)1(˳��<��ǰ��,��ѯ�������Ϣ>)
`JG_TDC_MONEYTYPE_RMB`JG_TDC_MONEYTYPE_HKD`JG_TDC_MONEYTYPE_USD set' '012'; /TJGtdcMoneyType(����):0(�����)1(�۱�)2(��Ԫ)
`JG_TDC_ACCOUNTRIGHTS_Credit`JG_TDC_ACCOUNTRIGHTS_Normal`JG_TDC_ACCOUNTRIGHTS_Future`JG_TDC_ACCOUNTRIGHTS_Option set' 0x01020408; /TJGtdcAccountRights(�˺�Ȩ��<��λ>)01(�����˺�)02(��ͨ�˺�)04(�ڻ��˺�)08(��Ȩ�˺�)
`JG_TDC_ENTRUSTSTATUS_NotReport`JG_TDC_ENTRUSTSTATUS_Reporting`JG_TDC_ENTRUSTSTATUS_Reported`JG_TDC_ENTRUSTSTATUS_Canceling`JG_TDC_ENTRUSTSTATUS_PartFilledCanceling`JG_TDC_ENTRUSTSTATUS_PartFilledCanceled`JG_TDC_ENTRUSTSTATUS_Canceled`JG_TDC_ENTRUSTSTATUS_PartFilled`JG_TDC_ENTRUSTSTATUS_AllFilled`JG_TDC_ENTRUSTSTATUS_Invalid`JG_TDC_ENTRUSTSTATUS_Queueing`JG_TDC_ENTRUSTSTATUS_Rejected set' "0123456789ab"; /TJGtdcEntrustStatus(ί��״̬):0(δ��)1(����)2(�ѱ�)3(�ѱ�����)4(���ɴ���)5(����)6(�ѳ�)7(����)8(�ѳ�)9(�ϵ�)a(����)b(���ھܾ�)
`JG_TDC_BUSINESSSTATUS_Filled`JG_TDC_BUSINESSSTATUS_Canceled`JG_TDC_BUSINESSSTATUS_Invalid set' "012"; /TJGtdcBusinessStatus(�ɽ�״̬):0(��ͨ�ɽ�)1(�����ɽ�)2(�ϵ��ɽ�)
`JG_TDC_MAINFLAG_Second`JG_TDC_MAINFLAG_First set' "01"; /TJGtdcMainFlag(�ɶ�������־):0(���˺�)1(���˺�)

jgtrdtyp:.enum[(`BUY`OPEN;`BUY`CLOSE;`SELL`CLOSE;`SELL`OPEN)]!.enum`JG_TDC_TRADETYPE_Buy`JG_TDC_TRADETYPE_Buy`JG_TDC_TRADETYPE_Sell`JG_TDC_TRADETYPE_Sell;
JGOrderKey:`BranchNo`ClientID`FundAccount`ExchangeType`StockAccount`SeatNo`StockCode`StockName`PositionStr`EntrustNo`MoneyType`EntrustStatus`TradeType`PriceType`EntrustDate`EntrustTime`OrderVolume`OrderPrice`BusinessVolume`BusinessPrice`CancelVolume`BusinessBalance`ServiceType;
JGTradeKey:`BranchNo`ClientID`FundAccount`ExchangeType`StockAccount`SeatNo`StockCode`StockName`PositionStr`EntrustNo`MoneyType`BusinessStatus`TradeType`PriceType`BusinessDate`BusinessTime`OrderVolume`OrderPrice`BusinessVolume`BusinessPrice`CancelVolume`BusinessBalance;
jgstatus:.enum[`JG_TDC_ENTRUSTSTATUS_NotReport`JG_TDC_ENTRUSTSTATUS_Reporting`JG_TDC_ENTRUSTSTATUS_Reported`JG_TDC_ENTRUSTSTATUS_Canceling`JG_TDC_ENTRUSTSTATUS_PartFilledCanceling`JG_TDC_ENTRUSTSTATUS_PartFilledCanceled`JG_TDC_ENTRUSTSTATUS_Canceled`JG_TDC_ENTRUSTSTATUS_PartFilled`JG_TDC_ENTRUSTSTATUS_AllFilled`JG_TDC_ENTRUSTSTATUS_Invalid`JG_TDC_ENTRUSTSTATUS_Queueing`JG_TDC_ENTRUSTSTATUS_Rejected]!.enum[`PENDING_NEW`PENDING_NEW`NEW`PENDING_CANCEL`PENDING_CANCEL`CANCELED`CANCELED`PARTIALLY_FILLED`FILLED`REJECTED`PENDING_NEW`REJECTED];
jgbstatus:.enum[`JG_TDC_BUSINESSSTATUS_Filled`JG_TDC_BUSINESSSTATUS_Canceled`JG_TDC_BUSINESSSTATUS_Invalid]:.enum[`FILLED`CANCELED`REJECTED];
\d .
.enum.jgexT:mirror .enum.exjgT:.enum[`JG_TDC_EXCHANGETYPE_SZA`JG_TDC_EXCHANGETYPE_SHA`JG_TDC_EXCHANGETYPE_SHHK`JG_TDC_EXCHANGETYPE_SZHK`JG_TDC_EXCHANGETYPE_CFFEX`JG_TDC_EXCHANGETYPE_SHFE`JG_TDC_EXCHANGETYPE_CZCE`JG_TDC_EXCHANGETYPE_DCE`JG_TDC_EXCHANGETYPE_OPTSZA`JG_TDC_EXCHANGETYPE_OPTSHA]!`XSHE`XSHG`XHKG`XHKE`CCFX`XSGE`XZCE`XDCE`XSHE`XSHG;

\d .temp
QREF:QUEUE:L23:L22:L21:L20:L19:L18:L17:L16:L15:L14:L13:L12:L11:L10:L:C:();MDSub:QTSub:()!();
\d .

jgtconn:{[x;y]if[not any .z.T within/: .conf.jg.openrange;:()];if[1i~.ctrl.jg[`runT];:()];.ctrl.jg[`conntimeT]:.z.P;.ctrl.jg[`runT]:r:initjgt[();(.conf.jg.trdip;.conf.jg.trdport)];1b;};
jgtdisc:{[x;y]if[any .z.T within/: .conf.jg.openrange;:()];if[1i~.ctrl.jg[`runT];:()];.ctrl.jg[`runT]:freejgt[];1b;};

.init.ftjg:{[x]jgtconn[`;.z.P];};
.exit.ftjg:{[x].ctrl.jg[`runT]:freejgt[];};

.timer.ftjg:{[x]if[not any .z.T within/:.conf.jg.openrange;:()];jgtconn[`;`];if[1b~.ctrl.jg[`ConnectT];jglogin[]];};

jglogin:{[]if[(1b~.ctrl.jg`LoginT)|(1b~.ctrl.jg`PassErr);:()];.ctrl.jg[`PassErr]:1b;.ctrl.jg[`LoginResT`LoginReqT]:jgcall[`userLoginT;(.enum`JG_TDC_LOGINTYPE_FundAccount;.enum`JG_TDC_EXCHANGETYPE_SZA),.conf.jg`branch`trduser`trdpass`cltmac`cltip`cltmd5`credit];};

.upd.JGTInit:{[x].ctrl.jg[`APIVersion]:x[0];};

.upd.FrontConnectedT:{[x].ctrl.jg[`ConnectT`LoginT`ConntimeT]:(1b;0b;.z.P);};
.upd.FrontDisConnectedT:{[x].ctrl.jg[`ConnectT`LoginT`DisctimeT]:(0b;0b;.z.P);};

.upd.JGError:{[x].ctrl.jg[`ErrReq`ErrSrc`ErrMsg`ErrTime]:x,.z.P;s:`$x[1];r:-1i;m:x[2];$[s=`RspOrderInsert;[if[null k:exec first id from .db[.ctrl.O] where j1=`long$x[0];:()];.db[.ctrl.O;k;`status`reason`msg]:(.enum`REJECTED;r;m);execrpt[k]];s=`RspOrderCancel;[if[null k:exec first id from .db[.ctrl.O] where j3=`long$x[0];:()];.db[.ctrl.O;k;`cstatus`reason`msg]:(.enum`REJECTED;r;m);rejcxl[k;r;m]];[]];};

.upd.LoginT:{[x].ctrl.jg[`LoginT`LoginTimeT`PassErr`ClientID`FundAccount`SupportSubType]:(1b;.z.P;0b),1_x;.ctrl.jg[`SubResT`SubReqT]:jgcall[`reqSubscriptionT;(.conf.jg`trduser;.enum`JG_TDC_SUBTYPE_Subscription;.ctrl.jg[`SupportSubType])];};
.upd.LogoutT:{[x].ctrl.jg[`LoginT`LogoutTimeT]:(0b;.z.P);};
.upd.SubscriptionT:{[x].ctrl.jg[`SubscriptionT`SubscriptionTimeT`SubscriptionTypeT]:(1b;.z.P),x[1];.ctrl.jg[`AccResT`AccReqT]:jgcall[`getUserAccountT;.conf.jg`trduser];};

.upd.UserAccountT:{[x]};
.upd.HolderInfo:{[x]};

.upd.ordnew:.fe.ordnew:{[x]if[x[`sym]<>.conf.me;:.ha.ordnew[x]];k:x`oid;if[count opt:x`ordopt;h:strdict opt];if[not null .db[.ctrl.O;k;`sym];:()];k1:newidl[];.db[.ctrl.O;k;`feoid`ntime`status`x0`ft`ts`acc`fe`acc1`ref`sym`side`posefct`tif`typ`qty`price`ordopt]:(k1;.z.P;.enum`PENDING_NEW;enlist .enum.nulldict),x`ft`ts`acc`sym`acc1`ref`osym`side`posefct`tif`typ`qty`price`ordopt;if[not (1b~.ctrl.jg`LoginT)&(.conf.jg.ordmax>count .db[.ctrl.O]);rejectord[k;1i;"JG_Not_Ready_Or_Toomany_Orders"];:()];esym:fs2s x`osym;ex:fs2e x`osym;.db[.ctrl.O;k;`j0`j1]:jgcall[`orderInsert;(.conf.jg.trduser;k1;esym;.enum.jgexT ex;.enum.jgtrdtyp x`side`posefct;$[(0<x[`price])|(esym like "SP*");.enum`JG_TDC_PRICETYPE_Limit;.enum`JG_TDC_PRICETYPE_Timely];`long$x`qty;floor 1e-5+1e4*x`price)];}'; 

.upd.ordcxl:.fe.ordcxl:{[x]if[x[`sym]<>.conf.me;:.ha.ordcxl[x]];k:x`oid;r:.db[.ctrl.O;k];if[null r`sym;:()];.db[.ctrl.O;k;`cid`cstatus]:(x`cid;.enum`PENDING_CANCEL);h:$[count r[`x0];r[`x0;0];strdict r`rptopt];.db[.ctrl.O;k;`j2`j3]:jgcall[`orderCancel;(.conf.jg.trduser;.enum.jgexT fs2e r`sym;r`ordid;r`feoid)];}'; 
.upd.ordqry:.fe.ordqry:{[x]r:.db[.ctrl.O;x`oid];jgcall[`qryOrder;(.conf.jg.trduser;.enum`JG_TDC_QUERYMODE_ByEntrustNo;fs2s r`sym;.enum.jgexT fs2e r`sym;r`ordid;.enum`JG_TDC_QUERYDIRECTION_Sequence;1f;`)];}';

.upd.OrderInsert:{[x].temp.L10,:enlist y:`ResultType`ErrorInfo`EntrustNo`BatchNo`StockAccount`StockCode`ExchangeType`TradeType`PriceType`OrderVolume`OrderPrice!x;if[null k:exec first id from .db[.ctrl.O] where feoid=`$y`BatchNo;:()];.db[.ctrl.O;k;`ordid]:`$y`EntrustNo;$[0<>y`ResultType;.db[.ctrl.O;k;`status`reason`msg]:(.enum`REJECTED;y`ResultType;y`ErrorInfo);.db[.ctrl.O;k;`status]:.enum`PENDING_NEW];execrpt[k];};

.upd.OrderCancel:{[x].temp.L11,:enlist y:`ResultType`ErrorInfo`EntrustNo`NewEntrustNo`BatchNo!x;if[null k:exec first id from .db[.ctrl.O] where feoid=`$y`BatchNo;:()];.db[.ctrl.O;k;`cordid]:`$y`NewEntrustNo;if[0<>y`ResultType;.db[.ctrl.O;k;`cstatus`reason`msg]:(.enum`REJECTED;y`ResultType;y`ErrorInfo);execrpt[k]];};

.upd.Order:{[x].temp.L12,:enlist y:.enum.JGOrderKey!x;if[null k:exec first id from .db[.ctrl.O] where ordid=`$y`EntrustNo;:()];r:.db[.ctrl.O;k];st:.enum[`jgstatus] y`EntrustStatus;if[st in .enum`PENDING_CANCEL`CANCELED;.db[.ctrl.O;k;`cstatus]:st;if[st=.enum`CANCELED;.db[.ctrl.O;k;`status]:st;if[r[`cumqty]<y`BusinessVolume];.db[.ctrl.O;k;`cumqty`avgpx]:(`float$y`BusinessVolume;1e-4*y`BusinessPrice)]];if[not st in .enum`PARTIALLY_FILLED`FILLED;execrpt[k]];};

.upd.Trade:{[x].temp.L13,:enlist y:.enum.JGTradeKey!x;if[null k:exec first id from .db[.ctrl.O] where ordid=`$y`EntrustNo;:()];r:.db[.ctrl.O;k];st:.enum[`jgbstatus] y`BusinessStatus;lp:1e-4*y`BusinessPrice;lq:`float$y`BusinessVolume;cq:lq+q0:0f^r`cumqty;ap:((lp*lq)+q0*p0:0f^r`avgpx)%cq;.db[.ctrl.O;k;`cumqty`avgpx`lastqty`lastpx]:cq,ap,lq,lp;if[not r[`status]=.enum`CANCELED;.db[.ctrl.O;k;`status]:.enum $[cq=r`qty;`FILLED;`PARTIALLY_FILLED]];execrpt[k];};

.upd.QryOrder:{[x].temp.L14,:enlist y:.enum.JGOrderKey!x;if[null k:exec first id from .db[.ctrl.O] where ordid=`$y`EntrustNo;:()];r:.db[.ctrl.O;k];st:.enum[`jgstatus] y`EntrustStatus;if[st in .enum`PENDING_CANCEL`CANCELED;.db[.ctrl.O;k;`cstatus]:st];.db[.ctrl.O;k;`status]:st;if[r[`cumqty]<y`BusinessVolume;.db[.ctrl.O;k;`cumqty`avgpx]:(`float$y`BusinessVolume;1e-4*y`BusinessPrice)];execrpt[k];};

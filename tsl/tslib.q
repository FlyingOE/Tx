//tslib.q:��׼���Ĳ����������

.module.tslib:2019.06.19;

//libpeg:�Զ�����������,Ҫ����Դ��ڲ���.db.Ts[x;`Cp;TRDTIME`tmout`tmout1`tmout2`urge]:(����ʱ���б�;ί�г�ʱ����ʱ����;����ʱ����1(����������urge=1);����ʱ����2(����������urge=2);�����̶�{0W;������ǵ�ͣ��;[3,n]:������̿�+[1,n-2]��,2:������̿�,1:�����̿�+1��;0:�ұ����̿�})
//�ڲ��Ե�ont�¼��е���oexpire_libpeg,ono�¼��е���opeg_libpeg,�����µ����oid����pegord_libpeg

pegord_libpeg:{[x].db.O[x;`special]:`PEG;x}; /[oid]

ordpxex_libpeg:{[x;y;z;w]pu:pxunit[y];pb:.db.QX[y;`bid];pa:.db.QX[y;`ask];ps:.db.QX[y;`sup];pi:.db.QX[y;`inf];b:z=.enum`BUY;$[0W=w;$[b;ps;pi];2<w;$[b;ps&pa+pu*(w-2);pi|pb-pu*(w-2)];2~w;$[b;pa;pb];1~w;roundpx[y;z;$[b;pb+pu;pa-pu]];$[b;pb;pa]]}; /[tid;sym;side;urge]���㲹���۸�

oexpire_libpeg:{[x;y]if[not any (`time$y) within/:.db.Ts[x;`Cp;`TRDTIME];:()];cxlord each exec id from .db.O where ts=x,not end,special=`PEG,.db.Ts[x;`Cp;`tmout]<y-ntime;}; /[tid;.z.P]�Գ�ʱί�н��г���

opeg_libpeg:{[x;y]r:.db.O[y];if[(.enum[`CANCELED]=r[`status])&(`PEG=r[`special]);s:r[`sym];sd:r[`side];z:r`origid;cp:.db.Ts[x;`Cp];w:cp[`urge];k:limit_order[sd;0N;r`ts;s;roundqty[(s;sd);r[`qty]-r[`cumqty]];ordpxex_libpeg[x;s;sd;$[(null z)|(.z.P<.db.O[z;`ntime]+cp[`tmout1]);w;.z.P<.db.O[z;`ntime]+cp[`tmout2];1|w;2|w]];r[`ref]];{[x;y].db.O[x;`special`origid]:(`PEG;y^.db.O[y;`origid])}[;y] each k];};  /[tid;oid]����Ҫ�����ĳ���ί�н��в�������

//libbar:�Զ����ݲ��Զ��ĵ�BarƵ�ʽ�ϵͳBar�ϳ�Ϊ������Ҫ��n����bar���ٻص����Ե�barx�¼�,Ҫ����Դ��ڱ�Ĵ���.db.Ts[x;xsym]���Ʋ���.db.Ts[x;`Cp;barfreq]�ͻ�����.db.Ts[x;`BBUF]:()
//�ڲ��Ե�event��bar�¼�����������Ϊonb_libbar,��������barxʱ�䴥����Ϊ�����߼�
onb_libbar:{[x;b].temp.b:b;r:.db.Ts[x];y:r`xsym;sess:trdsess[y];t:b`bart;if[not any t within/:sess;:()];bf:b`freq;sf:`long$`second$r[`Cp;`barfreq];bx:r[`event;`barx];if[sf<=bf;:(bx)[x;b]];n:sf div bf;bt:xbar[sf] t;if[n1:count r`BBUF;if[count[r`BBUF]&bt>xbar[sf] (last r`BBUF)`bart;(bx)[x;synbar_libbar[x]]]];.db.Ts[x;`BBUF],:enlist b;if[n<=n1+1;(bx)[x;synbar_libbar[x]]];}; /[tid;bar]

synbar_libbar:{[x]b:exec last time,first sym,freq:`second$.db.Ts[x;`Cp;`barfreq],first bard,first bart,first open,max high,min low,last close,sum vol,sum amt,last src,last srctime,last srcseq,last dsttime from .db.Ts[x;`BBUF];.db.Ts[x;`BBUF]:0#.db.Ts[x;`BBUF];b}; /[tid] 
.module.handy:2017.01.25;

typefill:{[x;y]$[0<=type y;x;null y;x;y]};sfill:typefill[`];ifill:typefill[0Ni];ffill:typefill[0n];rfill:typefill[0ne];jfill:typefill[0Nj];tfill:typefill[0Nt];dfill:typefill[0Nd];pfill:typefill[0Np];chfill:typefill[" "];
cfill:{[x]$[10h=abs type x;x;""]};

mirror:{(value x)!key x};
map2vars:{[x;y](key y) ({.[x;enlist y;:;z]}[x])' value y;};

tkey:{key[x] except `};
weekday:{x-`week$x:`date$x}; /[����]ȡ��ǰΪ���ڼ�:0->����һ,4->������,5->������,6->������
dictstr:{[x]{"|" sv (string key x),'"=",/:(-3!)each value x} ` _x};
strdict:{[x] value each (!/)"S=|" 0: x};
unixdate:{08:00+`datetime$-10957+x%86400};

unmap_helper:{$[(type x)or not count x;1;t:type first x;all t=type each x;0]};
unmap_column:{[]select from (raze {([]table:enlist x;columns:enlist where not unmap_helper each flip .Q.en[`:.]`. x)} each tables[]) where 0<count each columns};

httpget1:{[host;location] r:(`$":http://",host)"GET ",location," HTTP/1.1\r\nHost:",host,"\r\n\r\n";i:first r ss "\r\n\r\n";(i+4) _ r}; /���ڰ���"\n"�Ķ�����

quote:{[x]"\"",(ssr[;"\\";"\\\\"] ssr[;"\"";"\\\""] x),"\""};
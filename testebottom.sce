o = openserial(5,"9600,n,8,1");
[n,v] = msscanf(readserial(o),"%d\n");
if %t then
    printf("%d\n",v);
end


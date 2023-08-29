//Abrir porta serial COM5
x = openserial(5,"9600,n,8,1");
tic()
while %t
    [n, v1, v2, v3] = msscanf(readserial(x),"botvl:%d\n");
    if(n>0) then
        printf(v1, v2, v3);
        //sleep(250);
    end
end
closeserial(x); 
//fecha a serial, devido ao loop infinito nunca será executado
//execute manualmente este comando para fechar a porta serial
//Não será possível executar o programa novametne se a porta já estiver aberta

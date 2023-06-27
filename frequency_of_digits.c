//frequency of digits from 0 to 9 in string
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char str[100];
    int len,count=1;
    scanf("%s",str);
    len = strlen(str);
    int fr[len];
    for(int i=0;i<len;i++){
        if((str[i]>=97&&str[i]<=122)||(str[i]>=65&&str[i]<=90)){
            str[i]=-1;
        }
    }
    for(int i=0; i<len; i++){
        if(str[i]==-1){
            fr[i]=0;
            continue;
        }else{
            for(int j=i+1;j<len;j++){
                if(str[i]==str[j])
                 count++;
            }
            fr[i]=count;
            count=1;
        }
    }
    
    for(int i=0;i<len;i++){
        printf("%d ",fr[i]);
    }
    return 0;
}
 

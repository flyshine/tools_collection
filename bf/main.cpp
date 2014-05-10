#include <iostream>
#include <string.h>
/**********************
 * author   : flyshine
 * date     : 2014-5-11 00:56:13
 * purpose  : a BF algorithm implement
 *********************/

using namespace std;


int bf(char* pMaster,char* pSub){
    int lenMaster=strlen(pMaster);
    int lenSub=strlen(pSub);
    int position=-1;
    int i=0;
    int j=0;
    if(pMaster ==NULL || pSub == NULL || lenMaster <1 || lenSub <1){
        return position;
    }
    while(i<=(lenMaster - lenSub )){
        j=0;
        while(j<lenSub){
            if(pMaster[i+j] == pSub[j] && j==(lenSub-1)){
                position=i;
                break;
            }
            else if(pMaster[i+j] != pSub[j] ){
                break;
            }
            j=j+1;
        }
        if(position!=-1){
            break;
        }
        i=i+1;;
    }
    return position;
}

int main()
{
    cout << "bf(\"abcdefg\",\"efg\") = " << bf("abcdefg","efg")<<endl;
    cout << "bf(\"abcdefg\",\"ef\") = " << bf("abcdefg","ef")<<endl;
    cout << "bf(\"abcdefg\",\"\") = " << bf("abcdefg","")<<endl;
    cout << "bf(\"abcdefg\",\"g\") = " << bf("abcdefg","g")<<endl;
    cout << "bf(\"abcdefg\",\"a\") = " << bf("abcdefg","a")<<endl;
    return 0;
}

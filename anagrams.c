// WAP to check whether the two strings are anagrams or not 

#include <stdio.h>

int stringlen(const char *s){
    int c = 0;
    while (*s != '\0'){
        c++;
        s++;
    }
    return c;
}

int isAnagram(const char *str1, const char *str2){
    int len1 = stringlen(str1);
    int len2 = stringlen(str2);

    if (len1 != len2){
        return 0;
    }

    int letterfreq1[512] = {0};
    int letterfreq2[512] = {0};
    int i;

    // counting the frequency of each letter, 
    // and storing it at it's ascii value as the index for both str1 and str2
    for (i=0;i<len1;i++){
        letterfreq1[str1[i]]++;
    }

    for (i=0;i<len2;i++){
        letterfreq2[str2[i]]++;
    }

    for (i=0;i<512;i++){
        if (letterfreq1[i] != letterfreq2[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    const char *stra = "listen",*strb = "silent",*strc = "hello",*strd = "world";

    if (isAnagram(stra,strb)){
        printf("\"%s\" and \"%s\" are anagrams.\n",stra,strb);
    } else{
        printf("\"%s\" and \"%s\" are not anagrams.\n",stra,strb);
    }

    if (isAnagram(strc,strd)){
        printf("\"%s\" and \"%s\" are anagrams\n", strc, strd);
    } else{
        printf("\"%s\" and \"%s\" are not anagrams\n",strc,strd);
    }

    return 0;
}
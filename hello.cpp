#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int lengthOfLongestSubstring(char* s) {
    int maxNum = 0;
    int i = 0;
    int j,k;
    int temp;
    int num;
    while(s[i]!='\0')
    {
        j = i+1;
        while(s[j]!='\0')
        {
            temp=j+1;
            if(s[i] == s[j])
            {
                num = j-i;
                if(maxNum<num)
                    maxNum = num;
                break;
            }
            for(k=i;k<j;k++)
            {
                if(s[temp]==s[k])
                {
                    break;
                }
            }
            j++;
        }
        i++;   
    }
    return maxNum;
}
int main()
{
    /*for test22*/
    char s[10] = "abbbbabca";
    int num;
    num = lengthOfLongestSubstring(s);
    cout<<num<<endl;
    system("pause");
    return 0;
}

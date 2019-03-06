#include<stdio.h>
#define K 5
void jiami(char a[],int length){
	int i,j;
	char b[100] = { };//将数组中的数转化为密文后存入的数组 
	int c[100];//数组中每个数ASCII值 
	for(i=0;i<length;i++){
		c[i] = (int)a[i];
		//转换大写字母 
		if(65 <= c[i] && c[i] <= 90){
			b[i] = (char)(c[i]-65)*K%26+65;
		}
		//转化小写字母 
		else if(97 <= c[i] && c[i] <= 122){
			b[i] = (char)(c[i]-97)*K%26+97;
		}
		//转化空格 
		if(c[i] == 32){
			b[i] = (char)c[i];
		}
	} 
	//打印密文 
//	for(j=0;j<length;j++){
//		printf("%c",b[j]);
//	} 
	puts(b);
}
int main()
{	
	char a[100]={0};
	int i;
	int sum = 0;
	printf("请输入明文:");
	//输入字符串 
	gets(a);
	//设置标志位,将有意义的数传入调用函数 
	for(i=0;i<100;i++){
		if(a[i] != 0){
		sum ++; 
		}
		else break;
	}
	//调用加密函数 
	jiami(a,sum);
	return 0;
}

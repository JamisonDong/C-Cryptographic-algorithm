#include<stdio.h>
#define K 5
void jiami(char a[],int length){
	int i,j;
	char b[100] = { };//�������е���ת��Ϊ���ĺ��������� 
	int c[100];//������ÿ����ASCIIֵ 
	for(i=0;i<length;i++){
		c[i] = (int)a[i];
		//ת����д��ĸ 
		if(65 <= c[i] && c[i] <= 90){
			b[i] = (char)(c[i]-65)*K%26+65;
		}
		//ת��Сд��ĸ 
		else if(97 <= c[i] && c[i] <= 122){
			b[i] = (char)(c[i]-97)*K%26+97;
		}
		//ת���ո� 
		if(c[i] == 32){
			b[i] = (char)c[i];
		}
	} 
	//��ӡ���� 
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
	printf("����������:");
	//�����ַ��� 
	gets(a);
	//���ñ�־λ,�����������������ú��� 
	for(i=0;i<100;i++){
		if(a[i] != 0){
		sum ++; 
		}
		else break;
	}
	//���ü��ܺ��� 
	jiami(a,sum);
	return 0;
}

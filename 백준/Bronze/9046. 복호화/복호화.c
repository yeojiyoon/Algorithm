#include <stdio.h>
#include <string.h>

int main()
{
	int T, i, j, k, max, flag, num, len;
	char s[256]; 
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	char code[] = "wghuvijxpqrstacdebfklmnoyz";
	int cnt[28];
	
	scanf("%d", &T);
	
	gets(s);
	
	for (i = 0; i < T; i++)
	{
		gets(s);
		max = -1;
		flag = 1;
		len = 0;
		
		while(*(s + len) != 0) len++;
		
		//printf("len: %d\n", len);
		
		for(j = 0 ; j < 28; j++) //cnt 배열 초기화 
		{
			cnt[j] = 0;
		}
		
		for(j = 0; j < strlen(s); j++) //입력 길이만큼 
		{
			for(k = 0; k <= 28; k++) //code를 돌 거임 
			{
				if(s[j] == code[k]) //같으면 카운트 
				{
					cnt[k]++;
				}
			}
		}
		
		for(j = 0; j < 28; j++) //cnt 배열에서 가장 큰 값 선택 
		{
			if(cnt[j] > max)
			{
				max = cnt[j];
				num = j;
			}
		}
		
		for(j = 0; j < 28; j++)
		{
			if((j!=num) && (cnt[j]==max)) {
				//printf("num = %d, j = %d, cnt[j] = %d, max = %d\n", num, j, cnt[j], max);
				flag = 0;
				break;
			}
		}
		
		if(flag)
		{
			printf("%c\n", code[num]);
		}
		else printf("?\n");
	}
}
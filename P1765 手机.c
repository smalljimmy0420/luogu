#include <stdio.h>
int main()
{
	int cs[30];
	int length;
	int count;
	//2
	cs['a']=1;
	cs['b']=2;
	cs['c']=3;
	//3
	cs['d']=1;
	cs['e']=2;
	cs['f']=3;
	//4
	cs['g']=1;
	cs['h']=2;
	cs['i']=3;
	//5
	cs['j']=1;
	cs['k']=2;
	cs['l']=3;
	//6
	cs['m']=1;
	cs['n']=2;
	cs['o']=3;
	//7
	cs['p']=1;
	cs['q']=2;
	cs['r']=3;
	cs['s']=4;
	//8
	cs['t']=1;
	cs['u']=2;
	cs['v']=3;
	//9
	cs['w']=1;
	cs['x']=2;
	cs['y']=3;
	cs['z']=4;
	//0
	cs[' ']=1;
	char sentence[1000];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®:");
	scanf("%s",&sentence);
	length=sizeof(sentence);
	for(int i=0;i<length;i++){
		count+=cs[sentence[i]];
	}
	printf("%d",count);
	return 0;
}

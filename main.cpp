//�Ŷ��� �ڶ��� ��2.11 Ȧ�Ű�
#include <stdio.h>


int main()
{
    char buf[82][82];
    int n;
    char a,b;
    while(scanf("%d %c %c",&n,&a,&b)!=EOF){//ǰ��Ҫ�ӿո�Ȼ����ʱ�Ŀո�ᱻscan��b
        int x,y;
        int i,j,k;

        for(i = 1,j = 1;i <= n; i += 2,j++)
        {
             x = n / 2 + 1;//���еļ������Ǵ�1��ʼ
             y = x;//����
             x = x - (j - 1);
             y = y - (j - 1);
             char c;
             if(j % 2 == 1) c = a;
             else c = b;
             printf("c = %c\n",c);

             for(k = 1;k <= i;k++)
             {
                 buf[x + k - 1][y] = c;//��
                 buf[x][y + k - 1] = c;//��
                 buf[x + i - 1][y + k - 1] = c;//��
                 buf[x + k - 1][y + i - 1] = c;
             }
        }
        if(n != 1)
        {
            buf[1][1] = ' ';
            buf[1][n] = ' ';
            buf[n][1] = ' ';
            buf[n][n] = ' ';
        }
        for(i = 1;i <= n;i++)
        {
            for(j = 1;j <=n ;j++)
            {
                printf("%c ",buf[i][j]);
            }
            printf("\n");
        }
        //break;
    }
    return 0;
}

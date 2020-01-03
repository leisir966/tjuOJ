#include <stdio.h>
int main()
{
    int N, count = 0;
    int array[100000], lmax[100000], rmin[100000];
    
    scanf("%d", &N);
    for(int i = 0; i < N; i++) scanf("%d", array + i);
    
    /* find the largest on one's left and the smallest on the right */
//    for(int i = 0, max = 0; i < N; i++)
//        lmax[i] = array[i] >= array[max] ? array[max = i] : array[max];
//        最智能的lambda表达式跟以下我写的代码一个效果 
		int max= array[0];
        lmax[0]=max;
        for(int i=1;i<N;i++){
        	if (max<array[i]) max=array[i];
			lmax[i]=max;	
		}
        
    
    for(int i = N - 1, min = i; i >= 0; i--)
        rmin[i] = array[i] <= array[min] ? array[min = i] : array[min];
    
    /* a element is the largest on its left and the smallest on its right, 
     * it is probably a pivot */
    for(int i = 0; i < N; i++)
    {
        if(array[i] == lmax[i] && array[i] == rmin[i])
            count++;
        else
            array[i] = 0;
    }

    printf("%d\n", count);
    for(int i = 0; i < N && count; i++) if(array[i])
        printf("%d%c", array[i], --count ? ' ' : '\0');
    printf("\n");
    
    return 0;
}


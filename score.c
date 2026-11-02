#include <stdio.h>
#define N 10

int count_pass(float s[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] >= 60) {
            count=count + 1;
        }// 这里只差一行：如果 s[i] 及格，就让 count 加一
    }
    return count;
}
    void input_score(float s[], int n)
{
        for (int i = 0;i < n;i++)
        {
            scanf("%f", &s[i]);
        }
        // 一个 for 循环，循环 n 次，scanf("%f", &s[i]);
}

    void print_result(float s[], int n)
{
        for (int i = 0;i < n;i++)
        {
            printf(" % .1f ", s[i]);
        }// 一个 for 循环，循环 n 次，printf("%.1f ", s[i]);
}

   float average(float s[], int n) {
        float sum = 0;
        for (int i = 0;i < n;i++) {
            sum = sum + s[i];
        }
            return sum/n;
        
    
    }// 三行
   float max_score(float s[], int n)
   {
       float m = s[0];              // 先假设第一个最大
       for (int i = 1; i < n; i++)  // 从第 2 个开始比
       {
           if (s[i] > m)
           {
               m = s[i];
           }
       }
       return m;
   }
   
   float min_score(float s[], int n)
   {
       float m = s[0];              // 先假设第一个最大
       for (int i = 1; i < n; i++)  // 从第 2 个开始比
       {
           if (s[i] < m) { m = s[i]; }
       }
       return m;
   }
        // sum 先初始化成 0 → for 循环累加 → return sum / n
    int main()
    {
        float s[N];
        input_score(s, N);
        print_result(s, N);
        double sum= average(s,N);
        double max = max_score(s,N);
        double min = min_score(s, N);
        int count = count_pass(s, N);

        printf("    average=%.2f\n", sum);
        printf("min=%.2f\n", min);
        printf("max=%.2f\n", max);
        printf("count=%d", count);
        return 0;

    }
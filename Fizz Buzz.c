/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

char ** fizzBuzz(int n, int* returnSize){
    char**answer = malloc(n*sizeof(char*));
    *returnSize = n;
    for (int i=1; i<=n;i++)
    {
        answer[i - 1] = malloc(8 * sizeof(char));
        if (i%3==0 && i%5==0)
        {
            answer[i-1]="FizzBuzz";
            continue;
        }
        if (i%3==0)
        {
            answer[i-1]="Fizz";
            continue;
        }
        if (i%5==0)
        {
            answer[i-1]="Buzz";
            continue;
        }
        sprintf(answer[i-1], "%d", i);
    }
    return answer;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("I will try my best to fill your RAM.\n");
    printf("Enter y to continue the test\n");
    char check;
    scanf("%c", &check);
    if ('y' != check && 'Y' != check)
        exit(1);
    long long allocatedMB = 0;
    srand((unsigned int)time(NULL));
    while (1)
    {
        unsigned char* leakThisMemoryPlease = (unsigned char*)malloc(1048576);
        for (int i = 0; i < 1048576; i++)
            leakThisMemoryPlease[i] = i * rand();
        allocatedMB += 1;
        printf("%lld MB allocated\n", allocatedMB);
        if (allocatedMB < 0)
            break;
    }
    return 0;
}

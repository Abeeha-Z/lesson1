#include <cstdio>
#include <cmath>
int main()
{
    //978-0-393-97950-3
    //GSI prefix
    //Group Identifier, Publisher Code, Item No., Check Digit
    int GSI, GI, PC, INo, CD;
    printf("Enter your ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GSI, &GI, &PC, &INo, &CD);
    printf("GSI prefix: %d \nGroup Identifier %d \nPublisher Code: %d \nItem No: %d \nCheck Digit %d \n", GSI, GI, PC, INo, CD);
return 0;
}

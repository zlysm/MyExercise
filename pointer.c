#include <stdio.h>

const int MAX = 3;

int main()
{
    int  var[] = { 10, 100, 200 };
    int  i, * ptr;

    /* ָ���е������ַ */
    ptr = var;
    for (i = 0; i < MAX; i++)
    {

        printf("�洢��ַ��var[%d] = %p\n", i, ptr);
        printf("�洢ֵ��var[%d] = %d\n", i, *ptr);

        /* ָ����һ��λ�� */
        ptr++;
    }
    return 0;
}
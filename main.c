#include "main.h"

int main(){
    setlocale(LC_ALL, "Rus");
    printf("�������� ��� �����:\n");
    printf("1.��������������\n2.�����������\n");
    int choose = 0, n = 0, cout1 = 0, cout2 = 0;
    scanf("%d", &choose);
    printf("������� ���������� ��������:\n");
    scanf("%d", &n);
    if (n < 2){
        printf("���������� ��������� ��������!\n");
        printf("%d\n", sizeof(vector));
        printf("%d\n", sizeof(vector_double));
        printf("%d\n", sizeof(vector_complex));
        return 0;
    }

    if(choose == 1)
    {
        vector** massive_vect = malloc(n*sizeof(vector));
        massive_vect = enter_massive(enter_double, n);
        printf("�������� ������ ��������, ��� ������� ��������� ����� � ������������:\n");
        scanf("%d",&cout1);
        scanf("%d",&cout2);
        if(cout1 <= n || cout1 <= n)
            out_double(massive_vect[cout1], massive_vect[cout2]);
        else
            printf("������� �������� ��������!");
        for(int i = 0; i < n; i++)
            free(massive_vect[i]);
    }
    if(choose == 2)
    {
        vector** massive_vect = malloc(n*sizeof(vector));
        massive_vect = enter_massive(enter_complex, n);
        printf("�������� ������ ��������, ��� ������� ��������� ����� � ������������:\n");
        scanf("%d",&cout1);
        scanf("%d",&cout2);
        if(cout1 <= n || cout1 <= n)
            out_complex(massive_vect[cout1], massive_vect[cout2]);
         else
            printf("������� �������� ��������!");
         for(int i = 0; i < n; i++)
            free(massive_vect[i]);

    }

    return 0;
}

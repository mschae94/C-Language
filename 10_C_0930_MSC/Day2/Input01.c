# include <stdio.h>

void main()
{
	//���������
	int num1;
	int num2;
	int num3;
	int len;
	int wid;
	num3 = 10;
	printf("%d\n", num3);
	printf("%lf\n", (double)num3);
	// �ڷ���: int, float, char, double
	// &num1: �ּ�
	//printf("�ּ�: %d", &num1); //�޸� �ּ� (���� �޸� �ּҴ� %x)
	printf("������ �Է��ϼ���: ");
	//scanf("%d", &num1); //shift + 7
	//scanf("%d, %d",%num1, %num2); // Ʋ����
	//scanf("%d %d", %num1, %num2); //�� �ΰ� ����
	//printf("num1: %d\n", num1);

	// ���� 1) ���ϱ�, ����, ���ϱ�, �����⸦
	// scanf�� ����ؼ� ����غ�����
	
	printf("������ �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);
	printf("%d\n", num1 + num2);
	printf("%d\n", num1 - num2);
	printf("%d\n", num1 * num2);
	printf("%d\n", num1 / num2);
	// ����ȯ (������ �Ǽ���, �Ǽ��� ������) use of (double)
	// �Ǽ��� ������ ������ �ϸ� �Ǽ��� ó���ȴ�.
	// ���Ĺ��� %lf : double
	printf("%lf\n", (double)num1 / num2); //������ �Ǽ���
	printf("%.1lf\n", (double)num1 / num2); //������ �Ǽ��� ���ڸ� �Ҽ���
	//������
	printf("������: %d\n", num1%num2); //�������� �ݵ�� ������ �����ϴ�

	// ���� 2) ���� 3���� �����ϰ� ���հ� ����� ����غ�����
	//			(����) ����� �Ҽ��� 2�ڸ�����

	printf("������ �Է��ϼ���: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d\n", num1 + num2 + num3);
	printf("%.2lf\n", (double)(num1 + num2 + num3)/3);

	//���� 3) ���μ��θ� �Է¹ް� �ﰢ���� ���̸� ���غ�����
	printf("���θ� �Է��ϼ���: ");
	scanf("%d", &len);
	printf("���θ� �Է��ϼ���: ");
	scanf("%d", &wid);
	printf("%lf\n", (double)(len * wid)/2);

}
# include <stdio.h>

void main()
{
	// ���Ĺ��� (%d, %lf, %c, %s)
	double fnum;
	int num;
	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%lf", &fnum); //�Է��ҋ��� &
	printf("%lf\n", fnum);
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);
	printf("%d\n", num);
	// �Ǽ��� ������ �����ϸ� �Ǽ��� �ٲ��. (����ȯ)
	printf("%lf + %d = %lf\n", fnum, num, fnum + num); //(�ڵ�����ȯ)

	printf("%lf + %d = %d", fnum, num, (int)fnum + num); //(��������ȯ)






}
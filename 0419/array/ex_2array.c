#include <stdio.h>

void array21(); //�Լ� ����
void array22();
void array23();
void arrPrint(int x[2][3]);

int main(void) {
	//array21();  //�Լ� ȣ��
	//array22();
	array23();			
	return 0;
}

/// <summary>
/// 2���� �迭 ����
/// </summary>
void array21() {  //�Լ� ����
	int  a[2][3];// 2���� �迭�̸�[�迭�� ����][�� �迭�� ��������� ����]
	//int  a[2][3]={4,5,6,7,8,9}; (�Ʒ��� ����)
	a[0][0] = 4;
	a[0][1] = 5;
	a[0][2] = 6;
	a[1][0] = 7;
	a[1][1] = 8;
	a[1][2] = 9;
	printf("a[0][0]=>%d\n", a[0][0]);
	printf("a[0][1]=>%d\n", a[0][1]);
	printf("a[0][2]=>%d\n", a[0][2]);
	printf("a[1][0]=>%d\n", a[1][0]);
	printf("a[1][1]=>%d\n", a[1][1]);
	printf("a[1][2]=>%d\n", a[1][2]);
}

/// <summary>
/// 2�����迭 ũ��
/// </summary>
void array22() {
	int  b[2][3];  //int�� 4����Ʈ�̸� 2*3=6���� ���Ұ� �����Ƿ�  �� 24����Ʈ ũ�⸦ ������

	int totalsize = sizeof(b);   //�迭 b ��ü ������ ��, 24����Ʈ
	printf("�迭 ��ü ũ��� %d\n", totalsize);   //24

	int bsize = sizeof(b[0]);  //0��° ���� ������ ��,12����Ʈ(3�� *4����Ʈ)
	printf("0��° �� ũ��� %d\n", bsize); //12

	int csize = sizeof(b[0][0]);// 0�� 0��° ������ ������, int��  4����Ʈ
	printf("0�� 0�� ���� ũ��� %d\n", csize); // 4
		
}


/// <summary>
///  2���� �迭 �ʱ�ȭ
/// </summary>
void array23() {
	int a[2][3] = { {1,2,3},{4,5,6} };  // �迭 �ʱ�ȭ, 1,2,3,4,5,6
	arrPrint(a); // �迭 �ּҸ� �μ��� �����鼭 �Լ� ȣ��
	int b[2][3] = { {1},{4} }; //1 0 0 4 0 0
	arrPrint(b);
	int c[2][3] = { {1,2} }; // 1 2 0 0 0 0 
	arrPrint(c);
	int d[2][3] = { 1,2,3,4,5,6 }; // 1 2 3 4 5 6
	arrPrint(d);
	int i[2][3] = { 1,2,3,4 }; //1 2 3 4 0 0 
	arrPrint(i);
	int j[2][3] = { 1,2 }; //1 2 0 0 0 0 
	arrPrint(j);
	int k[2][3] = { 0 }; //0 0 0 0 0 0 
	arrPrint(k);
}

/// <summary>
/// 2���� �迭 �ݺ������� ���
/// </summary>
/// <param name="x"></param>
void arrPrint(int x[2][3]) { //�Ű�������  ������ 2���� �迭�� ����(
	for (int i = 0; i < 2; i++) {  //0~1 �� 
		for (int k = 0; k < 3; k++) {  // 0~2 ��
			printf("%2d", x[i][k]); // 2���� �迭�� ���� ���ڸ� ������ ���
		}//���� for ��

		printf("\n"); // ���� ������ �ٹٲ�
	}//�� for ��
	printf("--------------\n");
}//arrPrint �Լ� ��

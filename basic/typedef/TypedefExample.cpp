// �÷����� ���� ������ 2 byte�� ��� 2����Ʈ�� �Ѵ� ������ int�� �����ϱ⸦ �����ϱ� ����
// typedef�� ��Ī�� �ƴ� ��Ī(?)�� ����ϰ� �Ͽ� �޸� ������ �����ϰ� �� �� �ִ�.
// int8_t.. �� ���� ������ fixed_width_integers ���� 
#ifdef INT_2_BYTES
typedef char int8_t;
typedef int int16_t;
typedef long int32_t;
#else
typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
#endif

typedef int sumScore_t;

// �������� ���Ͽ� ����ϴ� ��찡 typedef�� �ֿ� ��� �����̴�.
sumScore_t Sum(int korScore, int mathScore)
{
	return korScore + mathScore;
}
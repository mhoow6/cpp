// 플랫폼에 따라 정수가 2 byte일 경우 2바이트가 넘는 정보를 int에 저장하기를 방지하기 위해
// typedef로 별칭이 아닌 별칭(?)을 사용하게 하여 메모리 범위를 지정하게 할 수 있다.
// int8_t.. 에 관한 설명은 fixed_width_integers 참고 
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

// 가독성을 위하여 사용하는 경우가 typedef의 주요 사용 원인이다.
sumScore_t Sum(int korScore, int mathScore)
{
	return korScore + mathScore;
}
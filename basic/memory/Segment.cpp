/* �޸� ����
 * 1. �ڵ� ���׸�Ʈ
 * �����ϵ� ���α׷��� ����Ǵ� ����, read-only �Ӽ�
 * 
 * 2. ������ ���׸�Ʈ
 * ���� ���� �� ���� ������ ����Ǵ� ����
 * 
 * 3. �� ���׸�Ʈ (Heap)
 * �������� �Ҵ�� ������ �Ҵ�Ǵ� ����
 * 
 * 4. ���� ���׸�Ʈ (Call Stack)
 * �Լ� �Ű�����, ���� ���� �� ��Ÿ �Լ� ���� ������ ����Ǵ� ����
 * ���α׷����� ���� ���� ���� �����ƾ(�Լ�)�� ���� ������ �����ϴ� ���� �ڷᱸ��
 * ���α׷� ���۽� �ü���� ���� ���� �Լ��� call stack�� push�ȴ�. �� �� �Ŀ� ���α׷��� ����Ǳ� ������
 * 
 * ��. ���� ������
 * call stack�� �ְ� ���� ������ ��ü�� �ǹ�
 * �ϳ��� �Լ� ȣ��� ���õ� ��� �����͸� ������
 * 
 * ��. ���� ������
 * ȣ�� ������ �ֻ��� ��ġ�� ����Ű�� ��������
 */

#include <iostream>

int main()
{
	// 1. �� ���׸�Ʈ
	//		���� �޸𸮸� �Ҵ��ϴ� ���� ���ÿ� ���� ����
	//		���α׷��� ����� ������ �޸� �Ҵ��� �����ǹǷ� �޸� ���� ����
	//		�������� �Ҵ�Ǵ� �޸𸮴� �����͸� ���� �����ϰ�, �̸� �������ϴ� ���� ������ ���� �����ϴ� �ͺ��� ����
	//		���� �޸� Ǯ�� ũ�Ƿ� ����ü�� Ŭ������ �Ҵ��� �� ����

	int* ptr = new int;	// ������ 4����Ʈ�� �Ҵ�Ǵ� ������ ����
	int* array = new int[10]; // ������ 40����Ʈ�� �Ҵ�Ǵ� �迭


	// 2. ���� ���׸�Ʈ
	//		���� ������ 1MB ũ�⸦ ����
	//		�޸� �Ҵ��� ���� �޸� �Ҵ纸�� ����
	//		���ÿ� �Ҵ�� �޸𸮴� ���� ���� �ȿ� ���� ���� ���� ����
	//		������ ���� ���� ũ�Ⱑ �����Ƿ� ������ ���� �����ϴ� ���� ������ ������ �� ��
	int _array[100];
}
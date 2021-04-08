/*
* STL (Standard Template Library)
* 개체들을 보관하기 위한 다양한 자료구조와 이들 자료구조에 보관된 개체들을 반복적으로 순회할 수 있게 해 주는 반복자
* 사용자에서 정의한 코드를 입력 인자로 전달받아 처리할 수 있게 추상화한 함수 개체,
* 다양한 문제 해결 방법이 구현된 함수들로 구성된 알고리즘 등으로 구성
*
* 1. 반복자 (Iterator)
* typedef implementation-defined iterator;
* 반복자는 포인터와 비슷하게 동작함
* 컨테이너에 저장된 원소를 순회하면서 접근하는 방법을 제공
* 컨테이너와 알고리즘을 하나로 동작하게끔 중간에서 인터페이스 역할을 함
* 
* 1-1.implementation defined
* 각각의 구현 방법에 따라, 어떤 행동 방식(behavior)이 결정될 수 있고
* 그에 따라 문서화되어 있다는 뜻
*
* 2. 컨테이너
* 같은 타입의 여러 객체를 저장하는 일종의 집합
* 컨테이너는 클래스 템플릿으로, 컨테이너 변수를 선언할 때 컨테이너에 포함할 요소의 타입을 명시
*
* 2-1. STL 컨테이너의 종류
* 1) 시퀀스 컨테이너
* 데이터를 선형을 저장하는 컨테이너
* ex. Vector, deque, list, forwad_list
*
* 2) 연관 컨테이너
* 데이터를 일정 규칙에 따라 조직화하여 저장하고 관리하는 컨테이너
* ex. set, multiset, map, multimap
*
* 3) 컨테이너 어댑터
* 인터페이스를 제한한 시퀀스나 연관 컨테이너의 변형
* ex. stack, queue, priority_queue
*/

#include <iostream>
#include <vector>


int main()
{
    // std namespace의 vector 클래스 생성
    std::vector<int> vt;

    // vt에 원소 넣기
    vt.push_back(1);
    vt.push_back(2);
    vt.push_back(3);

    // vt를 순차적으로 접근
    std::vector<int>::iterator iter;
    for (iter = vt.begin(); iter != vt.end(); iter++)
        std::cout << "vector: " << *iter << std::endl;
}

#include <iostream>

void main()
{
	//int flag = 0b1010;
	//// 0b0001	= 왼쪽 키
	//// 0b0010	= 오른쪽 키
	//// 0b0100	= 위쪽 키
	//// 0b1000	= 아래쪽 키

 //   // And
	//if ((flag & 0b0010) != 0b0000)
	//{
	//	// 오른쪽 키가 눌려져 있다.
	//}
	//else
	//{
 //       // 오른쪽 키가 눌려져 있지 않다.
	//}

 //   // Or
 //   flag = flag | 0b0001;

 //   // Xor
 //   int result = flag ^ 0b0001; // 결과 = 0b1011
 //   result = 0b1011 ^ 0b0001; // 결과 = 0b1010

 //   flag = 0b1010;
 //   int test = 0b0001;  // 0b0001
 //   test = ~test;       // 0b1110 (왼쪽 키를 제외한 나머지 모두 세팅)

 //   // enum : 상수들에게 사람이 알아보기 좋은 이름을 붙여놓은 것
 //   enum Key
 //   {
 //       Up         = 1 << 0,    // 0b0001
 //       Down       = 1 << 1,    // 0b0010
 //       Left       = 1 << 2,    // 0b0100
 //       Right      = 1 << 3     // 0b1000
 //   };

 //   int testFlag = Up;

 //   if ((flag & Up) != 0)
 //   {
 //       // 위쪽 방향키가 눌려져 있을 때
 //   }

    //const int OddNumber = 0b0001;
    //
    //unsigned int InputNumber = 0;
    //
    //std::cin >> InputNumber;

    //if ((InputNumber & OddNumber) != 0)
    //{
    //    printf("홀수입니다.");
    //}
    //else 
    //{
    //    printf("짝수입니다.");
    //}
    
    //for (int i = 0; i < 10; i++)
    //{
    //    printf("Hello World! for: %d\n", i);
    //}

    //int Count = 1;
    //while ((Count % 3) != 0)    // while()의 조건이 참일 때 블럭 실행
    //{
    //    printf("Hello World! while: %d\n", Count);
    //    Count++;
    //}

    //Count = 1;
    //do {
    //    printf("Hello World! while: %d\n", Count);
    //    Count++;
    //} while ((Count % 3) != 0);

    // 1. 0을 입력받을 때 까지 입력을 계속 받고 
    //    0이 입력되면 입력받은 숫자의 합을 출력하시오.
    //    while, do-while 모두 해보기
    
    // while 문
    //int InputNumber = 0;
    //int Count = 0;
    //
    //std::cin >> InputNumber;
    //
    //while (InputNumber != 0) {
    //    Count += InputNumber;
    //    std::cin >> InputNumber;
    //}
    //printf("입력 받은 숫자의 총 합은 : %d입니다.", Count);

    // do-while 문
    //int InputNumber = 0;
    //int Count = 0;
    //
    //do {
    //    std::cin >> InputNumber;
    //    Count += InputNumber;
    //} while (InputNumber != 0);

    //printf("입력 받은 숫자의 총 합은 : %d입니다.", Count);

    // 2. 입력 받을 숫자의 구구단 출력해보기 
        
    //int InputNumber = 0;
    //std::cin >> InputNumber;

    //for (int i = 1; i < 10; i++) {
    //    printf("%d * %d = %d\n", InputNumber, i, InputNumber * i);
    //}

    // 3. 숫자를 하나 입력 받고 입력 받은 수 까지 있는 숫자 중 홀수만 출력하기 
        
    //int InputNumber = 0;
    //std::cin >> InputNumber;
    //
    //for (int i = 1; i <= InputNumber; i+=2) {
    //    printf("%d\n", i);
    //}

    // 4. 1 ~ 100 사이의 숫자 중에 7의 배수만 출력하기
    
    //for (int i = 1; i <= 100; i++) {
    //    if (i % 7 == 0)
    //    {
    //        printf("%d\n", i);
    //    }
    //}
    
    // 5. 입력 받은 숫자 만큼의 층을 가진 피라미드 그리기
    
    int InputNumber = 0;    
    std::cin >> InputNumber;
    int Count = InputNumber;

    for (int i = 0; i < InputNumber; i++) {
        for (int j = 0; j < Count; j++) {
            printf(" ");
        }

        for (int j = 0; j <= i * 2; j++) {
            printf("*");
        }
        printf("\n");
        Count--;
    }
}


/*

반복문
 - 제어문 중의 하나
 - 특정 코드 블록을 조건에 따라 여러 번 반복해서 실행할 수 있게 하는 문

 for        반복 횟수가 명확할 때 좋다
            !!! F9 디버그 모드에서 브레이크 포인트를 우클릭하면 
            조건식으로 반복문의 인덱스 등을 확인 가능 !!!

 while      반복 횟수가 명확하지 않고 조건에 따라 반복할 때 사용한다

 do-while   최소 한 번은 무조건 실행해야 할 때 사용. (while과 거의 같음)

*/

/*

비트 연산자

숫자를 이진수로 변환하여 계산한 값
    
&   (And)   두 비트가 모두 1이면 1, 아니면 0
    int a = 10;     // 0b1010
    int b = 9;      // 0b1001
    int c = a & b;  // 0b1000
    특정 비트세팅이 되어 있는지 확인하고 싶을 때 사용
    이벤트를 체크할 때 사용
    

|   (Or)    두 비트가 하나라도 1이면 1, 둘 다 0이면 0
    int a = 10;     // 0b1010
    int b = 9;      // 0b1001
    int c = a & b;  // 0b1011
    특정 비트에 플래그를 세팅하고 싶을 때 사용(플래그 추가)

^   (Xor)   두 비트가 서로 다르면 1, 같으면 0
    int a = 10;     // 0b1010
    int b = 9;      // 0b1001
    int c = a ^ b;  // 0b0011
    특정 비트를 토글하고 싶을 때 사용

~   (Not)   비트값을 반전 시킨다(0 -> 1, 1 -> 0)
    int a = 10;     // 0b1010
    a = ~a;         // 0b0101
     
<<  (Left Shift)    비트들을 왼쪽으로 이동
    int a = 7;      // 0b0111 
    a = a << 1;     // 0b1110 
    한 번 움직일 때마다 수가 2배가 된다.
        
>>  (Right Shift)   비트들을 오른쪽으로 이동
    int a = 7;      // 0b0111 
    a = a >> 2;     // 0b0011 
    한 번 움직일 때마다 수가 절반이 된다.

*/


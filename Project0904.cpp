#include <iostream>
#include <time.h>
#include <random>

void main()
{
    //// C 스타일의 랜덤 사용법
    ////srand(time(0));
    //srand(0);
    //for (int i = 0; i < 10; i++)
    //{
    //    int RandomNumber = rand();
    //    printf("랜덤한 숫자 : %d\n", RandomNumber);
    //}
    //
    //// 0 ~ 5 까지의 숫자를 랜덤으로 구하고 싶다
    //int RandomNumber1 = rand() % 6;

    //// 1 ~ 6 까지의 숫자를 랜덤으로 구하고 싶다
    //int RandomNumber2 = rand() % 6 + 1;
    //
    //// C++ 스타일
    //std::random_device RandomDevice;
    //std::mt19937 Generate(RandomDevice());

    //printf("균등분포 : ");
    //std::uniform_int_distribution<> uniformDis(1, 100);
    //for (int i = 0; i < 10; i++) {
    //    int Number = uniformDis(Generate);
    //    printf("%d", Number);
    //    if (i < 9) {
    //        printf(", ");
    //    }
    //}
    //printf("\n");

    //printf("정규분포 : ");
    //std::normal_distribution<> normalDis(80, 10);
    //for (int i = 0; i < 10; i++) {
    //    float fNumber = normalDis(Generate);
    //    printf("%.2f", fNumber);
    //    if (i < 9) {
    //        printf(", ");
    //    }
    //}
    //printf("\n");


// 1. 주사위를 100만 번 돌려서 6이 몇 번 나왔는지 카운팅해서 출력하기
    std::random_device RandomDevice;
    std::mt19937 Generate(RandomDevice());
    
    int RandomCount = 0;
    std::uniform_int_distribution<> uniformDis(1, 6);
    for (int i = 0; i < 1000000; i++) {
        int Number = uniformDis(Generate);
        
        if (Number == 6)
        {
            RandomCount += Number;
        }
    }
    printf("6의 총 합은 : %d", RandomCount);


// 2. 가위, 바위, 보 게임 만들기
//    - 3선승제
//    - enum 활용
    
    enum RockScissorsPaper {

        Scissors    = 0b0001,   
        Rock        = 0b0010,
        Paper       = 0b0100

    };

    int UserScore = 0, ComScore = 0;
    
    int UserInput = 0;

    srand(time(0));
    do {
        printf("안 내면 진 거 가위 바위 보 ! (가위 1, 바위 2, 보 3) ");
        printf("당신 : %d승, 컴퓨터 : %d승 ", UserScore, ComScore);
        std::cin >> UserInput;
        int ComInput = rand() % 3;

        if (ComInput ) {

        }
    } while (UserScore > 3 || ComScore > 3);
    

}
// 3. 하이 로우
//    - 컴퓨터가 1 ~ 100 사이의 임의의 숫자를 선택하고,
//      사용자가 맞출 때까지 입력을 받아 "더 높게", "더 낮게" 등의 힌트를 제공하는 게임
//    - 5번 안에 맞춰야 승리 
// 4. 공포 게임의 인벤토리를 비트 플래그로 표현하기
//    - 아이템 종류를 나타내는 enum을 만들고 
//    - 특정 아이템을 추가하고 삭제하는 예시 보여주기 

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

 continue 
   - 반복문 안에서 사용
   - continue를 만나면 그 이후의 코드는 스킵하고 다음 반복을 진행
 break
   - 반복문이나 switch 문에서 해당 반복문을 벗어나거나 case를 종료한다

*/

/*

랜덤
 - 무작위로 숫자를 선택하는 법
 - C 스타일
    - rand();            함수 활용
    - srand(time(0));    시드값 설정 

 - C++ 스타일
    - #include <random>
    - C 스타일보다 많은 기능을 제공한다.
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


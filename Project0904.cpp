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
    //std::random_device RandomDevice;
    //std::mt19937 Generate(RandomDevice());
    //
    //int RandomCount = 0;
    //std::uniform_int_distribution<> uniformDis(1, 6);
    //for (int i = 0; i < 1000000; i++) {
    //    int Number = uniformDis(Generate);
    //    
    //    if (Number == 6)
    //    {
    //        RandomCount += Number;
    //    }
    //}
    //printf("6의 총 합은 : %d", RandomCount);


// 2. 가위, 바위, 보 게임 만들기
//    - 3선승제
//    - enum 활용
    
    //enum RockScissorsPaper {

    //    Scissors,
    //    Rock,
    //    Paper

    //};

    //int UserScore = 0, ComScore = 0;
    //
    //int UserInput = 0;

    //srand(time(0));
    //do {
    //    printf("\n안 내면 진 거 가위 바위 보 ! (가위 1, 바위 2, 보 3) ");
    //    printf("당신 : %d승, 컴퓨터 : %d승 ", UserScore, ComScore);

    //    std::cin >> UserInput;
    //    int ComInput = rand() % 3 + 1;

    //    printf("컴 %d\n", ComInput);

    //    switch (--UserInput) { // 유저 입력을 1, 2, 3에 맞추기 위해 감소시켜줌
    //        case Scissors:
    //            if (ComInput == Paper) {
    //                printf("당신은 승리 했습니다.");
    //                UserScore++;
    //            }
    //            else if (ComInput == Rock) {
    //                printf("당신은 패배 했습니다.");
    //                ComScore++;
    //            }
    //            else {
    //                printf("비겼습니다. 다시!"); 
    //            }
    //            break;
    //        case Rock:
    //            if (ComInput == Scissors) {
    //                printf("당신은 승리 했습니다.");
    //                UserScore++;
    //            }
    //            else if (ComInput == Paper) {
    //                printf("당신은 패배 했습니다.");
    //                ComScore++;
    //            }
    //            else {
    //                printf("비겼습니다. 다시!");
    //            }
    //            break;
    //        case Paper:
    //            if (ComInput == Rock) {
    //                printf("당신은 승리 했습니다.");
    //                UserScore++;
    //            }
    //            else if (ComInput == Scissors) {
    //                printf("당신은 패배 했습니다.");
    //                ComScore++;
    //            }
    //            else {
    //                printf("비겼습니다. 다시!");
    //            }
    //            break;
    //        default:
    //            printf("가위 바위 보 말고 다른 선택지는 없습니다.");
    //            break;
    //    }
    //} while (UserScore < 3 && ComScore < 3);
    //printf("\n당신 : %d승, 컴퓨터 : %d승으로 게임 종료!", UserScore, ComScore);



// 3. 하이 로우
//    - 컴퓨터가 1 ~ 100 사이의 임의의 숫자를 선택하고,IndexNumber
//      사용자가 맞출 때까지 입력을 받아 "더 높게", "더 낮게" 등의 힌트를 제공하는 게임
//    - 5번 안에 맞춰야 승리 

    //srand(time(0));
    //int RandomNumber = rand() % 100 + 1;
    //int UserInput = 0;

    //int IndexNumber;
    //for (IndexNumber = 0; IndexNumber < 5; IndexNumber++) {
    //    std::cin >> UserInput;

    //    if (UserInput > RandomNumber) {
    //        if (IndexNumber == 4) break;
    //        printf("더 낮게\n");
    //    }
    //    else if (UserInput < RandomNumber) {
    //        if (IndexNumber == 4) break;
    //        printf("더 높게\n");
    //    }
    //    else {
    //        printf("정답입니다!\n");
    //        IndexNumber--;
    //        break;
    //    }
    //}

    //if (IndexNumber == 4) {
    //    printf("실패하셨습니다.. 정답은 %d입니다.. ", RandomNumber);
    //}


// 4. 공포 게임의 인벤토리를 비트 플래그로 표현하기
//    - 아이템 종류를 나타내는 enum을 만들고 
//    - 특정 아이템을 추가하고 삭제하는 예시 보여주기 

//    enum Inventory {
//    
//        Flashlight  = 0b0001,
//        Doll        = 0b0010,
//        Bone        = 0b0100,
//        Key         = 0b1000
//    
//    };
//
//    int Inventory = 0;
//
//    int UserInput;
//
//    do {
//        printf("\n어떤 걸 주우시겠습니까? ([1]손전등, [2]인형, [3]뼈다귀, [4]열쇠 / 게임을 그만두려면 [0]) ");
//        std::cin >> UserInput;
//
//        int FlagEvent = 1 << (UserInput - 1);
//        Inventory = Inventory | FlagEvent;
//
//        printf("%d", Inventory);
//
//        printf("물건을 버리겠습니다.");
//        std::cin >> UserInput;
//
//
//    } while (UserInput != 0);


/*
    주사위 게임 만들기

    초기 세팅
    플레이어와 컴퓨터 모두 일정 금액(예: 10000원)으로 시작한다.

    1차 주사위 굴리기
    게임 시작 시, 플레이어와 컴퓨터가 각각 주사위(1~6)를 한 번 굴린다.
    각자 주사위 결과를 공개한다.

    배팅
    이전 판에서 진 쪽이 배팅 금액을 제시한다. // 처음엔 유저가 배팅 하기로 정함
    제시한 배팅 금액은 두 사람 모두의 현재 소지 금액 이하이어야 한다.
    배팅 금액은 두 사람 모두에게서 차감된다.

    2차 주사위 굴리기
    다시 플레이어와 컴퓨터가 각각 주사위를 한 번씩 굴린다.
    (1차 + 2차) 주사위의 합을 계산한다.

    승패 판정 및 금액 증감
    합이 더 큰 쪽이 배팅 금액의 총합(즉, 2×배팅금액)을 모두 가져간다.
    동점일 경우 배팅 금액은 그대로 반환한다.

    다음 판 진행
    소지금이 0 이하인 쪽이 나오면 게임 종료.
*/

    int PlayerMoney = 10000, ComputerMoney = 10000;
    int PlayerDice, ComputerDice;
    int SumPlayerDice = 0, SumComputerDice = 0;
    int BettingMoney, MinMoney, RoundCount = 1;

    int WinOrLose = 0;

    srand(time(0));
    while (PlayerMoney != 0 && ComputerMoney != 0)
    {
        printf("주사위를 굴려주세요. (1 ~ 6)\n\n");
        SumPlayerDice += (PlayerDice = rand() % 6 + 1);
        SumComputerDice += (ComputerDice = rand() % 6 + 1);

        printf("플레이어 : %d, 컴퓨터 : %d\n\n", PlayerDice, ComputerDice);

        if (PlayerMoney > ComputerMoney) {
            MinMoney = ComputerMoney;
        }
        else {
            MinMoney = PlayerMoney;
        }

        if (WinOrLose == 0) {
            do {
                printf("플레이어의 배팅 차례입니다. 원하는 금액을 입력해주세요. ");
                std::cin >> BettingMoney;
            } while (BettingMoney > MinMoney);
        }
        else {
            BettingMoney = rand() % MinMoney + 1;
        }
        PlayerMoney -= BettingMoney;
        ComputerMoney -= BettingMoney;
        printf("배팅 금액은 %d입니다.\n각 플레이어의 남은 금액은 플레이어 : %d, 컴퓨터 : %d입니다.\n\n", BettingMoney, PlayerMoney, ComputerMoney);
        printf("주사위를 굴려주세요. (1 ~ 6)\n");
        SumPlayerDice += (PlayerDice = rand() % 6 + 1);
        SumComputerDice += (ComputerDice = rand() % 6 + 1);
        printf("플레이어 : %d, 컴퓨터 : %d\n\n", PlayerDice, ComputerDice);

        if (SumPlayerDice > SumComputerDice) {
            printf("플레이어 : %d, 컴퓨터 : %d로 플레이어의 승리입니다.\n\n", SumPlayerDice, SumComputerDice);
            PlayerMoney += BettingMoney * 2;
            WinOrLose = 1;
            SumPlayerDice = 0;
            SumComputerDice = 0;
        }
        else if (SumPlayerDice < SumComputerDice) {
            printf("플레이어 : %d, 컴퓨터 : %d로 컴퓨터의 승리입니다.\n\n", SumPlayerDice, SumComputerDice);
            ComputerMoney += BettingMoney * 2;
            WinOrLose = 0;
            SumPlayerDice = 0;
            SumComputerDice = 0;
        }
        else {
            printf("플레이어 : %d, 컴퓨터 : %d로 비겼습니다.\n\n", SumPlayerDice, SumComputerDice);
            PlayerMoney += BettingMoney;
            ComputerMoney += BettingMoney;
            WinOrLose = rand() % 2;
            SumPlayerDice = 0;
            SumComputerDice = 0;
        }

        printf("%d번째 판, 각 플레이어의 남은 금액은 플레이어 : %d, 컴퓨터 : %d입니다.\n\n", RoundCount++, PlayerMoney, ComputerMoney);
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


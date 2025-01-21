//baekjoon 1264 모음의 개수 25.1.22.
#include <stdio.h>
#include <string.h> // strcspn 함수 사용을 위해 추가

int main(void) {
    char arr[257]; //글자의 개수 255 + NULL + \n -> 255+1+1=257
     int count = 0;  // 모음의 개수를 저장할 변수
    while (1) {
       
        
        // 입력받기 (fgets 사용)
        fgets(arr,sizeof arr,stdin);
        
        if (arr[0] == '#') // 입력이 '#'이면 종료
            break;
        
        // 모음 개수 세기
        for (int i = 0; arr[i] != '\0'; i++) {
            if (arr[i] == 'a' || arr[i] == 'A' ||
                arr[i] == 'e' || arr[i] == 'E' ||
                arr[i] == 'i' || arr[i] == 'I' ||
                arr[i] == 'o' || arr[i] == 'O' ||
                arr[i] == 'u' || arr[i] == 'U') {
                count++;
            }
        }
        printf("%d\n", count); // 모음 개수 출력
        count=0;
    }
    return 0;
}

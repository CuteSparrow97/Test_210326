#include <iostream>
using namespace std;
/*
	화면(콘솔창)에 문자를 출력하기 위해서는 콘솔 출력 명령어인 cout(Console Output)을 사용해야함.
	그런데 이 cout명령어는 iostream이라는 헤더파일 안에 std 라는 네임 스페이스 안에 들어있습니다.
	따라서 cout을 사용하기 위해서는 우선적으로 iostream 파일을 포함시키고,
	std 네임스페이스를 사용하겠다는 선언을 해주어야 합니다.
*/

void main()
{
	cout << "Hello World!!";	// Hello world!를 출력
	cout << endl;				// 개행 (줄바꿈)
	cout << "Hello" << " World2";

}
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Password {
  public:
    char password[10];
    Password();
    int menu();
    void passwordding();
    void passwordSet();
    void passwordChange();
};

Password::Password() {
  strcpy(password, "");
  menu();
};

int Password::menu() {
  char menuing;
  cout << "------ 비밀번호 관리 시스템 ------" << endl;
  cout << "[1: 비밀번호 대조, 2: 비밀번호 세팅, 3: 비밀번호 변경, 4: 프로그램 종료]" << endl;
  while (true) {
    cout << "\n매뉴를 선택 해주세요. : ";
    cin >> menuing;
      switch (menuing) {
      case '1':
        cout << "\n[비밀번호 대조]\n" << endl;
        passwordding();
        break;
      case '2':
        cout << "\n[비밀번호 세팅]\n" << endl;
        passwordSet();
        break;
      case '3':
        cout << "\n[비밀번호 변경]\n" << endl;
        passwordChange();
        break;
      case '4':
        cout << "\n[프로그램을 종료]\n" << endl;
        return 0;
      default:
        cout << "\n!!! 옳지않은 요청입니다.\n" << endl;
        break;
    }
  }
}

void Password::passwordding() {
  char password_hash[10];
  if(strcmp(password, "") == 0) {
    passwordSet();
  } else {
    while(true) {
    cout << "PASSWORD 입력하세요. : ";
    cin >> password_hash;
    if(strcmp(password, password_hash) == 0) {
      cout << "비밀번호가 일치합니다.~~~~~~~~~" << endl;
      break;
    } else {
      cout << "비밀번호가 일치하지 않습니다. ㅠㅠ" << endl;
    }
  }
  }
}

void Password::passwordSet() {
  if(strcmp(password, "") == 0) {
    cout << "비밀번호가 설정되어 있지 않아, 새로운 비밀번호를 설정합니다." << endl;
    cout << "사용하실 비밀번호를 입력해 주세요 : ";
    cin >> password;
    cout << "\n비밀번호를 정상적으로 설정 하였습니다." << endl;
  } else {
    cout << "비밀번호 설정되어 있어, 이전화면으로 돌아갑니다." << endl;
  }
}

void Password::passwordChange() {
  if(strcmp(password, "") == 0) {
    passwordSet();
  } else {
    passwordding();
    cout << "변경할 비밀번호를 입력해주세요 : ";
    cin >> password;
    cout << "정상적으로 비밀번호가 변경되었습니다." << endl;
  }
}

int main() {
  Password();
}
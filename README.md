# Study_TCPIP
TcpIp 학습 리포지토리

## 1일차
- 네트워크 프로그래밍 학습
- 소켓 통신에 관한 개념 학습
  - Linux 환경에서의 Server - Client 통신
  - 저 수준 파일 입출력과 파일 디스크립터 학습
  - Linux와 Window 간의 소켓 통신 학습
- TCP 통신과 UDP 통신의 차이 학습
- IP주소와 PORT번호 학습

## 2일차
- IPv4 기반의 주소표현을 위한 구조체 이해
  - sockaddr_in 구조체의 멤버에 대한 분석
- 바이트 순서와 네트워크 바이트 순서의 이해
  - 빅 엔디안 바이트 표현과 리틀 엔디안 바이트 표현 학습
  - 바이트 순서의 변환 학습
- 인터넷 주소의 초기화와 할당
  - inet_addr, inet_aton, inet_ntoa 함수의 이해
  - INADDR_ANY 상수를 통한 주소 정보 초기화 학습
- TCP 기반 서버, 클라이언트 구현
  - Iterative 에코 서버, 에코 클라이언트 구현
  - vmnetcfg 설정 및 VMWare 가상 머신을 통한 Linux 환경에서의 타 PC와의 TCP 통신
  
## 3일차
- TCP 기반 서버, 클라이언트 구현(응용)
  - 서버가 연산을 하여 결과를 리턴하는 계산기 시스템 구현
- TCP 통신 이론 학습
  - Three-way handshaking을 통한 상태 소켓과의 연결 이론 이해
  - ACK 메시지와 패킷의 SEQ를 통한 상대 소켓과의 데이터 송수신 이론 이해
  - Four-way handshaking을 통한 상대 소켓과의 연결 종료 이론 이해
- UDP 기반 서버, 클라이언트 구현
  - Iterative 에코 서버, 에코 클라이언트 구현
  - vmnetcfg 설정 및 VMWare 가상 머신을 통한 Linux 환경에서의 타 PC와의 UDP 통신
- UDP의 데이터 송수신 특성
  - 데이터의 경계(Datagram)가 존재하는 UDP 소켓의 송수신 프로세스 이해
  
## 4일차
- connected UDP 소켓의 개념 학습
- Half-close의 필요성에 대한 학습
  - shutdown(int sock, int howto) 함수 이해
  - Half-close 기반의 파일 전송 시스템 구현
- DNS 서버에 대한 학습
  - 도메인 이름으로 IP주소 얻기
  - IP주소로 도메인 정보 얻기
- 소켓 옵션과 입출력 버퍼의 크기 학습()
  - SO_TYPE을 통해 TCP 소켓 및 UDP 소켓 타입 확인
  - SO_SNDBUF & SO_RCVBUF 크기 확인 및 설정
- 주소 할당 에러 발생에 대한 이론 이해
  - Time-wait 상태 및 주소의 재할당 학습
- Nagle 알고리즘 이론 이해

## 5일차
- 다중접속 서버의 구현 방법들 학습
  - 멀티프로세스 기반 서버 : 다수의 프로세스를 생성하는 방식
  - 멀티프렉싱 기반 서버 : 입출력 대상을 묶어서 관리하는 방식
  - 멀티쓰레딩 기반 서버 : 클라이언트의 수 만큼 쓰레드를 생성하는 방식
- fork 함수를 통한 프로세스 생성의 이해
- 좀비 프로세스의 생성 이유 학습
  - wait 함수를 이용한 좀비 프로세스 소멸
  - waitpid 함수를 이용한 좀비 프로세스 소멸
- 시그널 핸들링의 이해
  - signal 함수를 이용한 시그널 핸들링
  - sigaction 함수를 이용한 시그널 핸들링
- 시그널 핸들링을 통한 좀비 프로세스의 소멸
- fork 함수의 응용
  - fork 함수 호출을 통한 다중접속 에코 서버 구현
  - fork 함수 호출을 통한 입출력 루틴 분할 클라이언트 구현
- 프로세스간 통신(IPC)의 기본 이해
  - 파이프 기반의 프로세스간 통신 구현
 

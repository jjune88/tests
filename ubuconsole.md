# 우분투 16.04 콘솔로 접속하기
## UBUNTU 16.04 기준

> /etc/default/grub
>> vi로 위의 경로를 실행하고 아래와같은 내용을 넣어준다
-----------------------------------------------------------------
* GRUB_CMDLINE_LINUX_DEFAULT="console=ttyS0" 
* GRUB_TERMINAL=serial
* GRUB_SERIAL_COMMAND="serial --unit=0 --speed=115200 --stop=1"
-----------------------------------------------------------------
 - 위내용처럼  console=ttyS0 직렬포트에 연결하게 설정
* 이 내용을 다 넣어주면 커맨드창에 "update-grub" 입력해준다
-----------------------------------------------------------------
* 재부팅후 가상네트워크를 추가 해줍니다. 
* vm 머신의 우측 클릭 열기를 누르면 running이 아닌 vm 이 열립니다.
* 상단에 i 표시로 되어 있는 파일을 누르고 왼쪽 하단에 하드웨어 추가를 누릅니다.
* 그리고 가상네트워크를 하나 추가 해줍니다. 여기서 장치모델만 virtio로 설정하고
* 완료를 누르고 터미널을 실행합니다.
* comandline "virsh start vm 인스턴스이름 " 필자의 vm 인스턴스는 vm 이니 "virsh start vm" 으로 진행
  	본인의 버추얼머신을 모르겠다면 "virsh list --all" 로 확인
* 시작이되면 터미널 창에서 "virsh console 인스턴스 네임"을 적는다.  "virsh console vm" 진행
------------------------------------------------------------------

* 만약 콘솔이 실행되고 있는것이 있어 실행되지 않는다고 하면 재부팅 또는 
* sudo service libvirt-bin restart 커맨드 진행 후
* vm 재접속을 진행하면 시리얼 접속이 완료될것이다.


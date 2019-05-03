# 가상머신에 콘솔로 접속하기
## virsh 

> Centos7 버전 기준
>> /etc/default/grub
* Centos 7의 경우는 grub2 를 채택하고 있어 공통적인 옵션들은'/etc/default/grub'파일에 있습니다.
* 이 파일을 편집해 줍니다.

* GRUB_TIMEOUT=5
* GRUB_DEFAULT=saved
* GRUB_DISABLE_SUBMENU=true
* GRUB_TERMINAL_OUTPUT="console"
* GRUB_CMDLINE_LINUX="crashkernel=auto rhgb quiet console=ttyS0"
* GRUB_DISABLE_RECOVERY="true"
----------------------------------------------------------------
* 이렇게 하고 grub2를 다음과 같이 갱신해 줍니다.
* grub2-mkconfig -O /bootgrub2/grub.cfg 입력해주고 
* 가상머신을 종료합니다. 

* 재부팅후 가상네트워크를 추가 해줍니다. 
* vm 머신의 우측 클릭 열기를 누르면 running이 아닌 vm 이 열립니다.
* 상단에 i 표시로 되어 있는 파일을 누르고 왼쪽 하단에 하드웨어 추가를 누릅니다.
* 그리고 가상네트워크를 하나 추가 해줍니다. 여기서 장치모델만 virtio로 설정하고
* 완료를 누르고 터미널을 실행합니다.
* comandline "virsh start vm 인스턴스이름 " 필자의 vm 인스턴스는 vm 이니 "virsh start vm" 으로 진행
  	본인의 버추얼머신을 모르겠다면 "virsh list --all" 로 확인
* 시작이되면 터미널 창에서 "virsh console 인스턴스 네임"을 적는다.  "virsh console vm" 진행




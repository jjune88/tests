# virt-install Centos+ubuntu
###  준비사항
#### 실행OS 우분투18.04.2 LTS
> KVM 설치 
>> sudo apt update
>> sudo apt install qemu qemu-kvm libvir-bin bridge-utils virt-manger

* qemu-kvm : KVM 패키지
* libvirt-bin : VM들을 다루기 위한 툴
* ubuntu-vm-builder : 터미널 환경에서 VM 이미지를 생성하기 위한 패키지
* virt-manager : UI 환경에서 VM 이미지를 생성하기 위한 패키지
* qemu-system : 이미지 생성할 때 필요
* bridge-utils : VM 네트워크 사용을 위해 Virtual Bridge를 사용하는데 이를 다루는 패키지

> KVM에 설치할 os목록
* Ubuntu 16.04.6-server-amd64.iso 이미지
* [우분투다운](https://www.ubuntu.com/download/alternative-downloads)
* CentOS-7-x86_64-DVD-1810.iso 이미지
* [Centos다운](http://isoredirect.centos.org/centos/7/isos/x86_64/CentOS-7-x86_64-DVD-1810.iso)

## virt-install을 이용한 설치법 
### command line
> virt-install --name vm \
 --os-type=Linux \
 --memory=2048 \
 --vcpus 2 \ 
 --disk size=10 \
 --graphics none \
 --location /home/june/Downloads/CentOS-7-x86_64-DVD-1810.iso \
 --extra-args console=ttyS0 \
 --debug

### command line 설명
> virt-install --name vm \
>> 새로운 가상 머신을 만들고 이름은 vm 으로 정하겠다

> --os-type=Linux \
>> os 버전은 리눅스라고 지칭

> --memory=2048 \
>> 가상머신의 메모리는 2G 램으로 지정하겠다 뒤쪽 단위는 MB가 자동으로 잡힌다

> --vcpus 2 \
>> 가상머신의 CPU 할당은 2 개로 하겠다.

> --disk size=10 \
>> disk 크기는 10GB로 하겠다. 숫자만 적으면 GB로 잡힌다 

> --graphics none \
>> 그래픽을 사용하지 않겠다. text로 보겠다.

> --location /home/june/Downloads/CentOS-7-x86_64-DVD-1810.iso \
>> 이미지를 불러오는 경로를 지정한다.

> --extra-args console=ttyS0 \
>> 부팅시 커널에 인식시킬 파라미터 설정 VM의 시리얼 포트 접속을 위한 옵션을 지정

> --debug
>> 디버깅 정보 인쇄



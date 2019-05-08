#  make 란? 

* 규모가 큰 프로그램의 컴파일을 위한 도구
* 많은 수의 소스로 구성된 프로그램
* 사용자와 시스템에 따라 다양한 컴파일 옵션이 필요한 프로그램

## Makefile 

+ 컴파일의 조건과정 빌드 규칙을 기술해 놓은 파일 

+ 소스 파일들 간의 종속성 `(dependency)`에 따라
  - make가 자동적으로 파악해서 효율적인 컴파일을 수행 `(큰규모의 작업을 할때 유용)` 
+ 소스 컴파일 이외의 작업도 기술 가능하다
  - 같은 셸 스크립트이지만 상황에 따라 다르게 동작하게 할수 있다. 

## make 기본사용법

* make` [-f makefile 파일명] [option] [targets]
 - 별도의 makefile 파일을 지정하지 않으면 현재 폴더의 Makefile을 사용한다.
 - 타겟을 지정하지 않으면 all 타겟을 빌드 한다. 
 - 만들어질것 : 필요한것
        실행명령줄



## make의 기본구성
 - 타겟`target` : 종속성목록 `dependencies`
   `tab` 셸 명령어
 - 매크로의 정의 : 매크로 이름 = 값 
 - 매크로 사용 : `$(매크로이름)`, `${매크로이름}`
 - `#` 으로 시작하는 행은 주석 코멘트



### make 정리


* make 란 컴파일 과정을 나타내는 쉘명령어들로 구성
 - 그쉘을 무조건 실행하는 것이 아니라 어떤 조건이 만족하면 실행
 - 이 조건은 target으로 그룹을 지정해주고 종속성에는 파일을 나열한다 

## make 실행예제
### 목표~ hello.c hello.h main.c 세파일을 만들어서 make로 구현

- vi 편집기를 이용하여 hello.c 파일을 만든다. ``` vi hello.c```
- hello.c 파일의 내용은 아래와 같다. 
``` #include <stdio.h>

int print_hello(void)
{
	printf("hello \n");
	return 0;
}
```
- vi 편집기를 이용해서 hello.h 헤더파일을 하나 만든다. ```vi hello.h```
- hello.h 파일의 내용은 아래와 같다. 
```#ifndef HELLO_H
#define HELLO_H_

int print_hello(void);

#endif
```  
- vi 편집기를 이용해서 main.c 파일을 만든다. ```vi main.c```
- main.c 파일의 내용은 아래와 같다.
```
#include "hello.h"

int main(void)
{

	print_hello();
}
```

> 세개의 파일 hello.c hello.h main.c 중에 .c로 되어 있는 hello.c 와 main.c의 목적 파일을 생성한다.
>> ```gcc -c hello.c```
>> ```gcc -c main.c```
* 명령어 설명  gcc 컴파일 -c 기계언어로 hello.c 파일참조
* 위 명령어 진행하면 hello.o , main.o 두개의 오브젝트파일인 목적파일이 생성된다.
==
### make 파일 생성한다.

> ```vim Makefile```일 생성한다. m은 대체로 대문자M으로 하는게 좋다고 한다. 
* 파일 내용은 아래와 같다.
```
all : hello


hello.o : hello.c
	gcc -c hello.c

main.o : main.c hello.h
	gcc -c main.c

hello : hello.o main.o
	gcc -o hello hello.o main.o

clean : 
	rm *.o
	rm hello
```
* 만들어질것 : 필요한것
        실행명령줄

* 내용을 다 기입하고 ```make``` 만 입력하더라도 hello 파일이 생성된다. 
* ```make clean``` 하게 되면 오브젝트 파일과 hello 파일이 삭제 됨








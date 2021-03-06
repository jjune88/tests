# 마크다운 사용법
> 글머리 크기 설정 
*  글머리는1~6까지만 지원
```
## 제목 2
###### 제목 6단계 까지 설정 가능
```
------------------------------------------------------
# 목록 
1. 순서가 필요한 목록 앞에 숫자와 점을  붙이면 됩니다.
* ```1.``` 일번
* ```2.``` 이번
* ```3.``` 삼번

1. 일번
2. 이번
3. 삼번

- 순서가 필요하지 않은 목록 (서브)  - 를 넣고 텍스트 진행

- 순서가 필요하지 않은 목록에 사용 가능한 기호
	```- 대쉬 , * 별표 , + 더하기```
- 대쉬 사용했을때
* 별표 사용했을때
+ 더하기 사용했을때
-------------------------------------------------------
# 링크 사용
* [google] (https://google.com)
```
[    ] 안에 링크 이름 (     ) 안에 링크주소
```
--------------------------------------------------------
* 구글 홈페이지:<https://google.com>
```
구글 홈페이지:<https://google.com>
```
* URL이나 꺽쇠 괄고 <> 안에 URL입력하면 자동으로 링크를 사용
--------------------------------------------------------

# 이미지 
* 링크와 비슷한데 ! 가 붙습니다.
* []안에 대체 텍스트 입력 ()이미지 주소입력 "링크설명"작성
``` 
![me](https://github.com/jjune88/tests/blob/master/june.png)
```
![me](https://github.com/jjune88/tests/blob/master/june.png)
* 사이즈 조절 기능 없음 ```<img width="" height=""></img>```사용한다
----
# 표(table)
* table 태그로 변환됩니다.
* 헤더 셀을 구분할 때 3개 이상의 -(hyphen/dash) 기호가 필요합니다.
* 헤더 셀을 구분하면서 :(Colons) 기호로 셀(열/칸) 안에 내용을 정렬할 수 있습니다.
* 가장 좌측과 가장 우측에 있는 |(vertical bar) 기호는 생략 가능합니다.


| 값 | 의미 | 기본값 |
|---|:---:|---:|
| `static` | 유형(기준) 없음 / 배치 불가능 | `static` |
| `relative` | 요소 자신을 기준으로 배치 |  |
| `absolute` | 위치 상 부모(조상)요소를 기준으로 배치 |  |
| `fixed` | 브라우저 창을 기준으로 배치 |  |

값 | 의미 | 기본값
---|:---:|---:
`static` | 유형(기준) 없음 / 배치 불가능 | `static`
`relative` | 요소 **자신**을 기준으로 배치 |
`absolute` | 위치 상 **_부모_(조상)요소**를 기준으로 배치 |
`fixed` | **브라우저 창**을 기준으로 배치 |
 
----
# 블럭 인용문

```
> 이렇게 사용하는거다
```
```
>> 이렇게 
```
```
>>> 이렇게
```
> 이렇게 사용하는거다
>> 이렇게
>>> 이렇게 









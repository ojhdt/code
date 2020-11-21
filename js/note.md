### 鼠标事件

- onClick
- onMouseOver
- onMouseOut

### 函数
```
function Hello(a){};
var Hello = function(a){} = var Hello = () => {}
```

### 对象

#### alert()

#### confirm()

#### promopt()

输入内容
```
var answerm= prompt("What is the full name", "John");
```

#### getElementById()

操作其他对象
属性： `innerHTML()`

#### location

|属性|内容|
|-|-|
|location.href|全链|
|location.protocol|http:|
|location.host|域名+端口|
|location.hostname|域名|
|location.port|端口|
|location.pathname|文件目录|
|location.search|?section=435|
|location.hash|#list|

>`location.reload` 刷新

#### Date
```
var mydate = new Date  //获取当前
```
- mydate.getFullYear()
- mydate.getMonth()
- mydate.getDate()
- mydate.getDay()
- mydate.getHours()
- mydate.getMinutes()
- mydate.getSeconds()

指定日期`new Date(year,month,day,hours,minutes,seconds,milliseconds`
```
var mydate = new Date("October 2, 1995 10:57:22")
```

中途改变 `mydate.setDate()`

#### Math

|方法|描述|
|-|-|
|Math.ceil(n)|向上取整|
|Math.floor(n)|向下取整|
|Math.max(a,b,...)|取最大|
|Math.min(a,b,...)|取最小|
|Math.round(n)|四舍五入取整|
|Math.random|0或1|

>随机取整可 Math.round(Math.random() * x)

#### with
所有方法自动补对象名
```
with(Math)
{
    var myRand = random()；
    var biggest = max(a,b,c)
}
```
### 数值处理

#### num

|方法|功能|
|-|-|
|num.toString()|数字/表达式作为字符串返回|
|num.toFixed()|同上，但可输入指定小数位数的参数|
|num.toExponential()|返回指数表示的数字|

#### Number

|方法|功能|
|-|-|
|Number.isNaN()|判断数值/表达式是否为数值，返回布尔值|
|Number.isInteger()|判断是否整数，返回布尔值|
|Number.parseFloat()|强转数值，返回第一个浮点数|
|Number.parseInt()|强转整数，可指定第二参数作为进制基数|
|Number.isFinite()|判断无穷大，返回布尔值|

函数 `Number()` 从其他数据类型尽可能返回数值，无法返回则NaN

#### 布尔值

- 赋布尔值不需要引号
- 计算时true自动转换为1，false转换为0.
- 把非0当true处理，0当false处理
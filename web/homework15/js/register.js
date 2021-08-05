const input1 = document.getElementById('i1')
const input2 = document.getElementById('i2')
const input3 = document.getElementById('i3')
const button1 = document.getElementById('b1')
const button2 = document.getElementById('b2')

function register() {
    console.log("reg", input2.value, input3.value)
    if(input2.value == input3.value && input2.value != '' && input3.value != ''){
        localStorage.setItem('name', input1.value)
        localStorage.setItem('password', input2.value)
        alert('成功注册');
        window.location.href='login.html'
    }else{
        alert('前后输入不一致');
    }
}
function toLogin(){
    window.location.href='login.html'

}
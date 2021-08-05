const input1 = document.getElementById('i1')
const input2 = document.getElementById('i2')
// const input3 = document.getElementById('i3')
const button1 = document.getElementById('b1')
const button2 = document.getElementById('b2')

function toRegister(){
    window.location.href = "register.html";
}

function login(){
    if(localStorage.getItem('name') == input1.value && localStorage.getItem('password') == input2.value){
        alert('成功登录')
        window.location.href = 'index.html'
    }else{
        alert('密码错误')
    }
}
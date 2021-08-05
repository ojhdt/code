function ch() {
    if (sessionStorage.getItem("name")) {

    } else {
        alert("请先登录");
        window.location.href = "login.html";
    }
}
ch()
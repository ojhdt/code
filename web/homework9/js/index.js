var data = [["动作片", "导火线", 50], ["科幻片", "2012", 70], ["战争片", "我是战士", 60]]


//process函数会根据data的数据刷新内容
function process() {
    const table = document.getElementById('table')
    let content = "<tr height='80'><th width='80'><input id='head' type='checkbox' name='head' onchange='selectAll()'> 全选</th><th width='100'>电影类型</th><th width='100'>电影名称</th><th width='50'>价格</th><th width='120'>操作</th></tr>"
    var str = ''
    data.forEach((element, index, array) => {
        str += `<tr height='80'><td><input type='checkbox' name='element${index}' id='element${index}'>选择</td><td>${element[0]}</td><td>${element[1]}</td><td>${element[2]}</td><td><a href='#' onclick='editItem(${index})'>修改</a><a href='#' onclick='deleteItem(${index})'>删除</a></td></tr>`
    })
    table.innerHTML = content + str
}
process()

function selectAll(e) {
    let head = document.getElementById('head')
    // console.log(value, typeof(value))
    for (let i = 0; i < data.length; i++) {
        let str = "element" + i.toString()
        // console.log(str, typeof(str))
        document.getElementById(str).checked = head.checked
    }
}

function deleteItem(e) {
    data.splice(0, 1,)
    process()
}

//用一个for循环执行prompt，修改对应值，全部修改完之后执行process函数重新渲染
//e是从checkbox的ontap事件传递过来的参数，是对应的数组下标
function editItem(e) {
    for(let i = 0; i < data[e].length; i++){
        data[e][i] = window.prompt("请输入内容", '');
    }
    // data[e].forEach((element, index, array) => {
    //     element = window.prompt("请输入内容", '');
    // })
    process()
}
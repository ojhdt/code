var db = [[false, '85687658', 'ss', '男', '20', false], [false, '875758887', 'ddd', '男', '20', false], [false, '78568758', 'dfdf', '女', '23', false]];
const html = document.getElementById('html')
var refresh = () => {
    var h = `<tr>
    <th>选择</th>
    <th style="width: 100px;">学号</th>
    <th>姓名</th>
    <th>性别</th>
    <th>年龄</th>
    <th>操作</th>
</tr>
<tr>
    <td><input type="checkbox" name="" id="c0"></td>
    <td colspan="5">全部选中</td>
</tr>`
    db.forEach((element, index, array) => {
        if (!element[5]) {
            h += `<tr>
            <td><input type='checkbox' id='c${index}' value='${element[0]}'></td>
            <td>${element[1]}</td>
            <td>${element[2]}</td>
            <td>${element[3]}</td>
            <td>${element[4]}</td>
            <td><a href='#' onclick='del(${index})'>删除</a><a href='#' onclick='edit(${index})'>修改</a></td>
        </tr>`
        } else {
            h += `<tr>
            <td><input type='checkbox' id='c${index}' value='${element[0]}'></td>
            <td><input oninput='input(${index},1,self)' class="edit" type='text' value='${element[1]}'></td>
            <td><input oninput='input(${index},2,self)' class="edit" type='text' value='${element[2]}'></td>
            <td><input oninput='input(${index},3,self)' class="edit" type='text' value='${element[3]}'></td>
            <td><input oninput='input(${index},4,self)' class="edit" type='text' value='${element[4]}'></td>
            <td><a href='#' onclick='del(${index})'>删除</a><a href='#' onclick='edit(${index})'>修改</a></td>
        </tr>`
        }
    })
    html.innerHTML = h
};
refresh()
var input = (a,b,value)=>{
    var edits = document.getElementsByClassName('edit')
    db[a][b] = edits[b-1].value
}
var edit = (index) => {
    console.log(index)
    db[index][5] = db[index][5] ? false : true;
    refresh()
};
var del = (index) => {
    console.log(index)
    db.splice(index, 1,);
    refresh()
};
document.getElementById('b1').addEventListener("click", () => {
    let d1 = document.getElementById('i1').value
    let d2 = document.getElementById('i2').value
    let d3 = document.getElementById('i3').checked?'男':'女'
    let d5 = document.getElementById('i5').value

    db.push([false,d1,d2,d3,d5,false])
    console.log("confirm");
    refresh()
});
document.getElementById('b2').addEventListener("click", () => {
    document.getElementById('i1').value = ''
    document.getElementById('i2').value = ''
    document.getElementById('i3').checked = true
    document.getElementById('i5').value = ''
    console.log("reset");
    refresh()
});
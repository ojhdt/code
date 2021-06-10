function submit() {
    let num = document.getElementById('num').value
    let name = document.getElementById('name').value
    let sex = document.getElementById('sex').checked ? '男' : '女'
    let file = document.getElementById('file').files[0].name ? document.getElementById('file').files[0].name : ''
    window.location.href = `get.html?num=${num}&name=${name}&sex=${sex}&file=${file}`
    console.log(file)
}
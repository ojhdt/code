const scale = document.getElementsByClassName('img')[0]
const swiper = document.getElementsByClassName('img_container')[0]
var i = 0
scale.addEventListener("mouseover", () => {
    scale.src = "img/dl1d.jpg"
})

scale.addEventListener("mouseout", () => {
    scale.src = "img/dl1.jpg"
})

setInterval(() => {
    i++;
    console.log(215 * i % 1075)
    swiper.style=`left:-${215 * i % 1075}px;`
}, 1500)

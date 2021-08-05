const button = document.getElementById('button')
const video = document.getElementById('video')
const icon = document.getElementById('icon')
const bar1 = document.getElementById('bar1')
const bar2 = document.getElementById('bar2')
const bar1c = document.getElementById('bar1c')
const bar2c = document.getElementById('bar2c')
const full = document.getElementById('full_screen')
let buttonStatus = false
let iconStatus = false
button.addEventListener('click', () => {
    console.log(button.src)
    if (video.paused) {
        console.log('true')
        video.play()
        button.src = 'source/1x/baseline_pause_black_24dp.png'
        // buttonStatus = true
    } else {
        console.log('false')
        video.pause()
        button.src = 'source/1x/baseline_play_arrow_black_24dp.png'
        // buttonStatus = false
    }
})

icon.addEventListener('click', () => {
    console.log(icon.src)
    if (video.muted == false) {
        console.log('true')
        icon.src = 'source/1x/baseline_volume_off_black_24dp.png'
        video.muted = true
        // iconStatus = true
    } else {
        console.log('false')
        icon.src = 'source/1x/baseline_volume_up_black_24dp.png'
        video.muted = false
        // iconStatus = false
    }
})

bar1.addEventListener('mousedown', (e) => {
    realWidth = e.clientX - bar1.getBoundingClientRect().left;
    bar1c.style = `width:${realWidth}px`
    video.currentTime = video.duration * (realWidth / bar1.offsetWidth);
})

bar2.addEventListener('mousedown', (e) => {
    bar2c.style = `width:${e.clientX - bar2.getBoundingClientRect().left}px`
})

full.addEventListener('click', ()=>{
    // video.requestFullScreen();
    video.webkitRequestFullScreen();
})

video.ontimeupdate = ()=>{
    let scale = video.currentTime/video.duration;
    console.log(scale)
    bar1c.style = `width:${bar1.offsetWidth*scale}px`
}
const navs = document.getElementsByClassName('nav_item');
for(let nav of navs){
    nav.addEventListener("mouseover",() => {
        nav.style="background:#888;";
    })
    nav.addEventListener("mouseout",() => {
        nav.style="";
    })
}

const menus = document.getElementsByClassName('menu_item');
for(let menu of menus){
    menu.addEventListener("mouseover",() => {
        menu.style="background:#aaa;";
    })
    menu.addEventListener("mouseout",() => {
        menu.style="";
    })
}
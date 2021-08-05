const c1 = document.getElementById('c1');
const c2 = document.getElementById('c2');
const c3 = document.getElementById('c3');
const menu = document.getElementById('c');
const trash = document.getElementById('trash');


// document.onmousemove = (e) => {
//     console.log(e);
// };

let menuData = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11];
let c1Data = [];
let c2Data = [];
let c3Data = [];

menu.innerHTML = menuData.map((value) => {
    return `<img class="cuisine" id="${value}" src="imgs/${value}.JPG">`
}).join('');

function refresh() {
    c1.innerHTML = c1Data.map((value) => {
        return `<img class="selected" id="${value}" form="1" src="imgs/${value}.JPG">`
    }).join('');
    c2.innerHTML = c2Data.map((value) => {
        return `<img class="selected" id="${value}" form="2" src="imgs/${value}.JPG">`
    }).join('');
    c3.innerHTML = c3Data.map((value) => {
        return `<img class="selected" id="${value}" form="3" src="imgs/${value}.JPG">`
    }).join('');
};


let cuisines = document.getElementsByClassName('cuisine');
Array.prototype.forEach.call(cuisines, (element) => {
    element.draggable = true;
    element.addEventListener('dragstart', (e) => {
        e.dataTransfer.setData('ID', e.target.id)
        console.log("drag start");
    })
    element.addEventListener('dragend', (e) => {
        console.log("drag end");
    })
    element.addEventListener('drag', (e) => {
        console.log("dragging");
    })

});

function itemAdded(){
    let selecteds = document.getElementsByClassName('selected');
    Array.prototype.forEach.call(selecteds, (element) => {
        element.draggable = true;
        element.addEventListener('dragstart', (e) => {
            e.dataTransfer.setData('ID', e.target.id)
            e.dataTransfer.setData('form', e.target.form)
            console.log("drag start");
        })
        element.addEventListener('dragend', (e) => {
            console.log("drag end");
        })
        element.addEventListener('drag', (e) => {
            console.log("dragging");
        })
    
    });
}

c1.addEventListener('drop', (e) => {
    c1Data.push(e.dataTransfer.getData('ID'))
    refresh();
    itemAdded()
    e.preventDefault();
    console.log("drop in c1")
})
c1.addEventListener('dragenter', (e) => {
    console.log('enter')
    e.preventDefault();
})
c1.addEventListener('dragover', (e) => {
    console.log('over')
    e.preventDefault();
})
c1.addEventListener('dragleave', (e) => {
    console.log('leave')
    e.preventDefault();
})
c2.addEventListener('drop', (e) => {
    c2Data.push(e.dataTransfer.getData('ID'))
    itemAdded()
    refresh()
    e.preventDefault()
    console.log("drop in c2")
})
c2.addEventListener('dragenter', (e) => {
    console.log('enter')
    e.preventDefault();
})
c2.addEventListener('dragover', (e) => {
    console.log('over')
    e.preventDefault();
})
c2.addEventListener('dragleave', (e) => {
    console.log('leave')
    e.preventDefault();
})
c3.addEventListener('drop', (e) => {
    c3Data.push(e.dataTransfer.getData('ID'));
    refresh()
    itemAdded()
    e.preventDefault()
    console.log("drop in c3")
})
c3.addEventListener('dragenter', (e) => {
    console.log('enter')
    e.preventDefault();
})
c3.addEventListener('dragover', (e) => {
    console.log('over')
    e.preventDefault();
})
c3.addEventListener('dragleave', (e) => {
    console.log('leave')
    e.preventDefault();
})
trash.addEventListener('drop', (e) => {
    console.log(e.dataTransfer.getData('form'))
    switch (e.dataTransfer.getData('form')) {
        case 1:
            c1Data.splice(c3Data.indexOf(e.dataTransfer.getData('ID')), 1, )
            break;
        case 2:
            c2Data.splice(c3Data.indexOf(e.dataTransfer.getData('ID')), 1, )
            break;
        case 3:
            c3Data.splice(c3Data.indexOf(e.dataTransfer.getData('ID')), 1, )
            break;
        default:
            break;
    };
    refresh()
    e.preventDefault()
    console.log("drop in trash")
})
trash.addEventListener('dragenter', (e) => {
    console.log('enter')
    e.preventDefault();
})
trash.addEventListener('dragover', (e) => {
    console.log('over')
    e.preventDefault();
})
trash.addEventListener('dragleave', (e) => {
    console.log('leave')
    e.preventDefault();
})

// let cuisines = document.getElementsByClassName('cuisine');
// Array.prototype.forEach.call(cuisines, (element)=>{
//     element.addEventListener('mousedown', ()=>{
//         document.onmousemove = (e) => {
//             let left = e.clientX - element.getBoundingClientRect().left;
//             let top = e.clientY - element.getBoundingClientRect().top
//             console.log(left);
//             console.log(top);
//             element.style.left = `${left}px`;
//             element.style.top = `${top}px`;
//         }
//         console.log("down")
//     })
// });
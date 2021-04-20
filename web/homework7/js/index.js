const btn = document.getElementById('btn');
const sel = document.getElementById('sel');
btn.addEventListener("mouseover", hover);
// btn.addEventListener("mouseout", out)
document.addEventListener("click", out);

function hover(){
    console.log("run");
    sel.style = "display:flex;";
};

function out(){
    console.log("run");
    sel.style = "display:none;";
};
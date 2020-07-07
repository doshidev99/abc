const element = document.getElementById("menuMobile");
const dropDown = () => {
  if (element.classList.contains("d-inline")) {
    element.classList.remove("d-inline");
    element.classList.add("d-none");
  } else {
    element.classList.remove("d-none");
    element.classList.add("d-inline");
  }
};

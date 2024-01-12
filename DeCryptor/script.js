function cripta() {
    testoRaw = document.getElementById("testoRaw").value;

    document.getElementById("testoCifrato").value = CryptoJS.MD5(testoRaw);
}
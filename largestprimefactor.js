let number = 600851475143;
let factor = 2;

while (factor * factor <= number) {

    if (number % factor === 0) {
        number = number / factor;
    } else {
        factor++;
    }
}

console.log(number);

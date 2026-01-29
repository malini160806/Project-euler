let a = 1;
let b = 2;
let sum = 0;

while (b <= 4000000) 
    {
    if (b % 2 === 0) {
        sum += b;
    }
    let next = a + b;
    a = b;
    b = next;
}

console.log(sum);

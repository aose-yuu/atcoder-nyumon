function main() {
  const N = 15;
  for (const n of [...Array(N)].map((_, i) => i + 1)) (!(n % 3)) && (!(n % 5)) ? console.log('FizzBuzz') : (!(n % 5)) ? console.log('Buzz') : (!(n % 3)) ? console.log('Fizz') : console.log(n);
}

main()

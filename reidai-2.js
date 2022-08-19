function main() {
  const lines = '3 4';
  const [a, b] = lines.split(' ');
  const result = a * b;
  result % 2 ? console.log('Odd') : console.log('Even');
}

main()

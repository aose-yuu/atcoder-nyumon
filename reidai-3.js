function main() {
  const lines = '10 4';
  const [H, A] = lines.split(' ');
  const result = Math.ceil(H / A);
  console.log(result);
}

main()

function main() {
  const lines = '7 500 600';
  const [K, A, B] = lines.split(' ');
  const result = Math.floor(B / K) - Math.floor(A / K);
  console.log(result >= 1 ? "OK" : "NG");
}

main()

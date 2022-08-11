# compilerbook

for docker
```bash
docker run --platform linux/amd64 -it -v /$(pwd):/home/user linnefromice/sandbox-c-compiler bash
```

for step1
```bash
$ cc -o 9cc 9cc.c
$ ./9cc 123 > tmp.s
$ cc -o tmp tmp.s
$ ./tmp
$ echo $?
# -> 123
```

for step3
```bash
cc -o 9cc 9cc.c
./9cc "1 + 23 + 5 - 9" > tmp.s
cc -o tmp tmp.s
./tmp
echo $?
# 20
```

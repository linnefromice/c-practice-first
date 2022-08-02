# compilerbook

for docker
```bash
docker run --platform linux/amd64 -it -v /$(pwd):/home/user linnefromice/sandbox-c-compiler bash
```

for step1
```bash
$ ./9cc 123 > tmp.s
$ cc -o tmp tmp.s
$ ./tmp
$ echo $?
# -> 123
```

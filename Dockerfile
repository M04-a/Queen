FROM gcc:latest
WORKDIR /usr/src/regine
COPY regine.c .
RUN gcc -o regine regine.c -lstdc++
CMD ["./regine"]

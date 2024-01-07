FROM gcc:latest
WORKDIR /usr/src/Queens
COPY Queens.c .
RUN gcc -o Queens Queens.c -lstdc++
CMD ["./Queens"]
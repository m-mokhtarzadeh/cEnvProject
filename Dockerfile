FROM gcc:latest as build
COPY . /usr/src/
RUN gcc -static /usr/src/main.c -o /usr/src/sleep

FROM scratch
COPY --from=build /usr/src/sleep /sleep
ENV SLEEP_TIME=10
ENTRYPOINT ["/sleep"]

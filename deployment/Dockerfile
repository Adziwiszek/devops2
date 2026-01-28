FROM gcc:13 AS builder

WORKDIR /app

COPY . .
RUN cmake -S . -B build \
 && cmake --build build

FROM debian:bookworm-slim

WORKDIR /app

COPY --from=builder /app/build/src/calculator_app .

CMD ["sleep", "300"]


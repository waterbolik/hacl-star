all: Chacha20.result

Chacha20.z3: Chacha20.smt2
	z3 -smt2 Chacha20.smt2 | tee  Chacha20.z3 | grep -B1 sat

Chacha20.cvc4: Chacha20.smt2
	cvc4 --lang smt2 Chacha20.smt2 | tee  Chacha20.cvc4 | grep -B1 sat

clean:
	rm -f *~ *.result


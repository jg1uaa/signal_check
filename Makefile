signal_check: signal_check.cpp
	$(CXX) -Wall -O2 $< -o $@

clean:
	rm -rf signal_check

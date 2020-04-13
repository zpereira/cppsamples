#include<iostream>
#include<unistd.h>
#include<cstdlib>
#include<signal.h>

void signal_callback_handler(int signum){
	std::cout << "Signal caught Ctrl+c" << std::endl;
	exit(signum);
}

int main(){
	// Starting an infinite loop for dashboad info
	signal(SIGINT, signal_callback_handler);
	while(true){
		std::cout << "HEADER" << std::endl;
		sleep(1);
	}// End of infinite dashboard loop.
	return EXIT_SUCCESS;
}// End of main()

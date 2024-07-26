#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>

void save_virtual_machine(char *name){
	std::ostringstream oss {};
	oss << "sudo virsh save " << name << " " << name << ".saved";
	std::cout << "Saving " << name << "...\n";
	system(oss.str().c_str());
}

void restore_virtual_machine(char *name){
	std::ostringstream oss {};
	oss << "sudo virsh restore " << name << " " << name << ".saved";
	std::cout << "Restoring " << name << "...\n";
	system(oss.str().c_str());
}

int main(int argc, char *argv[]){
	
	if(argv[1] == "--save" || argv[1] == "-s")
		save_virtual_machine(argv[2]);
	else if (argv[1] == "--restore" || argv[1] == "-r")
		restore_virtual_machine(argv[2]);
	else std::cout << "Please choose either the save or restore option" << std::endl;
	return 0;
}

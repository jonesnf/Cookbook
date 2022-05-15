#include <stdio.h>
#include <pcap.h>


int main(int argc, char *argv[])
{
	pcap_if_t *devs;
	int fnd = 0;
	char err_buff[PCAP_ERRBUF_SIZE];


	fnd = pcap_findalldevs(&devs, err_buff);
	if(fnd != 0) {
		printf("[ERROR] Trouble finding device: %s\n", err_buff);
		return 1;
	}
	if(devs->name == NULL) {
		printf("[ERROR] Trouble finding device: %s\n", err_buff);
		return 1;
	}

	printf("[INFO] Network device found: %s\n", devs->name);
	return 0;
}

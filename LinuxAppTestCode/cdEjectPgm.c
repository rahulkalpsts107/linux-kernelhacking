#include  <linux/cdrom.h> 
#include  <sys/ioctl.h>
#include  <fcntl.h> 
int main(int argc ,char **av)
{
	int status;
	/* Open a file descriptor to the device specified on the command line.  */ 
	int fd = open ("/dev/cdrom", O_RDONLY| O_NONBLOCK); 
	/* Eject the CD-ROM.  */ 
	ioctl(fd, CDROMEJECT,0);
	/* Close the file descriptor.  */ 
	close  (fd); 
	return 0;
}

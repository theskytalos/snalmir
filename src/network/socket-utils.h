#ifndef __SOCKET_UTILS_H__
#define __SOCKET_UTILS_H__

#define INITCODE		0x1F11F311 /* ? */
#define MAX_MESSAGE_SIZE        20000

#include <stdbool.h>

void	refresh_recv_buffer(int);
void	refresh_send_buffer(int);

unsigned char	*read_client_message(int);
bool		add_client_message(unsigned char *, size_t, int);
bool		receive(int);
bool 		send_one_message(unsigned char*, size_t, int);
bool		send_all_messages(int);

#endif
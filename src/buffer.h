#ifndef BUFFER_H
#define BUFFER_H

typedef struct buffer{
	struct buffer *next;
	struct buffer *prev;

	int cur_line;
	int num_chars;
	int curX;
	char *line;

} buffer;

#endif
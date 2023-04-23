all:
	$(CC) $(CFLAGS) $(LDFLAGS) -o buf buf.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o cwritesafe cwritesafe.c


struct options {
	int start;		/* start order */
	int amplify;		/* amplification factor */
	int freq;		/* sampling rate */
	int format;		/* sample format */
	int time;		/* max. replay time */
	int mix;		/* channel separation */
	int loop;		/* loop module */
	int random;		/* play in random order */
	int load_only;		/* load module and exit */
	int verbose;
	int silent;		/* silent output */
	char *out_file;		/* output file name */
	char *ins_path;		/* instrument path */
	char mute[XMP_MAX_CHANNELS];
};

struct control {
	int skip;
	int loop;
	int pause;
	int display;
};


/* option */
void get_options(int, char **, struct options *);

/* terminal */
int set_tty(void);
int reset_tty(void);

/* info */
void info_mod(struct xmp_module_info *);
void info_frame(struct xmp_module_info *, struct control *, int);
void info_instruments_compact(struct xmp_module_info *);
void info_help(void);

/* commands */
void read_command(xmp_context, struct control *);

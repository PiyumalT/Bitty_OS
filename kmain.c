

    #include "framebuffer.h"
    #include "serial_port.h"

    
    int kmain()
    {
    char ary[]="OS Started completely";
    char ary2[]="OS Writing completely";
    
    fb_write(ary,sizeof(ary));
    serial_write(0x3F8,ary2,sizeof(ary2));
    return 0;
    }
    


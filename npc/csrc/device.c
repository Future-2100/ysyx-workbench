#include <common.h>

#define IO_SPACE_MAX ( 2 * 1024 * 1024 )

#define PAGE_SHIFT 12
#define PAGE_SIZE (1ul << PAGE_SHIFT)
#define PAGE_MASK (PAGE_SIZE - 1)

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;
static uint8_t *serial_base = NULL;

void init_map() {
    io_space = malloc(IO_SPACE_MAX) ;
    assert(io_space);
    p_space = io_space;
}

uint8_t* new_space(int size) {
    uint8_t *p = p_space;
    size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK ;
    p_space += size;
    assert(p_space - io_space < IO_SPACE_MAX);
    return p ;
}

init_serial() {
    serial_base = new_space(8);
    add_mmio_map("serial", CONFIG_SERIAL_MMIO, serial_base, 8, serial_io_handler);
}

void init_device() {

    init_map();
    
    init_serial();

    init_timer();
}
void pin_low_metal(struct Pin_t p) {
    p.port->BSRR = (uint32_t)p.pin << 16;
}

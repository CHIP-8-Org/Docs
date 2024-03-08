void pin_high_metal(struct Pin_t p) {
    p.port->BSRR = p.pin;
}

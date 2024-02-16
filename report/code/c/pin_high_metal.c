void PIN_HIGH_METAL(struct Pin_t p) {
    p.port->BSRR = p.pin;
}

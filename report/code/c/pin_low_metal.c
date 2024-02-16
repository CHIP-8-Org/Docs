void PIN_LOW_METAL(struct Pin_t p) {
  p.port->BSRR = (uint32_t)p.pin << 16U;
}

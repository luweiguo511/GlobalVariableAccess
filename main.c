extern uint32_t __HeapBase;
extern uint32_t __HeapLimit;

void meminit(void)
{
    uint32_t limit;
    uint32_t base;
    base = (uint32_t)&__HeapBase;
    limit = (uint32_t)&__HeapLimit;
    base++;
    limit++;
}
int main(void)
{
  // Chip errata
  CHIP_Init();
  meminit();
  while (1)
  {
    ;
  }
}

#include <stdio.h>
#include <string.h>

int main() {
    const char *text = "Ващенок Нікіта\n";       
    size_t len = strlen(text);                   
    long total_lines = 1234567;                

    FILE *f = fopen("vaschenok_nikita_1234567.txt", "w");
    if (!f) {
        printf("Ошибка при открытии файла.\n");
        return 1;
    }

    long count = 0;
    for (long i = 0; i < total_lines; i++) {
        fprintf(f, "%s", text);
        count++;
    }

    fclose(f);

    long total_bytes = count * len; 

    printf("Файл создан: vaschenok_nikita_1234567.txt\n");
    printf("Количество строк: %ld\n", count);
    printf("Объём информации в байтах: %ld (~%.2f МБ)\n", total_bytes, total_bytes / 1024.0 / 1024.0);

    return 0;
}

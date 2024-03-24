#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1;

    while (1) {
        FILE *html_file = fopen("file.html", "w");
        FILE *txt_file = fopen("file.txt", "w");
        FILE *py_file = fopen("file.py", "w");

        if (html_file == NULL || txt_file == NULL || py_file == NULL) {
            printf("Unable to create files.\n");
            return 1;
        }

        fprintf(html_file, "<!DOCTYPE html>\n");
        fprintf(html_file, "<html>\n");
        fprintf(html_file, "<head>\n");
        fprintf(html_file, "<title>GO THE HELL</title>\n");
        fprintf(html_file, "<style>body { background-image: url('https://pbs.twimg.com/media/GDvTeA9WwAAgppl?format=jpg&name=large'); background-size: cover; }</style>\n");
        fprintf(html_file, "</head>\n");
        fprintf(html_file, "<body>\n");
        fprintf(html_file, "<h1>GO THE HELL</h1>\n");
        fprintf(html_file, "</body>\n");
        fprintf(html_file, "</html>\n");

        fprintf(txt_file, "GO THE HELL\n");

        fprintf(py_file, "print('GO THE HELL')\n");

        fclose(html_file);
        fclose(txt_file);
        fclose(py_file);

        char open_command[50];
        sprintf(open_command, "start file.html && start notepad file.txt && start python file.py");
        system(open_command);

        printf("Files created and opened.\n");

        i++;
    }

    return 0;
}

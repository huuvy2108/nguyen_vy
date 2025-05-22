#include <stdio.h>
#include <string.h>

typedef struct {
    char light;
    char fan;
    char motor;
} smartHome_t;

const char* data = "HTTP1.1 200 OK{"
"\"light\": \"on\","
"\"fan\" : \"off\","
"\"motor\" : \"off\"}";

char getStatus(const char* data, const char* key) {
	const char* pos = strstr(data, key);
	if (pos != NULL) {
		const char* on_pos = strstr(pos, "on");
		const char* off_pos = strstr(pos, "off");
		if (on_pos != NULL && on_pos < off_pos) {
			return 1;
		}
		else if (off_pos != NULL) {
			return 0;
		}
	}
	return 0;
}

smartHome_t pair_data(const char* data) {
	smartHome_t result;
	result.light = getStatus(data, "\"light\"");
	result.fan = getStatus(data, "\"fan\"");
	result.motor = getStatus(data, "\"motor\"");
	return result;
}

int main() {
	smartHome_t home = pair_data(data);
	printf("Light: %d\n", home.light);
	printf("Fan: %d\n", home.fan);
	printf("Motor: %d\n", home.motor);
	return 0;
}
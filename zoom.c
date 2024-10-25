#include <stdio.h>
#include <stdlib.h>

struct dataSementara
{
    float temperatur;
    float pressure;
    float humidity;
    int status;
};

void displaySensorData(struct dataSementara data) {
    printf("\n=== Sensor Data ===\n");
    printf("Temperatur: %.2f\n", data.temperatur);
    printf("Pressure: %.2f\n", data.pressure);
    printf("Humidity: %.2f\n", data.humidity);
    printf("Status: %s\n", data.status == 0 ? "Normal" : "Warning");
}

int main() {
    struct dataSementara sensor;

    // Input nilai dari pengguna
    printf("Masukkan nilai temperatur: ");
    scanf("%f", &sensor.temperatur);
    
    printf("Masukkan nilai pressure: ");
    scanf("%f", &sensor.pressure);
    
    printf("Masukkan nilai humidity: ");
    scanf("%f", &sensor.humidity);
    
    printf("Masukkan status (0 untuk Normal, 1 untuk Warning): ");
    scanf("%d", &sensor.status);

    // Tampilkan data
    displaySensorData(sensor);
    
    return 0;
}

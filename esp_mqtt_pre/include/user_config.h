#ifndef _USER_CONFIG_H_
#define _USER_CONFIG_H_

#define CFG_HOLDER	0x00FF55A5	/* Change this value to load default configurations */ //0x00FF55A4
#define CFG_LOCATION	0x3C	/* Please don't change or if you know what you doing */
#define CLIENT_SSL_ENABLE

/*DEFAULT CONFIGURATIONS*/

#define MQTT_HOST			"192.168.0.3" //or "mqtt.yourdomain.com"
#define MQTT_PORT			1880
#define MQTT_BUF_SIZE		1024
#define MQTT_KEEPALIVE		120	 /*second*/

#define MQTT_CLIENT_ID		"JAZZ_%08X"
#define MQTT_USER			"administrator"
#define MQTT_PASS			"admin123"

#define STA_SSID "Router01"
#define STA_PASS "CrAcKeR!1990"
#define STA_TYPE AUTH_WPA2_PSK

#define MQTT_RECONNECT_TIMEOUT 	5	/*second*/

#define DEFAULT_SECURITY	0
#define QUEUE_BUFFER_SIZE		 		2048

#endif

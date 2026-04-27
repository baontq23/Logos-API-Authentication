#ifndef APICLIENT_H
#define APICLIENT_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void (^apiclient_callback)(void);
typedef void (^apiclient_dict_callback)(const char* json);

void apiclient_set_token(const char* token);
void apiclient_set_udid(const char* udid);
void apiclient_set_language(const char* language);
void apiclient_set_contact_button_title(const char* title);
void apiclient_set_description(const char* description);
void apiclient_hide_ui(bool isHide);
void apiclient_strict_mode(bool isStrictMode);
void apiclient_silent_mode(bool isSilentMode);
void apiclient_set_window_mode(int mode);

void apiclient_paid(apiclient_callback callback);

const char* apiclient_get_key(void);
const char* apiclient_get_udid(void);
const char* apiclient_get_expired_at(void);
const char* apiclient_get_expired_at_local(void);
const char* apiclient_get_device_model(void);
const char* apiclient_get_login_ip(void);
const char* apiclient_get_package_name(void);
const char* apiclient_get_package_data(const char* key);

void apiclient_on_check_package(apiclient_dict_callback success, apiclient_dict_callback failure);
void apiclient_on_check_device(apiclient_dict_callback success, apiclient_dict_callback failure);
void apiclient_on_login(const char* inputKey, apiclient_dict_callback success, apiclient_dict_callback failure);

#ifdef __cplusplus
}
#endif

#endif

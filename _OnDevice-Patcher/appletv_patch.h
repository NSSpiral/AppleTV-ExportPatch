#ifndef APPLETV_PATCH_H
#define APPLETV_PATCH_H

typedef void (*atv_log_fn)(const char *msg, void *ctx);

int appletv_export_patch(const char *binary_path,
                         atv_log_fn log_fn, void *log_ctx);

#endif

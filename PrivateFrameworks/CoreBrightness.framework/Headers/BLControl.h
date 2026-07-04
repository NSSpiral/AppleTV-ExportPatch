/* Runtime dump - BLControl
 * Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BLControl : NSObject
{
    BOOL AABEnabled;
    struct __IOHIDEventSystemClient * hidSystemClient;
    id aab;
    struct LegacyBacklightC * legacyAutoBacklight;
    id alsNode;
    id driverNode;
    id alsOrientation;
    id alsClient;
    id otherClients;
    unsigned int alsCount;
    unsigned int otherClientsCount;
    id backlight;
    id display;
    unsigned int displayCount;
    NSObject<OS_dispatch_queue> * rootQueue;
    NSObject<OS_dispatch_queue> * queue;
    BOOL aabExist;
    BOOL ignoreBrightnessKey;
    BOOL overrideIgnoreBrightness;
    BOOL ignoreALSEvents;
    id _callback;
    void * _callbackContext;
    BOOL monitorALSOnly;
    BOOL useRootQueue;
}

- (BLControl *)init;
- (void)stop;
- (BOOL)start;
- (void)registerNotificationBlock:(id /* block */)arg0;
- (void *)copyPropertyWithKey:(struct __CFString *)arg0;
- (BOOL)setPropertyWithKey:(struct __CFString *)arg0 property:(void *)arg1;
- (void)callBlockWithProperty:(struct __CFString *)arg0 value:(void *)arg1;
- (struct __CFDictionary *)createDictWithUsagePairPage:(unsigned int)arg0 usage:(unsigned int)arg1;
- (void *)copyBLControlPropertyWithkey:(struct __CFString *)arg0;
- (BOOL)setBLControlPropertyWithKey:(struct __CFString *)arg0 property:(void *)arg1;
- (BOOL)findAlsNodes;
- (int)rootQueuePthreadAttrInit:(struct _opaque_pthread_attr_t *)arg0;
- (BOOL)findBacklight;
- (BOOL)findHIDClients;

@end

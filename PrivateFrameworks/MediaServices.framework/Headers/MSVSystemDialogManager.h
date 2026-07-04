/* Runtime dump - MSVSystemDialogManager
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVSystemDialogManager : NSObject
{
    struct __CFDictionary * _registeredSystemDialogs;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (MSVSystemDialogManager *)sharedManager;

- (void)dealloc;
- (MSVSystemDialogManager *)init;
- (void).cxx_destruct;
- (void)registerSystemDialog:(id)arg0 forUserNotification:(struct __CFUserNotification *)arg1;
- (NSNotification *)systemDialogForUserNotification:(struct __CFUserNotification *)arg0;
- (void)unregisterSystemDialogWithUserNotification:(struct __CFUserNotification *)arg0;

@end

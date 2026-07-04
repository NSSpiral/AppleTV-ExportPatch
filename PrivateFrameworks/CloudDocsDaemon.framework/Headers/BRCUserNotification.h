/* Runtime dump - BRCUserNotification
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUserNotification : NSObject
{
    struct __CFUserNotification * _cfUserNotification;
    struct __CFRunLoopSource * _source;
    NSObject<OS_dispatch_source> * _displaySource;
    unsigned long long _nextDisplayBeginTime;
    id _progressSubscriber;
    NSMutableDictionary * _dialogInfo;
}

- (void)dealloc;
- (BRCUserNotification *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)close;
- (void).cxx_destruct;
- (void)_displayDialogWithType:(unsigned long)arg0 dict:(id)arg1 options:(NSDictionary *)arg2 userReplyBlock:(id /* block */)arg3;
- (void)_hideCurrentDialog;
- (void)_updateDialogWithType:(unsigned long)arg0 dict:(id)arg1 userReplyBlock:(id /* block */)arg2;
- (NSString *)_localizationKey:(NSString *)arg0 forDocumentKindOfApplication:(id)arg1;
- (void)_displayDialogWithType:(unsigned long)arg0 dict:(id)arg1 userReplyBlock:(id /* block */)arg2;
- (void)showGenericErrorForURL:(NSURL *)arg0 userReplyBlock:(id /* block */)arg1;
- (NSString *)_localizationKey:(NSString *)arg0 forOSAndDocumentKindOfApplication:(id)arg1;
- (void)_updateDialogWithType:(unsigned long)arg0 dict:(id)arg1;
- (void)showErrorApplicationProfileDisabledForShareURL:(NSURL *)arg0 userReplyBlock:(id /* block */)arg1;
- (void)showErrorSetupiCloudForShareURL:(NSURL *)arg0 userReplyBlock:(id /* block */)arg1;
- (void)showErrorTurnOniCloudDriveForShareURL:(NSURL *)arg0 userReplyBlock:(id /* block */)arg1;
- (void)showErrorApplicationNotInstalledForShareURL:(NSURL *)arg0 userReplyBlock:(id /* block */)arg1;
- (void)showErrorParticipantLimitReachedForShareURL:(NSURL *)arg0 userReplyBlock:(id /* block */)arg1;
- (void)showErrorSaveShareForShareURL:(NSURL *)arg0 userReplyBlock:(id /* block */)arg1;
- (void)showErrorDeviceOfflineForShareURL:(NSURL *)arg0 userReplyBlock:(id /* block */)arg1;
- (void)showErroriCloudNotReachableForShareURL:(NSURL *)arg0 userReplyBlock:(id /* block */)arg1;
- (void)showErrorItemIsNoLongerSharedForShareURL:(NSURL *)arg0 userReplyBlock:(id /* block */)arg1;
- (void)showShareConnectingUndeterminedProgressWithUserCancelReplyBlock:(id /* block */)arg0;
- (void)showShareOpenDialogForShareURL:(NSURL *)arg0 shareInfo:(CKShareInfo *)arg1 userReplyBlock:(id /* block */)arg2;
- (void)showShareDownloadingUndeterminedProgressWithUserCancelReplyBlock:(id /* block */)arg0;
- (void)showShareDownloadingProgressForDocument:(NSObject *)arg0 withUserCancelReplyBlock:(id /* block */)arg1;
- (void)updateUndeterminedProgressCancelBlock:(id /* block */)arg0;

@end

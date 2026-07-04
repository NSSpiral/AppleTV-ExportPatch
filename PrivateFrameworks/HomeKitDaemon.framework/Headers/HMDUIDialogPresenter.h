/* Runtime dump - HMDUIDialogPresenter
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUIDialogPresenter : NSObject
{
    char _selectedByPeerDevice;
    char _peerDeviceAcceptedSelection;
    NSObject<OS_dispatch_queue> * _workQueue;
    struct __CFUserNotification * _currentNotification;
    id _currentContext;
    NSMutableArray * _pendingContexts;
    NSObject<OS_dispatch_semaphore> * _notificationSem;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (nonatomic) struct __CFUserNotification * currentNotification;
@property (retain, nonatomic) id currentContext;
@property (retain, nonatomic) NSMutableArray * pendingContexts;
@property (nonatomic) char selectedByPeerDevice;
@property (nonatomic) char peerDeviceAcceptedSelection;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> * notificationSem;

+ (HMDUIDialogPresenter *)sharedUIDialogPresenter;

- (HMDUIDialogPresenter *)init;
- (void).cxx_destruct;
- (NSString *)currentContext;
- (void)setCurrentContext:(NSObject *)arg0;
- (NSMutableArray *)pendingContexts;
- (void)setPendingContexts:(NSMutableArray *)arg0;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)requestPairingPasswordForAccessory:(id)arg0 home:(id)arg1 withContext:(NSObject *)arg2 queue:(NSObject *)arg3 completionHandler:(id /* block */)arg4;
- (void)confirmAddUser:(id)arg0 toHome:(HMHome *)arg1 withContext:(NSObject *)arg2 queue:(NSObject *)arg3 completionHandler:(id /* block */)arg4;
- (void)confirmRemoveUser:(id)arg0 fromHome:(HMHome *)arg1 withContext:(NSObject *)arg2 queue:(NSObject *)arg3 completionHandler:(id /* block */)arg4;
- (NSObject<OS_dispatch_semaphore> *)notificationSem;
- (struct __CFUserNotification *)currentNotification;
- (void)setSelectedByPeerDevice:(char)arg0;
- (void)setPeerDeviceAcceptedSelection:(char)arg0;
- (void)setCurrentNotification:(struct __CFUserNotification *)arg0;
- (char)selectedByPeerDevice;
- (char)peerDeviceAcceptedSelection;
- (char)_addToPendingContext:(NSObject *)arg0;
- (void)_requestPairingPasswordForAccessory:(id)arg0 home:(id)arg1 withContext:(NSObject *)arg2 queue:(NSObject *)arg3 completionHandler:(id /* block */)arg4;
- (char)_presentDialogWithInfo:(NSDictionary *)arg0 options:(unsigned long)arg1 textField:(id *)arg2 withContext:(NSObject *)arg3;
- (void)_requestUserPermissionForUnauthenticatedAccessory:(id)arg0 withContext:(NSObject *)arg1 queue:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (void)_confirmAddUser:(id)arg0 toHome:(HMHome *)arg1 withContext:(NSObject *)arg2 queue:(NSObject *)arg3 completionHandler:(id /* block */)arg4;
- (void)_confirmRemoveUser:(id)arg0 fromHome:(HMHome *)arg1 withContext:(NSObject *)arg2 queue:(NSObject *)arg3 completionHandler:(id /* block */)arg4;
- (void)_displayKeychainSyncForHome:(id)arg0 withContext:(NSObject *)arg1 queue:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (char)_presentDialogWithInfo:(NSDictionary *)arg0 options:(unsigned long)arg1 targetResponse:(unsigned long)arg2 textField:(id *)arg3 withContext:(NSObject *)arg4;
- (char)_addCurrentNotification:(struct __CFUserNotification *)arg0 withContext:(NSObject *)arg1;
- (char)_removeCurrentNotification:(struct __CFUserNotification *)arg0 currentSelection:(char)arg1 selectedByPeerDevice:(char *)arg2 andContext:(NSObject *)arg3;
- (char)_presentDialogWithInfo:(NSDictionary *)arg0 options:(unsigned long)arg1 targetResponse:(unsigned long)arg2 textField:(id *)arg3 withContext:(NSObject *)arg4 selectedByPeerDevice:(char *)arg5 timeout:(double)arg6;
- (void)dismissPendingDialogWithContext:(NSObject *)arg0 queue:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)dismissPendingDialogDueToPeerDeviceSelection:(char)arg0 context:(NSObject *)arg1 queue:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (char)_isPendingContext:(NSObject *)arg0;
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)arg0 withContext:(NSObject *)arg1 queue:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (void)displayKeychainSyncForHome:(id)arg0 withContext:(NSObject *)arg1 queue:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (void)confirmReportAccessory:(id)arg0 context:(NSObject *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(id /* block */)arg3;
- (void)setNotificationSem:(NSObject<OS_dispatch_semaphore> *)arg0;

@end

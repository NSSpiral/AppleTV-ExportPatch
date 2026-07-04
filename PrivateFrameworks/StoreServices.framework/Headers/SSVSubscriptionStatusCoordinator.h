/* Runtime dump - SSVSubscriptionStatusCoordinator
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSubscriptionStatusCoordinator : NSObject
{
    SSVSubscriptionStatusRequest * _activeRequest;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    char _didReset;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    SSVFamilyNotificationObserver * _familyNotificationObserver;
    SSVSubscriptionStatus * _lastKnownStatus;
    NSDate * _lastStatusDate;
    int _notificationToken;
    NSMutableArray * _statusBlocks;
}

@property (readonly, copy) SSVSubscriptionStatus * lastKnownStatus;

+ (SSVSubscriptionStatusCoordinator *)sharedCoordinator;
+ (NSObject *)_existingSharedCoordinator;

- (SSVSubscriptionStatus *)lastKnownStatus;
- (void)getStatusWithOptions:(NSDictionary *)arg0 statusBlock:(id /* block */)arg1;
- (void)dealloc;
- (SSVSubscriptionStatusCoordinator *)init;
- (void)reset;
- (void).cxx_destruct;
- (void)_externalChangeNotification;
- (void)_validateLastKnownStatus;
- (void)_deviceStoreFrontChangedNotification;
- (void)_familyDidChangeNotification;
- (id)_copyValidStatusForStatus:(id)arg0;
- (void)_fireStatusBlocksWithStatus:(id)arg0 isFinal:(char)arg1 error:(NSError *)arg2;
- (void)_handleRequestResponseWithStatus:(id)arg0 isFinal:(char)arg1 error:(NSError *)arg2;
- (id)_copyStatusFromUserDefaults;
- (void)modifyLastKnownStatusUsingBlock:(id /* block */)arg0;
- (void)_invalidateLastKnownStatus;

@end

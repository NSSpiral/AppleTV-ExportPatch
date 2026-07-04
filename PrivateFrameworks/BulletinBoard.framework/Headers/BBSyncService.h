/* Runtime dump - BBSyncService
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSyncService : NSObject <IDSServiceDelegate>
{
    IDSService * _service;
    NSMutableArray * _pendingDismissalDictionaries;
    NSMutableArray * _pendingDismissalIDs;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int _queuedFeed;
    NSString * _queuedSectionID;
    NSString * _queuedUniversalSectionID;
    NSMutableDictionary * _deferredDismissalsBySectionID;
    NSTimer * _deferredTimer;
    int _lockNotifyToken;
    <BBSyncServiceDelegate> * _delegate;
}

@property (nonatomic) <BBSyncServiceDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<BBSyncServiceDelegate> *)arg0;
- (<BBSyncServiceDelegate> *)delegate;
- (BBSyncService *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)sendPendingSyncedRemovals;
- (void)enqueueSyncedRemovalForBulletin:(id)arg0 feeds:(unsigned int)arg1;
- (void)_clearDeferredTimer;
- (NSString *)dismissalSectionIdentifierForIncomingMessage:(NSString *)arg0;
- (void)_sendSyncMessage:(NSString *)arg0;
- (char)_hasDestination;
- (void)_addDeferredDismissalForBulletin:(id)arg0 feeds:(unsigned int)arg1;
- (void)_reallyEnqueueBulletin:(id)arg0 feeds:(unsigned int)arg1;
- (NSNumber *)_syncAccount;
- (char)_syncHasDefaultPairedDevice;
- (id)_dismissalDictionaryForBulletin:(id)arg0;
- (id)_syncLocalDevices;
- (void)_deferredTimerFired:(id)arg0;
- (void)_sendDeferredDismissals;
- (void)sendSyncedRemovalForBulletin:(id)arg0 feeds:(unsigned int)arg1;
- (void)_deviceLocked;
- (void)service:(IDSService *)arg0 activeAccountsChanged:(id)arg1;
- (void)service:(IDSService *)arg0 account:(NSObject *)arg1 incomingMessage:(struct __CFHTTPMessage *)arg2 fromID:(NSString *)arg3;

@end

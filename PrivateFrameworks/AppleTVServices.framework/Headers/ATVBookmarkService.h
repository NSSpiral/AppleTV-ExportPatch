/* Runtime dump - ATVBookmarkService
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVBookmarkService : NSObject
{
    int _pendingLock;
    NSMutableDictionary * _pending;
    char _scheduledUpdate;
    NSObject<OS_dispatch_queue> * _updateQueue;
    ATVSyncingKeyValueStore * _keyValueStore;
}

+ (ATVBookmarkService *)sharedInstance;
+ (NSString *)_keyValueStoreKeyForBookmarkKey:(NSString *)arg0;
+ (NSString *)_bookmarkFromKey:(NSString *)arg0 kvsDictionary:(NSDictionary *)arg1;
+ (ATVBookmarkService *)_kvsDictionaryFromBookmark:(id)arg0;
+ (void)setupBookmarkService:(NSObject *)arg0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)synchronizeWithCompletion:(id /* block */)arg0;
- (NSString *)bookmarkForKey:(NSString *)arg0;
- (void)updateBookmark:(id)arg0;
- (ATVBookmarkService *)initWithKeyValueStore:(ATVSyncingKeyValueStore *)arg0;
- (void)_handleKeyValueStoreVersionDidChangeNotification;
- (void)_handleKeyValueStoreDidResetNotification;
- (void)_handleUPPRecordsDidChangeNotification;
- (void)_handleUPPClientDidResetNotification;
- (void)_nukePendingChangesAndNotify;
- (NSArray *)bookmarksForKeys:(NSArray *)arg0;
- (void)_batchUpdate;
- (void)_writePendingToAppleTVKeyValueStore:(NSObject *)arg0;
- (NSString *)pendingBookmarkForKey:(NSString *)arg0;
- (void)resetForRetailWithCompletion:(id /* block */)arg0;

@end

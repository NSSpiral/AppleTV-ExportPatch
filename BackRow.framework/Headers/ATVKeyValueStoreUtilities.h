/* Runtime dump - ATVKeyValueStoreUtilities
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVKeyValueStoreUtilities : NSObject
{
    NSMutableSet * _keyValueStores;
    SSAccount * _activeStoreAccountOrNull;
    char _needsUpdateKeyValueStoreState;
}

+ (ATVKeyValueStoreUtilities *)sharedInstance;

- (void)startMonitoringStore:(NSObject *)arg0;
- (char)isKeyValueStoreAvailable;
- (void)_startPeriodicCleanupTaskOnKeyValueStore:(NSObject *)arg0;
- (void)_updateKeyValueStoreState;
- (void)dealloc;
- (ATVKeyValueStoreUtilities *)init;
- (id)ActiveStoreAccountBinding;
- (void)bindActiveStoreAccountBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)updateBoundActiveStoreAccount;

@end

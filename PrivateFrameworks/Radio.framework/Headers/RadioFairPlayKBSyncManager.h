/* Runtime dump - RadioFairPlayKBSyncManager
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioFairPlayKBSyncManager : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned long long _activeAccountIdentifier;
    NSMutableArray * _dpInfoKeyBagSyncDataBlobs;
}

+ (RadioFairPlayKBSyncManager *)sharedManager;

- (void)dealloc;
- (RadioFairPlayKBSyncManager *)init;
- (void).cxx_destruct;
- (NSNumber *)popDPInfoKeyBagSyncDataWithCount:(int)arg0 returningAccountIdentifier:(unsigned long long *)arg1 error:(id *)arg2;
- (void)pushDPInfoKeyBagSyncData:(NSData *)arg0 forAccountIdentifier:(unsigned long long)arg1;
- (void)_accountStoreDidChangeNotification:(NSNotification *)arg0;

@end

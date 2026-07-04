/* Runtime dump - WiFiCloudSyncEngineCore
 * Image: /System/Library/PrivateFrameworks/WiFiCloudSyncEngine.framework/WiFiCloudSyncEngine
 */

@interface WiFiCloudSyncEngineCore : NSObject
{
    NSUbiquitousKeyValueStore * keyValueStore;
    void * context;
    /* block */ id * callback;
    NSThread * clientThread;
    char iCloudSyncingEnabled;
}

@property (retain) NSUbiquitousKeyValueStore * keyValueStore;
@property void * context;
@property /* block */ id * callback;
@property (retain) NSThread * clientThread;
@property char iCloudSyncingEnabled;

- (void)dealloc;
- (void *)context;
- (void)setContext:(void *)arg0;
- (/* block */ id *)callback;
- (void)setCallback:(/* block */ id *)arg0;
- (void)setClientThread:(NSThread *)arg0;
- (void)setICloudSyncingEnabled:(char)arg0;
- (void)unSubscribeKVStoreNotfications:(id)arg0;
- (NSUbiquitousKeyValueStore *)keyValueStore;
- (char)iCloudSyncingEnabled;
- (void)synchronizeKVS;
- (NSThread *)clientThread;
- (void)relayReadStoreValueAction:(NSObject *)arg0;
- (NSObject *)readCompleteKVStore;
- (void)ubiquitousKeyValueStoreDidChange:(NSDictionary *)arg0;
- (void)relayCloudCleanUpEvent;
- (void)relayCloudEvent:(NSObject *)arg0;
- (void)subscribeKVStoreNotficationsForBundleId:(NSObject *)arg0;
- (void)isLastDeviceInCircleAsync;
- (void)setKeyValueStore:(NSUbiquitousKeyValueStore *)arg0;
- (void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)arg0;
- (void)removeFromKVStore:(NSObject *)arg0;
- (void)relayMergeNetworks:(id)arg0;
- (void)relayCircleStatusCheck:(id)arg0;
- (void)initWithCallback:(/* block */ id *)arg0 callbackContext:(void *)arg1;
- (void)addToKVStore:(NSObject *)arg0;
- (void)readStoreValueForKey:(NSString *)arg0;
- (void)printCompleteKVStore;
- (void)clearKVS;
- (void)enableIcloudSyncing:(char)arg0 ForBundleId:(NSObject *)arg1;
- (void)synchronizeAndCallMergeNetworks;
- (void)asyncCircleStatusCheck;

@end

/* Runtime dump - CKDMetadataCache
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMetadataCache : CKSQLite
{
    NSObject<OS_dispatch_queue> * _cacheQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * cacheQueue;

+ (CKDMetadataCache *)sharedCache;
+ (NSString *)dbFileName;

- (CKDMetadataCache *)init;
- (void).cxx_destruct;
- (NSObject *)applicationMetadataForApplicationBundleID:(NSObject *)arg0;
- (void)setApplicationMetadata:(NSDictionary *)arg0 forApplicationBundleID:(NSObject *)arg1;
- (CKDServerConfiguration *)globalConfiguration;
- (NSDate *)dateOfLastTokenUpdate;
- (id)knownAppContainerTuples;
- (id)appContainerIntersectionMetadataForAppContainerTuple:(id)arg0;
- (void)setPushToken:(NSData *)arg0 forAppContainerTuple:(CKDAppContainerTuple *)arg1;
- (void)setDateOfLastTokenUpdate:(NSDate *)arg0;
- (id)pushTokenForAppContainerTuple:(id)arg0;
- (void)setAppContainerIntersectionMetadata:(NSDictionary *)arg0 forAppContainerTuple:(CKDAppContainerTuple *)arg1;
- (void)setGlobalConfiguration:(CKDServerConfiguration *)arg0;
- (void)setContainerInfo:(NSDictionary *)arg0 forContainerID:(NSObject *)arg1;
- (NSObject *)containerInfoForContainerID:(NSObject *)arg0;
- (void)expungeWithCurrentAccountIdentifier:(NSString *)arg0 forceRemove:(char)arg1;
- (NSObject<OS_dispatch_queue> *)cacheQueue;
- (void)inlock_setDateOfLastTokenUpdate:(NSDate *)arg0;
- (NSObject *)inlock_applicationMetadataForApplicationBundleID:(NSObject *)arg0;
- (NSObject *)inlock_containerInfoForContainerID:(NSObject *)arg0;
- (id)knownApplicationBundleIDs;
- (void)removeKnownApplicationBundleID:(NSObject *)arg0;
- (void)setCacheQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end

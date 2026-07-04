/* Runtime dump - PFUbiquityPeerRangeCache
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityPeerRangeCache : NSObject
{
    NSMutableDictionary * _cachedRanges;
    NSMutableDictionary * _allEntityRanges;
    NSMutableDictionary * _translatedGlobalIDs;
    NSString * _localPeerID;
    NSString * _storeName;
    NSPersistentStore * _privateStore;
    char _cachedStorePeerRanges;
}

@property (readonly, nonatomic) NSString * localPeerID;
@property (readonly, nonatomic) NSString * storeName;
@property (readonly, nonatomic) NSPersistentStore * privateStore;
@property (readonly, nonatomic) NSDictionary * translatedGlobalIDs;

+ (int)integerFromPrimaryKeyString:(NSString *)arg0;
+ (unsigned int)peerRangeStartForPrimaryKey:(unsigned int)arg0;
+ (void)initialize;

- (NSPersistentStore *)privateStore;
- (NSString *)localPeerID;
- (NSString *)storeName;
- (char)cachePeerRanges:(id *)arg0;
- (NSObject *)createMapOfManagedObjectIDsForStoreSaveSnapshot:(NSObject *)arg0 error:(id *)arg1;
- (char)refreshPeerRangeCache:(id *)arg0;
- (NSObject *)createGlobalObjectIDForManagedObjectID:(NSObject *)arg0;
- (char)cacheSQLCorePeerRange:(NSObject *)arg0 error:(id *)arg1;
- (NSObject *)cachedRangeForOwningPeerID:(NSObject *)arg0 andEntityName:(NSString *)arg1 withPrimaryKey:(unsigned int)arg2;
- (NSString *)cachedRangeForLocalPrimaryKey:(unsigned int)arg0 ofEntityNamed:(id)arg1;
- (id)createMapOfManagedObjectIDsForGlobalIDs:(id)arg0 count:(int)arg1 error:(id *)arg2;
- (unsigned int)localPrimaryKeyForOwningPeerID:(NSObject *)arg0 andEntityName:(NSString *)arg1 withPrimaryKey:(unsigned int)arg2;
- (PFUbiquityPeerRangeCache *)initWithPrivateStore:(NSPersistentStore *)arg0 storeName:(NSString *)arg1 andLocalPeerID:(NSObject *)arg2;
- (id)describeCaches;
- (id)describeCachesVerbose;
- (NSDictionary *)translatedGlobalIDs;
- (void)dealloc;
- (NSString *)description;

@end

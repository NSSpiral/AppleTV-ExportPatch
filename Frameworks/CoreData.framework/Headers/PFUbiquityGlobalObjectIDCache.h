/* Runtime dump - PFUbiquityGlobalObjectIDCache
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityGlobalObjectIDCache : NSObject
{
    NSString * _storeName;
    NSString * _localPeerID;
    NSMutableDictionary * _peerIDToEntityNameToPrimaryKey;
    NSRecursiveLock * _peerIDToEntityNameToPrimaryKeyLock;
}

@property (retain, nonatomic) NSString * storeName;
@property (retain, nonatomic) NSString * localPeerID;

+ (NSArray *)stringValueFromArray:(NSArray *)arg0 atIndexDescribedByStringNumber:(NSNumber *)arg1;

- (NSString *)localPeerID;
- (NSString *)storeName;
- (void)setStoreName:(NSString *)arg0;
- (void)setLocalPeerID:(NSString *)arg0;
- (PFUbiquityGlobalObjectIDCache *)initWithLocalPeerID:(NSString *)arg0 forStoreName:(NSString *)arg1;
- (NSString *)createGlobalIDForCompressedString:(NSString *)arg0 withEntityNames:(NSArray *)arg1 primaryKeys:(NSArray *)arg2 peerIDs:(NSArray *)arg3;
- (void)purgeCache;
- (NSString *)createGlobalIDForGlobalIDString:(NSString *)arg0;
- (NSString *)createGlobalIDForPrimaryKeyString:(NSString *)arg0 entityName:(NSString *)arg1 andOwningPeerID:(NSObject *)arg2;
- (NSString *)createGlobalIDForPrimarKey:(unsigned int)arg0 entityName:(NSString *)arg1 andOwningPeerID:(NSObject *)arg2;
- (void)dealloc;
- (PFUbiquityGlobalObjectIDCache *)init;

@end

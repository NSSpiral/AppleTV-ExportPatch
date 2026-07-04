/* Runtime dump - PFUbiquityGlobalObjectID
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityGlobalObjectID : NSObject <NSCopying>
{
    NSString * _storeName;
    NSString * _entityName;
    NSString * _primaryKey;
    NSString * _owningPeerID;
    unsigned int _hash;
    NSManagedObjectID * _managedObjectID;
    unsigned int _primaryKeyInteger;
}

@property (readonly, nonatomic) NSString * storeName;
@property (readonly, nonatomic) NSString * entityName;
@property (readonly, nonatomic) NSString * primaryKey;
@property (readonly, nonatomic) NSString * owningPeerID;
@property (readonly, nonatomic) unsigned int hash;
@property (retain, nonatomic) NSManagedObjectID * managedObjectID;
@property (readonly, nonatomic) unsigned int primaryKeyInteger;

- (NSString *)primaryKey;
- (NSString *)storeName;
- (NSString *)owningPeerID;
- (NSManagedObjectID *)managedObjectID;
- (void)setManagedObjectID:(NSManagedObjectID *)arg0;
- (NSString *)createGlobalIDString;
- (void)updateHash;
- (PFUbiquityGlobalObjectID *)initFromCopyWithStoreName:(NSString *)arg0 entityName:(NSString *)arg1 primaryKey:(NSString *)arg2 peerID:(NSObject *)arg3 andHash:(unsigned int)arg4 managedObjectID:(NSManagedObjectID *)arg5 primaryKeyInteger:(unsigned int)arg6;
- (unsigned int)primaryKeyInteger;
- (PFUbiquityGlobalObjectID *)initWithStoreName:(NSString *)arg0 entityName:(NSString *)arg1 primaryKeyInteger:(unsigned int)arg2 andPeerID:(NSObject *)arg3;
- (PFUbiquityGlobalObjectID *)initWithStoreName:(NSString *)arg0 entityName:(NSString *)arg1 primaryKey:(NSString *)arg2 andPeerID:(NSObject *)arg3;
- (PFUbiquityGlobalObjectID *)initWithCompressedString:(char)arg0 forStoreWithName:(NSString *)arg1 andEntityNames:(id)arg2 primaryKeys:(NSArray *)arg3 peerIDs:(NSArray *)arg4;
- (NSObject *)createCompressedStringWithEntityNameToIndex:(NSDictionary *)arg0 primaryKeyToIndex:(NSDictionary *)arg1 peerIDToIndex:(NSDictionary *)arg2;
- (void)dealloc;
- (PFUbiquityGlobalObjectID *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (PFUbiquityGlobalObjectID *)copyWithZone:(struct _NSZone *)arg0;
- (PFUbiquityGlobalObjectID *)initWithString:(NSString *)arg0;
- (NSString *)entityName;

@end

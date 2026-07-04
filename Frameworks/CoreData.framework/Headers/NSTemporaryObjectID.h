/* Runtime dump - NSTemporaryObjectID
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSTemporaryObjectID : NSManagedObjectID
{
    int _cd_rc;
    int _counter;
    NSEntityDescription * _entity;
}

+ (NSTemporaryObjectID *)_retain_1;
+ (void)_release_1;
+ (NSTemporaryObjectID *)initWithEntity:(NSEntityDescription *)arg0 andUUIDString:(NSString *)arg1;
+ (void)setObjectStoreIdentifier:(NSString *)arg0;
+ (void)_storeDeallocated;
+ (NSTemporaryObjectID *)initWithEntity:(NSEntityDescription *)arg0;
+ (unsigned int)allocateBatch:(id *)arg0 forEntity:(NSObject *)arg1 count:(unsigned int)arg2;
+ (Class)classForStore:(NSObject *)arg0;
+ (char)accessInstanceVariablesDirectly;
+ (NSTemporaryObjectID *)retain;
+ (void)release;
+ (NSTemporaryObjectID *)alloc;
+ (void)initialize;
+ (NSTemporaryObjectID *)allocWithZone:(struct _NSZone *)arg0;
+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;
+ (int)version;

- (ACAccountStore *)persistentStore;
- (NSString *)_retainedURIString;
- (NSData *)_referenceData;
- (NSTemporaryObjectID *)initWithEntity:(NSEntityDescription *)arg0 andUUIDString:(NSString *)arg1;
- (void)_setPersistentStore:(NSObject *)arg0;
- (NSString *)_storeIdentifier;
- (char)_isPersistentStoreAlive;
- (NSTemporaryObjectID *)initWithEntity:(NSEntityDescription *)arg0;
- (NSTemporaryObjectID *)retain;
- (void)release;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (NSEntityDescription *)entity;
- (char)isTemporaryID;
- (NSURL *)URIRepresentation;
- (void)finalize;

@end

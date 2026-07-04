/* Runtime dump - NSManagedObjectID
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSManagedObjectID : NSObject <NSCopying>

@property (readonly) NSEntityDescription * entity;
@property (readonly, weak) NSPersistentStore * persistentStore;
@property (readonly) char temporaryID;

+ (char)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (int)version;

- (NSString *)pl_shortURI;
- (NSPersistentStore *)persistentStore;
- (long long)_referenceData64;
- (NSString *)_retainedURIString;
- (NSData *)_referenceData;
- (NSDictionary *)_storeInfo1;
- (NSString *)_storeIdentifier;
- (char)_isPersistentStoreAlive;
- (NSManagedObjectID *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSManagedObjectID *)copyWithZone:(struct _NSZone *)arg0;
- (char)_tryRetain;
- (char)_isDeallocating;
- (NSEntityDescription *)entity;
- (char)isTemporaryID;
- (NSURL *)URIRepresentation;

@end

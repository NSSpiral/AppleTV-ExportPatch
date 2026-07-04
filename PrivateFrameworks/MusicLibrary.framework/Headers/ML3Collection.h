/* Runtime dump - ML3Collection
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Collection : ML3Entity

+ (NSObject *)propertyForMPMediaEntityProperty:(NSObject *)arg0;
+ (void)initialize;
+ (char)libraryContentsChangeForProperty:(NSString *)arg0;
+ (char)deleteFromLibrary:(NSObject *)arg0 deletionType:(int)arg1 persistentIDs:(long long *)arg2 count:(long long)arg3 usingConnection:(unsigned int)arg4;
+ (char)canonicalizeCollectionRepresentativeItemsWithWriteConnection:(NSURLConnection *)arg0;
+ (NSObject *)foreignPropertyForProperty:(NSString *)arg0 entityClass:(Class)arg1;
+ (NSString *)propertiesForGroupingKey;
+ (NSObject *)trackForeignPersistentID;
+ (ML3Collection *)propertiesForGroupingUniqueCollections;
+ (NSArray *)collectionEntityClasses;
+ (char)updateRepresentativeItemPersistentIDsInLibrary:(NSObject *)arg0 persistentIDs:(long long *)arg1 count:(long long)arg2 usingConnection:(unsigned int)arg3;
+ (NSObject *)artworkCacheIDProperty;
+ (char)updateRepresentativeItemPersistentIDsInLibrary:(NSObject *)arg0 persistentIDs:(long long *)arg1 count:(long long)arg2;

- (ML3Collection *)initWithDictionary:(NSDictionary *)arg0 inLibrary:(NSObject *)arg1 cachedNameOrders:(id)arg2 usingConnection:(NSURLConnection *)arg3;
- (void)updateCloudStatus;
- (void)updateRepresentativeCollectionValues:(NSArray *)arg0 existingRepresentativePersistentID:(unsigned long long)arg1 forUpdateTrackValues:(NSArray *)arg2;
- (void)updateTrackValues:(NSArray *)arg0;
- (void)updateRepresentativeItem:(NSObject *)arg0 inLibrary:(NSObject *)arg1;

@end

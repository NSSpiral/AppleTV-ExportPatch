/* Runtime dump - PHManualFetchResult
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHManualFetchResult : PHFetchResult
{
    NSArray * _objects;
    NSOrderedSet * _objectIDs;
    NSString * _identifier;
}

@property (readonly) NSArray * objects;
@property (readonly) NSOrderedSet * objectIDs;
@property (readonly) NSString * identifier;

- (NSArray *)fetchedObjects;
- (NSArray *)objects;
- (NSArray *)fetchedObjectIDs;
- (int)collectionFetchType;
- (NSString *)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)arg0 withChange:(NSDictionary *)arg1 usingManagedObjectContext:(NSObject *)arg2;
- (char)interestedInChange:(NSDictionary *)arg0;
- (PHManualFetchResult *)initWithObjects:(NSArray *)arg0 identifier:(NSString *)arg1 registerIfNeeded:(char)arg2;
- (void)prefetchObjectsAtIndexes:(NSArray *)arg0;
- (id)fetchResultWithChangeHandlingValue:(id)arg0;
- (void)updateRegistrationForChangeNotificationDeltas;
- (void)getMediaTypeCounts;
- (NSArray *)fetchUpdatedObjects;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)identifier;
- (PHManualFetchResult *)initWithObjects:(NSArray *)arg0;
- (void).cxx_destruct;
- (NSObject *)objectIDAtIndex:(unsigned int)arg0;
- (PLPhotoLibrary *)photoLibrary;
- (NSString *)containerIdentifier;
- (NSURLRequest *)fetchRequest;
- (NSOrderedSet *)objectIDs;

@end

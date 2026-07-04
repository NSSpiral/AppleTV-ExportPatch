/* Runtime dump - PHUnauthorizedFetchResult
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHUnauthorizedFetchResult : PHFetchResult
{
    id _fetchBlock;
    PHFetchOptions * _options;
    NSArray * _objects;
    NSOrderedSet * _objectIDs;
    NSString * _identifier;
}

@property (readonly) id fetchBlock;
@property (readonly, copy) PHFetchOptions * options;
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
- (PHUnauthorizedFetchResult *)initWithOptions:(PHFetchOptions *)arg0 fetchBlock:(id /* block */)arg1;
- (void)prefetchObjectsAtIndexes:(NSArray *)arg0;
- (id)fetchResultWithChangeHandlingValue:(id)arg0;
- (void)updateRegistrationForChangeNotificationDeltas;
- (void)getMediaTypeCounts;
- (id /* block */)fetchBlock;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)identifier;
- (PHFetchOptions *)options;
- (void).cxx_destruct;
- (NSObject *)objectIDAtIndex:(unsigned int)arg0;
- (PLPhotoLibrary *)photoLibrary;
- (NSString *)containerIdentifier;
- (NSURLRequest *)fetchRequest;
- (NSOrderedSet *)objectIDs;

@end

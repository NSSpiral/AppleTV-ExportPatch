/* Runtime dump - PHObject
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHObject : NSObject <NSCopying>
{
    char _deleted;
    NSString * _uuid;
    NSManagedObjectID * _objectID;
    PHPhotoLibrary * _photoLibrary;
    unsigned int _propertyHint;
}

@property (readonly, copy, nonatomic) NSString * localIdentifier;
@property (readonly) NSString * uuid;
@property (readonly) NSManagedObjectID * objectID;
@property (readonly) PHPhotoLibrary * photoLibrary;
@property (readonly) char transient;
@property (readonly) char deleted;
@property unsigned int propertyHint;

+ (NSString *)managedEntityName;
+ (NSPredicate *)fetchPredicateFromComparisonPredicate:(NSPredicate *)arg0;
+ (NSString *)entityKeyForPropertyKey:(NSString *)arg0;
+ (PHObject *)propertiesToFetchWithHint:(unsigned int)arg0;
+ (char)managedObjectSupportsTrashedState;
+ (PHObject *)identifierCode;
+ (NSDictionary *)authorizationAwareFetchResultWithOptions:(NSDictionary *)arg0 fetchBlock:(id /* block */)arg1;
+ (char)managedObjectSupportsHiddenState;
+ (char)managedObjectSupportsVisibilityState;
+ (char)managedObjectSupportsBursts;
+ (char)managedObjectSupportsWallpaperType;
+ (char)managedObjectSupportsPhotoStreamType;
+ (char)managedObjectSupportsCloudSharedType;
+ (char)managedObjectSupportsiTunesSyncType;
+ (PHObject *)localIdentifierWithUUID:(id)arg0;
+ (NSString *)uuidFromLocalIdentifier:(NSString *)arg0;

- (PHObject *)initWithFetchDictionary:(NSDictionary *)arg0 propertyHint:(unsigned int)arg1 photoLibrary:(PHPhotoLibrary *)arg2;
- (Class)changeRequestClass;
- (void)setPropertyHint:(unsigned int)arg0;
- (unsigned int)propertyHint;
- (NSString *)_shortObjectIDURI;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (PHObject *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)_identifier;
- (void).cxx_destruct;
- (char)isTransient;
- (NSString *)uuid;
- (NSString *)localIdentifier;
- (PHPhotoLibrary *)photoLibrary;
- (NSManagedObjectID *)objectID;
- (char)isDeleted;

@end

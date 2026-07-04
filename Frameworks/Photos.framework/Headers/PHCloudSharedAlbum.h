/* Runtime dump - PHCloudSharedAlbum
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCloudSharedAlbum : PHAssetCollection
{
    char _owned;
    char _cloudMultipleContributorsEnabled;
    short _cloudAlbumSubtype;
    NSString * _cloudOwnerFirstName;
    NSString * _cloudOwnerLastName;
    NSString * _cloudOwnerFullName;
    NSNumber * _cloudOwnerEmailKey;
}

@property (readonly, nonatomic) char owned;
@property (readonly, nonatomic) char cloudMultipleContributorsEnabled;
@property (readonly, nonatomic) short cloudAlbumSubtype;
@property (readonly, retain, nonatomic) NSString * cloudOwnerFirstName;
@property (readonly, retain, nonatomic) NSString * cloudOwnerLastName;
@property (readonly, retain, nonatomic) NSString * cloudOwnerFullName;
@property (readonly, retain, nonatomic) NSNumber * cloudOwnerEmailKey;

+ (NSString *)managedEntityName;
+ (PHCloudSharedAlbum *)propertiesToFetchWithHint:(unsigned int)arg0;
+ (PHCloudSharedAlbum *)identifierCode;

- (char)collectionHasFixedOrder;
- (PHCloudSharedAlbum *)initWithFetchDictionary:(NSDictionary *)arg0 propertyHint:(unsigned int)arg1 photoLibrary:(PLPhotoLibrary *)arg2;
- (Class)changeRequestClass;
- (char)isCloudMultipleContributorsEnabled;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)localizedSharedByLabelAllowsEmail:(char)arg0;
- (NSString *)cloudOwnerFirstName;
- (NSString *)cloudOwnerLastName;
- (NSString *)cloudOwnerFullName;
- (char)isOwnedCloudSharedAlbum;
- (char)canPerformEditOperation:(int)arg0;
- (NSNumber *)cloudOwnerEmailKey;
- (char)isOwned;
- (short)cloudAlbumSubtype;

@end

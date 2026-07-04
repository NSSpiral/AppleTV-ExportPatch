/* Runtime dump - PLCloudResource
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudResource : PLManagedObject

@property (retain, nonatomic) NSString * assetUuid;
@property (retain, nonatomic) NSString * filePath;
@property (nonatomic) long long fileSize;
@property (retain, nonatomic) NSString * fingerprint;
@property (nonatomic) int height;
@property (nonatomic) char isAvailable;
@property (nonatomic) char isFlattened;
@property (nonatomic) char isLocallyAvailable;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString * uniformTypeIdentifier;
@property (nonatomic) int width;
@property (retain, nonatomic) PLAdditionalAssetAttributes * assetAttributes;
@property (retain, nonatomic) PLCloudMaster * cloudMaster;
@property (retain, nonatomic) NSDate * prunedAt;
@property (retain, nonatomic) NSDate * lastOnDemandDownloadDate;
@property (readonly, retain, nonatomic) PLManagedAsset * asset;

+ (NSString *)entityName;
+ (NSString *)entityInManagedObjectContext:(NSObject *)arg0;
+ (void)markResource:(NSObject *)arg0 asLocallyAvailable:(char)arg1 inPhotoLibrary:(NSObject *)arg2;
+ (NSObject *)insertIntoPhotoLibrary:(NSObject *)arg0 forAsset:(NSObject *)arg1 withCPLResource:(NSObject *)arg2 adjusted:(char)arg3;
+ (NSObject *)duplicateCloudResource:(NSObject *)arg0 forAsset:(NSObject *)arg1 withFilePath:(NSString *)arg2 inManagedObjectContext:(NSObject *)arg3;
+ (NSString *)allCloudResourcesInManagedObjectContext:(NSObject *)arg0;
+ (long long)bytesNeededToDownloadOriginalResourcesInLibrary:(NSObject *)arg0;
+ (void)countNonLocalOriginalResourcesInLibrary:(NSObject *)arg0 outCount:(unsigned int *)arg1 photoCount:(unsigned int *)arg2 videoCount:(unsigned int *)arg3;

- (NSString *)description;
- (PLManagedAsset *)asset;
- (void)applyPropertiesFromCloudResource:(NSObject *)arg0;
- (void)_duplicatePropertiesFromCloudResource:(NSObject *)arg0 withFilePath:(NSString *)arg1 forAssetUuid:(id)arg2;
- (NSString *)cplResourceWithItemIdentifier:(NSString *)arg0 includeFile:(char)arg1;

@end

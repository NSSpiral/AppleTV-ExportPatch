/* Runtime dump - PLCloudMaster
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudMaster : PLManagedObject

@property (nonatomic) short cloudLocalState;
@property (retain, nonatomic) NSString * cloudMasterGUID;
@property (nonatomic) short cloudServerState;
@property (retain, nonatomic) NSDate * creationDate;
@property (nonatomic) short fullSizeJPEGSource;
@property (retain, nonatomic) NSDate * importDate;
@property (retain, nonatomic) NSString * uniformTypeIdentifier;
@property (retain, nonatomic) NSString * originalFilename;
@property (nonatomic) short originalOrientation;
@property (retain, nonatomic) NSString * importSessionID;
@property (retain, nonatomic) NSSet * assetAttributes;
@property (retain, nonatomic) NSSet * resources;
@property (retain, nonatomic) NSString * mediaMetadataType;
@property (retain, nonatomic) NSManagedObject * mediaMetadata;

+ (NSString *)entityName;
+ (NSString *)entityInManagedObjectContext:(NSObject *)arg0;
+ (NSString *)cloudMasterWithGUID:(NSString *)arg0 inManagedObjectContext:(NSObject *)arg1;
+ (PLCloudMaster *)cloudMastersWithGUIDs:(id)arg0 inManagedObjectContext:(NSObject *)arg1;
+ (NSString *)cloudMastersByGUID:(NSString *)arg0 inManagedObjectContext:(NSObject *)arg1;
+ (NSObject *)insertIntoPhotoLibrary:(NSObject *)arg0 withCloudMasterGUID:(NSString *)arg1;
+ (NSString *)allCloudMastersInManagedObjectContext:(NSObject *)arg0;

- (NSString *)description;
- (NSObject *)cloudResourceForResourceType:(unsigned int)arg0 forAssetUuid:(id)arg1;
- (NSObject *)cplResourceForResourceType:(unsigned int)arg0 forAssetUuid:(id)arg1;
- (NSObject *)cloudResourcesForResourceType:(unsigned int)arg0;
- (void)applyPropertiesFromCPLMasterChange:(NSDictionary *)arg0;
- (void)applyResourcesFromCPLMasterChange:(NSDictionary *)arg0 inPhotoLibrary:(NSObject *)arg1;
- (void)awakeFromInsert;
- (NSArray *)assetUUIDToCloudResources;

@end

/* Runtime dump - PHAssetCollectionChangeRequest
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetCollectionChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    PHAssetCollection * _originalAssetCollection;
    char _entitled;
    NSString * _clientName;
    int _clientProcessID;
    PHChangeRequestHelper * _helper;
    PHCollectionChangeRequestHelper * _assetsHelper;
}

@property (readonly, nonatomic) PHObjectPlaceholder * placeholderForCreatedAssetCollection;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) PHAssetCollection * originalAssetCollection;
@property (readonly, nonatomic) PHChangeRequestHelper * helper;
@property (readonly, nonatomic) PHCollectionChangeRequestHelper * assetsHelper;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSString * managedEntityName;
@property (readonly, nonatomic) NSString * uuid;
@property (readonly, nonatomic) NSManagedObjectID * objectID;
@property (readonly, nonatomic) char entitled;
@property (readonly, nonatomic) NSString * clientName;
@property (readonly, nonatomic) int clientProcessID;
@property (readonly) char new;
@property (readonly) char mutated;

+ (PHAssetCollectionChangeRequest *)changeRequestForAssetCollection:(id)arg0;
+ (NSString *)creationRequestForAssetCollectionWithTitle:(NSString *)arg0;
+ (void)deleteAssetCollections:(id)arg0;
+ (PHAssetCollectionChangeRequest *)changeRequestForAssetCollection:(id)arg0 assets:(NSArray *)arg1;

- (PHChangeRequestHelper *)helper;
- (char)isNew;
- (NSString *)managedEntityName;
- (char)isEntitled;
- (int)clientProcessID;
- (char)validateInsertIntoPhotoLibrary:(PLPhotoLibrary *)arg0 error:(id *)arg1;
- (char)validateMutationsToManagedObject:(NSManagedObject *)arg0 error:(id *)arg1;
- (PHAssetCollectionChangeRequest *)initWithUUID:(NSString *)arg0 objectID:(NSManagedObjectID *)arg1;
- (PHAssetCollectionChangeRequest *)initWithXPCDict:(NSObject<OS_xpc_object> *)arg0 entitled:(char)arg1 clientName:(NSString *)arg2 clientBundleID:(NSString *)arg3 clientProcessID:(int)arg4;
- (void)encodeToXPCDict:(NSObject<OS_xpc_object> *)arg0;
- (PHAssetCollectionChangeRequest *)initForNewObject;
- (char)canGenerateUUIDLocally;
- (char)allowMutationToManagedObject:(NSManagedObject *)arg0 propertyKey:(NSString *)arg1 error:(id *)arg2;
- (id)mutations;
- (void)didMutate;
- (char)isMutated;
- (NSManagedObject *)createManagedObjectForInsertIntoPhotoLibrary:(PLPhotoLibrary *)arg0 error:(id *)arg1;
- (char)applyMutationsToManagedObject:(NSManagedObject *)arg0 error:(id *)arg1;
- (NSMutableArray *)_mutableObjectIDsAndUUIDs;
- (void)_prepareWithFetchResult:(NSObject *)arg0;
- (void)_prepareAssetIDsIfNeeded;
- (void)_setOriginalAssetCollection:(id)arg0;
- (PHCollectionChangeRequestHelper *)assetsHelper;
- (PHObjectPlaceholder *)placeholderForCreatedAssetCollection;
- (void)insertAsset:(NSSet *)arg0 inAssetsAtIndex:(unsigned int)arg1;
- (void)removeAssetFromAssetsAtIndex:(unsigned int)arg0;
- (void)replaceAssetInAssetsAtIndex:(unsigned int)arg0 withAsset:(NSSet *)arg1;
- (void)moveAssetsAtIndexes:(NSArray *)arg0 toIndex:(unsigned int)arg1;
- (void)addAsset:(NSSet *)arg0;
- (PHAssetCollection *)originalAssetCollection;
- (void)setOriginalAssetCollection:(PHAssetCollection *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)title;
- (void).cxx_destruct;
- (NSString *)uuid;
- (NSString *)clientName;
- (NSManagedObjectID *)objectID;
- (void)insertAssets:(NSArray *)arg0 atIndexes:(NSArray *)arg1;
- (void)removeAssetsAtIndexes:(NSArray *)arg0;
- (void)replaceAssetsAtIndexes:(NSArray *)arg0 withAssets:(NSArray *)arg1;
- (void)addAssets:(NSArray *)arg0;
- (void)removeAssets:(NSArray *)arg0;
- (void)removeAsset:(NSSet *)arg0;

@end

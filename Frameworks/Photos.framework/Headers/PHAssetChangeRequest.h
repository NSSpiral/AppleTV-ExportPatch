/* Runtime dump - PHAssetChangeRequest
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    char _didChangeAdjustments;
    PHContentEditingOutput * _contentEditingOutput;
    NSString * _editorBundleID;
    NSURL * _editorBundleURL;
    CLLocation * _updatedLocation;
    PHChangeRequestHelper * _helper;
    char _entitled;
    NSString * _clientName;
    int _clientProcessID;
    NSIndexSet * _supportedEditOperations;
    UIImage * _imageForInsertion;
    NSData * _imageDataForInsertion;
    NSString * _imageTypeForInsertion;
    NSURL * _imageURLForInsertion;
    NSURL * _videoURLForInsertion;
}

@property (readonly, nonatomic) PHObjectPlaceholder * placeholderForCreatedAsset;
@property (retain, nonatomic) NSDate * creationDate;
@property (retain, nonatomic) CLLocation * location;
@property (nonatomic) char favorite;
@property (nonatomic) char hidden;
@property (retain, nonatomic) PHContentEditingOutput * contentEditingOutput;
@property (retain, nonatomic) NSDate * modificationDate;
@property (retain, nonatomic) NSIndexSet * supportedEditOperations;
@property (retain, nonatomic) UIImage * imageForInsertion;
@property (retain, nonatomic) NSData * imageDataForInsertion;
@property (retain, nonatomic) NSString * imageTypeForInsertion;
@property (retain, nonatomic) NSURL * imageURLForInsertion;
@property (retain, nonatomic) NSURL * videoURLForInsertion;
@property (readonly, nonatomic) PHChangeRequestHelper * helper;
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

+ (NSData *)creationRequestForAssetFromImageData:(NSData *)arg0;
+ (NSArray *)_allAssetEditOperations;
+ (NSData *)creationRequestForAssetFromImageData:(NSData *)arg0 usingUUID:(id)arg1;
+ (void)_createAssetFromImageData:(NSData *)arg0 imageType:(NSString *)arg1 uuid:(NSString *)arg2 creationDate:(NSDate *)arg3;
+ (void)_createAssetFromVideoURL:(NSURL *)arg0 uuid:(NSString *)arg1;
+ (NSURL *)creationRequestForAssetFromImageAtFileURL:(NSURL *)arg0;
+ (UIImage *)creationRequestForAssetFromImage:(UIImage *)arg0;
+ (NSURL *)creationRequestForAssetFromVideoAtFileURL:(NSURL *)arg0;
+ (void)deleteAssets:(NSArray *)arg0;
+ (NSSet *)changeRequestForAsset:(NSSet *)arg0;

- (PHChangeRequestHelper *)helper;
- (char)isNew;
- (NSString *)managedEntityName;
- (char)isEntitled;
- (int)clientProcessID;
- (char)validateInsertIntoPhotoLibrary:(PLPhotoLibrary *)arg0 error:(id *)arg1;
- (PHContentEditingOutput *)contentEditingOutput;
- (char)isRevertingContentToOriginal;
- (char)validateMutationsToManagedObject:(NSManagedObject *)arg0 error:(id *)arg1;
- (PHAssetChangeRequest *)initWithUUID:(NSString *)arg0 objectID:(NSManagedObjectID *)arg1;
- (PHAssetChangeRequest *)initWithXPCDict:(NSObject<OS_xpc_object> *)arg0 entitled:(char)arg1 clientName:(NSString *)arg2 clientBundleID:(NSString *)arg3 clientProcessID:(int)arg4;
- (void)encodeToXPCDict:(NSObject<OS_xpc_object> *)arg0;
- (PHAssetChangeRequest *)initForNewObject;
- (char)canGenerateUUIDLocally;
- (char)allowMutationToManagedObject:(NSManagedObject *)arg0 propertyKey:(NSString *)arg1 error:(id *)arg2;
- (id)mutations;
- (void)didMutate;
- (char)isMutated;
- (NSManagedObject *)createManagedObjectForInsertIntoPhotoLibrary:(PLPhotoLibrary *)arg0 error:(id *)arg1;
- (char)applyMutationsToManagedObject:(NSManagedObject *)arg0 error:(id *)arg1;
- (void)setImageTypeForInsertion:(NSString *)arg0;
- (void)setSupportedEditOperations:(NSIndexSet *)arg0;
- (void)setImageURLForInsertion:(NSURL *)arg0;
- (PHAssetChangeRequest *)initForNewObjectWithUUID:(id)arg0;
- (void)setImageDataForInsertion:(NSData *)arg0;
- (void)setImageForInsertion:(UIImage *)arg0;
- (void)setVideoURLForInsertion:(NSURL *)arg0;
- (int)_mediaTypeForCreatedAsset;
- (NSData *)imageDataForInsertion;
- (UIImage *)imageForInsertion;
- (NSURL *)videoURLForInsertion;
- (NSIndexSet *)supportedEditOperations;
- (NSString *)imageTypeForInsertion;
- (char)validateVideoURLForAssetCreation:(id)arg0 error:(id *)arg1;
- (char)_validateContentURL:(NSURL *)arg0 error:(id *)arg1 writeAccessRequired:(char)arg2;
- (char)_validateContentEditingOutput:(NSObject *)arg0 error:(id *)arg1;
- (char)validateImageDataForAssetCreation:(id)arg0 error:(id *)arg1;
- (NSURL *)imageURLForInsertion;
- (char)validateAdjustmentDataForAssetMutation:(id)arg0 error:(id *)arg1;
- (char)validateImageURLForAssetMutation:(id)arg0 error:(id *)arg1;
- (char)validateVideoURLForAssetMutation:(id)arg0 error:(id *)arg1;
- (PHObjectPlaceholder *)placeholderForCreatedAsset;
- (void)setAdjustmentData:(NSData *)arg0 withRenderedJPEGData:(NSData *)arg1 orRenderedContentURL:(NSURL *)arg2 penultimateRenderedJPEGData:(NSData *)arg3 isSubstandardRender:(char)arg4 fullSizeRenderSize:(struct CGSize)arg5;
- (void)revertAssetContentToOriginal;
- (char)isHidden;
- (void)setHidden:(char)arg0;
- (NSDate *)modificationDate;
- (char)isHiding;
- (CLLocation *)location;
- (void).cxx_destruct;
- (NSString *)uuid;
- (NSDate *)creationDate;
- (NSString *)clientName;
- (void)setContentEditingOutput:(PHContentEditingOutput *)arg0;
- (void)setLocation:(CLLocation *)arg0;
- (NSManagedObjectID *)objectID;
- (void)setModificationDate:(NSDate *)arg0;
- (void)setFavorite:(char)arg0;
- (char)isFavorite;
- (void)setCreationDate:(NSDate *)arg0;

@end

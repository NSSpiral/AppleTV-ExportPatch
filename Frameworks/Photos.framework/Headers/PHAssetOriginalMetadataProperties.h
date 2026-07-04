/* Runtime dump - PHAssetOriginalMetadataProperties
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetOriginalMetadataProperties : NSObject
{
    short _originalHeight;
    short _originalWidth;
    short _originalExifOrientation;
    PHAsset * _asset;
    NSString * _originalAssetsUUID;
    NSString * _originalFilename;
    int _originalFilesize;
    NSString * _originalPath;
}

@property (readonly, weak, nonatomic) PHAsset * asset;
@property (readonly, nonatomic) NSString * originalAssetsUUID;
@property (readonly, nonatomic) short originalHeight;
@property (readonly, nonatomic) short originalWidth;
@property (readonly, nonatomic) NSString * originalFilename;
@property (readonly, nonatomic) short originalExifOrientation;
@property (readonly, nonatomic) int originalFilesize;
@property (readonly, nonatomic) NSString * originalPath;

- (PHAssetOriginalMetadataProperties *)initWithFetchDictionary:(NSDictionary *)arg0 asset:(PHAsset *)arg1;
- (short)originalExifOrientation;
- (void).cxx_destruct;
- (PHAsset *)asset;
- (NSString *)originalFilename;
- (short)originalWidth;
- (short)originalHeight;
- (NSString *)originalAssetsUUID;
- (NSString *)originalPath;
- (int)originalFilesize;

@end

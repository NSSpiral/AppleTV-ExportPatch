/* Runtime dump - PHAssetDuplicateProperties
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetDuplicateProperties : NSObject
{
    PHAsset * _asset;
    NSData * _originalHash;
    NSString * _publicGlobalUUID;
}

@property (readonly, weak, nonatomic) PHAsset * asset;
@property (retain, nonatomic) NSData * originalHash;
@property (retain, nonatomic) NSString * publicGlobalUUID;

- (PHAssetDuplicateProperties *)initWithFetchDictionary:(NSDictionary *)arg0 asset:(PHAsset *)arg1;
- (void).cxx_destruct;
- (PHAsset *)asset;
- (NSString *)publicGlobalUUID;
- (NSData *)originalHash;
- (void)setPublicGlobalUUID:(NSString *)arg0;
- (void)setOriginalHash:(NSData *)arg0;

@end

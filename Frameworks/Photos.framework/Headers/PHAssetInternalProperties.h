/* Runtime dump - PHAssetInternalProperties
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetInternalProperties : NSObject
{
    short _visibilityState;
    PHAsset * _asset;
    NSString * _avalancheUUID;
    double _sortToken;
}

@property (readonly, weak, nonatomic) PHAsset * asset;
@property (readonly, nonatomic) double sortToken;
@property (readonly, nonatomic) NSString * avalancheUUID;
@property (readonly, nonatomic) short visibilityState;

- (PHAssetInternalProperties *)initWithFetchDictionary:(NSDictionary *)arg0 asset:(PHAsset *)arg1;
- (void).cxx_destruct;
- (PHAsset *)asset;
- (NSString *)avalancheUUID;
- (double)sortToken;
- (short)visibilityState;

@end

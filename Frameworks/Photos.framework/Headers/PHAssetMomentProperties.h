/* Runtime dump - PHAssetMomentProperties
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetMomentProperties : NSObject
{
    char _reverseLocationDataIsValid;
    PHAsset * _asset;
    NSData * _reverseLocationData;
}

@property (readonly, weak, nonatomic) PHAsset * asset;
@property (readonly, nonatomic) char reverseLocationDataIsValid;
@property (readonly, nonatomic) NSData * reverseLocationData;

- (PHAssetMomentProperties *)initWithFetchDictionary:(NSDictionary *)arg0 asset:(PHAsset *)arg1;
- (void).cxx_destruct;
- (PHAsset *)asset;
- (NSData *)reverseLocationData;
- (char)reverseLocationDataIsValid;

@end

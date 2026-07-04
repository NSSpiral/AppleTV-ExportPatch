/* Runtime dump - PHAssetPTPProperties
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetPTPProperties : NSObject
{
    PHAsset * _asset;
    NSString * _exifTimestampString;
    NSString * _importSessionID;
}

@property (readonly, weak, nonatomic) PHAsset * asset;
@property (readonly, nonatomic) NSString * exifTimestampString;
@property (readonly, nonatomic) NSString * importSessionID;

- (PHAssetPTPProperties *)initWithFetchDictionary:(NSDictionary *)arg0 asset:(PHAsset *)arg1;
- (NSString *)exifTimestampString;
- (void).cxx_destruct;
- (PHAsset *)asset;
- (NSString *)importSessionID;

@end

/* Runtime dump - ATVCupidMyPhotoStreamItem
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVCupidAsset;
@interface ATVCupidMyPhotoStreamItem : ATVDataItem
{
    ATVCupidAsset * _asset;
}

@property (retain, nonatomic) ATVCupidAsset * asset;

- (ATVCupidMyPhotoStreamItem *)initWithDataClient:(ATVDataClient *)arg0 asset:(ATVCupidAsset *)arg1;
- (void).cxx_destruct;
- (ATVCupidAsset *)asset;
- (void)setAsset:(ATVCupidAsset *)arg0;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;

@end

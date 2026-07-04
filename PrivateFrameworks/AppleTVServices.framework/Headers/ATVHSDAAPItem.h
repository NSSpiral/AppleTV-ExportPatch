/* Runtime dump - ATVHSDAAPItem
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSDAAPItem : ATVDataItem
{
    ATVHSDAAPAssetData * _itemData;
}

@property (retain, nonatomic) ATVHSDAAPAssetData * itemData;

- (char)_isRental;
- (unsigned int)hash;
- (void).cxx_destruct;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;
- (ATVHSDAAPItem *)initWithDataClient:(ATVDataClient *)arg0 itemData:(ATVHSDAAPAssetData *)arg1;
- (void)setItemData:(ATVHSDAAPAssetData *)arg0;
- (NSURL *)_cachedMediaPlaybackURL;
- (NSString *)_artworkIdentifier;
- (void)_cacheMediaPlaybackURL:(NSURL *)arg0;
- (ATVHSDAAPAssetData *)itemData;

@end

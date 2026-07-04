/* Runtime dump - ATVHSDAAPCollection
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSDAAPCollection : ATVDataCollection
{
    ATVHSDAAPAssetData * _itemData;
}

@property (retain, nonatomic) ATVHSDAAPAssetData * itemData;

- (void).cxx_destruct;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;
- (ATVHSDAAPCollection *)initWithDataClient:(ATVDataClient *)arg0 itemData:(ATVHSDAAPAssetData *)arg1;
- (void)setItemData:(ATVHSDAAPAssetData *)arg0;
- (ATVHSDAAPAssetData *)itemData;

@end

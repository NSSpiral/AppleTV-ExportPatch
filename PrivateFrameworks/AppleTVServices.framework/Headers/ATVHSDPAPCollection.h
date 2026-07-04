/* Runtime dump - ATVHSDPAPCollection
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSDPAPCollection : ATVDataCollection
{
    ATVHSDAAPAssetData * _itemData;
}

@property (retain, nonatomic) ATVHSDAAPAssetData * itemData;

- (void).cxx_destruct;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;
- (ATVHSDPAPCollection *)initWithDataClient:(ATVDataClient *)arg0 itemData:(ATVHSDAAPAssetData *)arg1;
- (void)setItemData:(ATVHSDAAPAssetData *)arg0;
- (ATVHSDAAPAssetData *)itemData;
- (NSString *)_keyPhotoArtworkIdentifier;
- (UIImage *)_keyPhoto;
- (NSObject *)_keyPhotoRecordID;

@end

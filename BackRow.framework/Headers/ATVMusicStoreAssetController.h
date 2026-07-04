/* Runtime dump - ATVMusicStoreAssetController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMusicStoreItemDetailController.h>
@interface ATVMusicStoreAssetController : ATVMusicStoreItemDetailController
{
    <BRMediaAsset> * _asset;
}

- (void)controlWasActivated;
- (void)_setImageProxy;
- (void)_setCopyrightText;
- (void)_setMetadataControl;
- (char)_assetIsExpired:(id)arg0;
- (void)fetchRelatedContent;
- (void)_assetPlayable:(id)arg0;
- (NSObject *)_storeID;
- (NSArray *)_actionProviders;
- (void)_setupDetailedControl;
- (void)dealloc;
- (ATVMusicStoreAssetController *)initWithAsset:(<BRMediaAsset> *)arg0;
- (<BRMediaAsset> *)asset;

@end

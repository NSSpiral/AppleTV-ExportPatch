/* Runtime dump - ATVVideoAssetUpdater
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVFeedVideoAssetElement, ATVMerchant, ATVVideoAsset;
@interface ATVVideoAssetUpdater : NSObject
{
    ATVVideoAsset * _asset;
    ATVMerchant * _merchant;
    NSMutableArray * _refreshTimers;
    NSObject<OS_dispatch_queue> * _httpQueue;
}

- (ATVVideoAssetUpdater *)initWithVideoAsset:(ATVFeedVideoAssetElement *)arg0;
- (void)_timerFired:(id)arg0;
- (void)dealloc;

@end

/* Runtime dump - ATVFeedUpNextItemElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, ATVFeedVideoAssetElement, BRMerchant;
@interface ATVFeedUpNextItemElement : ATVFeedRootElement
{
    ATVFeedVideoAssetElement * _videoAsset;
}

@property (retain, nonatomic) ATVFeedVideoAssetElement * videoAsset;

- (ATVFeedUpNextItemElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setVideoAsset:(ATVFeedVideoAssetElement *)arg0;
- (void).cxx_destruct;
- (ATVFeedVideoAssetElement *)videoAsset;

@end

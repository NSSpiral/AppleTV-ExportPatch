/* Runtime dump - ATVFeedVideoPlayerElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, ATVFeedVideoAssetElement, BRMerchant;
@interface ATVFeedVideoPlayerElement : ATVFeedRootElement
{
    ATVFeedVideoAssetElement * _video;
}

@property (retain, nonatomic) ATVFeedVideoAssetElement * video;

- (ATVFeedVideoPlayerElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void).cxx_destruct;
- (void)setVideo:(ATVFeedVideoAssetElement *)arg0;
- (ATVFeedVideoAssetElement *)video;

@end

/* Runtime dump - ATVFeedPreviewElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedPreviewElement : ATVFeedRootElement
{
    ATVFeedElement * _preview;
}

@property (retain, nonatomic) ATVFeedElement * preview;

- (ATVFeedPreviewElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setPreview:(ATVFeedElement *)arg0;
- (ATVFeedElement *)preview;
- (void).cxx_destruct;

@end

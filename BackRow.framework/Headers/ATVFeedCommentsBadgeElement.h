/* Runtime dump - ATVFeedCommentsBadgeElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedCommentsBadgeElement : ATVFeedElement
{
    int _style;
}

@property (nonatomic) int style;

- (ATVFeedCommentsBadgeElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (int)style;
- (void)setStyle:(int)arg0;

@end

/* Runtime dump - ATVFeedAdditionalMediaBadgeElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedImageElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedAdditionalMediaBadgeElement : ATVFeedImageElement
{
    int _insertIndex;
}

@property (nonatomic) int insertIndex;

- (ATVFeedAdditionalMediaBadgeElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (int)insertIndex;
- (void)setInsertIndex:(int)arg0;

@end

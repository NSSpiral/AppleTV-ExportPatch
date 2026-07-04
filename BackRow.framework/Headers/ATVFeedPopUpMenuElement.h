/* Runtime dump - ATVFeedPopUpMenuElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedPopUpMenuElement : ATVFeedRootElement
{
    NSArray * _sections;
}

@property (retain, nonatomic) NSArray * sections;

- (ATVFeedPopUpMenuElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void).cxx_destruct;
- (void)setSections:(NSArray *)arg0;
- (NSArray *)sections;

@end

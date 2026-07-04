/* Runtime dump - ATVFeedSearchResultsElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, ATVFeedMenuElement, BRMerchant;
@interface ATVFeedSearchResultsElement : ATVFeedRootElement
{
    ATVFeedMenuElement * _menu;
}

@property (retain, nonatomic) ATVFeedMenuElement * menu;

- (ATVFeedSearchResultsElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void).cxx_destruct;
- (ATVFeedMenuElement *)menu;
- (void)setMenu:(ATVFeedMenuElement *)arg0;

@end

/* Runtime dump - ATVFeedTableRowElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedTableRowElement : ATVFeedElement
{
    NSArray * _columns;
}

@property (retain, nonatomic) NSArray * columns;

- (ATVFeedTableRowElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void).cxx_destruct;
- (NSArray *)columns;
- (void)setColumns:(NSArray *)arg0;

@end

/* Runtime dump - ATVFeedShelfSectionElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedShelfSectionElement : ATVFeedElement
{
    NSString * _title;
    NSArray * _shelfItems;
}

@property (copy, nonatomic) NSString * title;
@property (retain, nonatomic) NSArray * shelfItems;

- (ATVFeedShelfSectionElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSArray *)shelfItems;
- (void)setShelfItems:(NSArray *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (void).cxx_destruct;

@end

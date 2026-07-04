/* Runtime dump - ATVFeedStandingsItemElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedImageElement, ATVFeedTableElement, BRMerchant;
@interface ATVFeedStandingsItemElement : ATVFeedElement
{
    NSString * _title;
    ATVFeedImageElement * _backgroundImage;
    ATVFeedTableElement * _table;
}

@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) ATVFeedImageElement * backgroundImage;
@property (retain, nonatomic) ATVFeedTableElement * table;

- (ATVFeedStandingsItemElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (ATVFeedImageElement *)backgroundImage;
- (ATVFeedTableElement *)table;
- (void)setBackgroundImage:(ATVFeedImageElement *)arg0;
- (void).cxx_destruct;
- (void)setTable:(ATVFeedTableElement *)arg0;

@end

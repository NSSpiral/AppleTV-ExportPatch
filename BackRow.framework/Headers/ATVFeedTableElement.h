/* Runtime dump - ATVFeedTableElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedTableElement : ATVFeedElement
{
    NSArray * _columnDefinitions;
    NSArray * _rows;
}

@property (retain, nonatomic) NSArray * columnDefinitions;
@property (retain, nonatomic) NSArray * rows;

- (ATVFeedTableElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setColumnDefinitions:(NSArray *)arg0;
- (NSArray *)columnDefinitions;
- (NSArray *)rows;
- (void).cxx_destruct;
- (void)setRows:(NSArray *)arg0;

@end

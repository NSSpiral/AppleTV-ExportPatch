/* Runtime dump - ATVFeedLabeledListElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedLabeledListElement : ATVFeedElement
{
    NSArray * _titles;
    NSArray * _labels;
}

@property (retain, nonatomic) NSArray * titles;
@property (retain, nonatomic) NSArray * labels;

- (ATVFeedLabeledListElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setTitles:(NSArray *)arg0;
- (NSArray *)titles;
- (void).cxx_destruct;
- (void)setLabels:(NSArray *)arg0;
- (NSArray *)labels;

@end

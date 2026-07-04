/* Runtime dump - ATVFeedInitialSelectionElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedInitialSelectionElement : ATVFeedElement
{
    NSIndexPath * _indexPath;
    NSDate * _relevanceDate;
}

@property (retain, nonatomic) NSIndexPath * indexPath;
@property (retain, nonatomic) NSDate * relevanceDate;

- (ATVFeedInitialSelectionElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSIndexPath *)indexPath;
- (void).cxx_destruct;
- (void)setIndexPath:(NSIndexPath *)arg0;
- (NSDate *)relevanceDate;
- (void)setRelevanceDate:(NSDate *)arg0;

@end

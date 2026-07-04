/* Runtime dump - ATVFeedProgressBarElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedProgressBarElement : ATVFeedElement
{
    int _percentage;
}

@property (nonatomic) int percentage;

- (ATVFeedProgressBarElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setPercentage:(int)arg0;
- (int)percentage;

@end

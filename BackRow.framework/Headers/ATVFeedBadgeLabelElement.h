/* Runtime dump - ATVFeedBadgeLabelElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedBadgeLabelElement : ATVFeedElement
{
    int _badgeType;
    NSString * _label;
    int _labelWeight;
    UIColor * _labelColor;
}

@property (nonatomic) int badgeType;
@property (copy, nonatomic) NSString * label;
@property (nonatomic) int labelWeight;
@property (retain, nonatomic) UIColor * labelColor;

- (ATVFeedBadgeLabelElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (int)badgeType;
- (int)labelWeight;
- (void)setLabelWeight:(int)arg0;
- (void)setBadgeType:(int)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void).cxx_destruct;
- (UIColor *)labelColor;
- (void)setLabelColor:(UIColor *)arg0;

@end

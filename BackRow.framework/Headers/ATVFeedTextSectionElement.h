/* Runtime dump - ATVFeedTextSectionElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedBadgeLabelElement, ATVFeedElement, BRMerchant;
@interface ATVFeedTextSectionElement : ATVFeedElement
{
    char _titleFirst;
    NSString * _title;
    int _titleWeight;
    UIColor * _titleColor;
    ATVFeedBadgeLabelElement * _badgeLabelElement;
    NSString * _text;
    int _textWeight;
    UIColor * _textColor;
    unsigned int _textMaxLines;
}

@property (copy, nonatomic) NSString * title;
@property (nonatomic) int titleWeight;
@property (retain, nonatomic) UIColor * titleColor;
@property (retain, nonatomic) ATVFeedBadgeLabelElement * badgeLabelElement;
@property (copy, nonatomic) NSString * text;
@property (nonatomic) int textWeight;
@property (retain, nonatomic) UIColor * textColor;
@property (nonatomic) unsigned int textMaxLines;
@property (nonatomic) char titleFirst;

- (ATVFeedTextSectionElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (int)titleWeight;
- (void)setTitleWeight:(int)arg0;
- (ATVFeedBadgeLabelElement *)badgeLabelElement;
- (char)isTitleFirst;
- (int)textWeight;
- (unsigned int)textMaxLines;
- (void)setBadgeLabelElement:(ATVFeedBadgeLabelElement *)arg0;
- (void)setTextWeight:(int)arg0;
- (void)setTextMaxLines:(unsigned int)arg0;
- (void)setTitleFirst:(char)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (void)setTextColor:(UIColor *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (UIColor *)textColor;
- (UIColor *)titleColor;
- (void)setTitleColor:(UIColor *)arg0;
- (void).cxx_destruct;

@end

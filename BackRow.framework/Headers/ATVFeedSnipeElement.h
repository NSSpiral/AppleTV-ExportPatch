/* Runtime dump - ATVFeedSnipeElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedSnipeElement : ATVFeedElement
{
    char _customInsets;
    NSString * _title;
    NSString * _titleColor;
    NSString * _backgroundColorToken;
    int _position;
    NSString * _insetsStr;
    NSString * _insetsStr720;
    NSString * _insetsStr1080;
    struct UIEdgeInsets _insets;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * titleColor;
@property (copy, nonatomic) NSString * backgroundColorToken;
@property (nonatomic) int position;
@property (nonatomic) struct UIEdgeInsets insets;
@property (readonly, nonatomic) char customInsets;
@property (retain, nonatomic) NSString * insetsStr;
@property (retain, nonatomic) NSString * insetsStr720;
@property (retain, nonatomic) NSString * insetsStr1080;

- (ATVFeedSnipeElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)insetsStr1080;
- (void)setInsetsStr1080:(NSString *)arg0;
- (NSString *)insetsStr720;
- (void)setInsetsStr720:(NSString *)arg0;
- (NSString *)insetsStr;
- (void)setInsetsStr:(NSString *)arg0;
- (char)hasCustomInsets;
- (NSString *)backgroundColorToken;
- (void)setBackgroundColorToken:(NSString *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (void)setPosition:(int)arg0;
- (int)position;
- (NSString *)titleColor;
- (void)setTitleColor:(NSString *)arg0;
- (void).cxx_destruct;
- (struct UIEdgeInsets)insets;
- (void)setInsets:(struct UIEdgeInsets)arg0;

@end

/* Runtime dump - ATVFeedImageElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedImageElement : ATVFeedElement
{
    char _required;
    NSString * _url;
    NSString * _style;
    NSString * _accessibilityLabel;
    NSString * _src1080;
    NSString * _src720;
    NSString * _src;
    NSString * _insetsStr1080;
    NSString * _insetsStr720;
    NSString * _insetsStr;
    struct UIEdgeInsets _insets;
}

@property (copy, nonatomic) NSString * url;
@property (readonly, nonatomic) NSURL * urlAsURL;
@property (nonatomic) char required;
@property (copy, nonatomic) NSString * style;
@property (nonatomic) struct UIEdgeInsets insets;
@property (copy, nonatomic) NSString * accessibilityLabel;
@property (copy, nonatomic) NSString * src1080;
@property (copy, nonatomic) NSString * src720;
@property (copy, nonatomic) NSString * src;
@property (retain, nonatomic) NSString * insetsStr1080;
@property (retain, nonatomic) NSString * insetsStr720;
@property (retain, nonatomic) NSString * insetsStr;

- (ATVFeedImageElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setSrc1080:(NSString *)arg0;
- (void)setSrc720:(NSString *)arg0;
- (NSURL *)urlAsURL;
- (NSString *)src1080;
- (NSString *)src720;
- (NSString *)insetsStr1080;
- (void)setInsetsStr1080:(NSString *)arg0;
- (NSString *)insetsStr720;
- (void)setInsetsStr720:(NSString *)arg0;
- (NSString *)insetsStr;
- (void)setInsetsStr:(NSString *)arg0;
- (NSString *)url;
- (NSString *)style;
- (NSString *)accessibilityLabel;
- (void)setStyle:(NSString *)arg0;
- (void)setUrl:(NSString *)arg0;
- (void)setAccessibilityLabel:(NSString *)arg0;
- (void).cxx_destruct;
- (struct UIEdgeInsets)insets;
- (void)setInsets:(struct UIEdgeInsets)arg0;
- (NSString *)src;
- (void)setSrc:(NSString *)arg0;
- (char)required;
- (void)setRequired:(char)arg0;

@end

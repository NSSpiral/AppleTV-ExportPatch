/* Runtime dump - IKTextElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKTextElement : IKViewElement
{
    IKTextParser * _textParser;
    IKViewElementFactory * _elementFactory;
    NSMutableArray * _textBadges;
    unsigned int _textStyle;
}

@property (readonly, retain, nonatomic) NSAttributedString * text;
@property (readonly, nonatomic) NSArray * badges;
@property (readonly, nonatomic) unsigned int textStyle;
@property (readonly, nonatomic) int maxLines;
@property (readonly, nonatomic) unsigned int alignment;
@property (readonly, nonatomic) UIColor * color;

+ (char)shouldParseChildDOMElements;

- (NSAttributedString *)text;
- (unsigned int)alignment;
- (UIColor *)color;
- (unsigned int)textStyle;
- (void).cxx_destruct;
- (IKTextElement *)initWithDOMElement:(NSObject *)arg0 parent:(NSObject *)arg1 elementFactory:(IKViewElementFactory *)arg2;
- (unsigned int)_styleForTagName:(NSString *)arg0;
- (NSString *)accessibilityText;
- (int)maxLines;
- (NSArray *)badges;
- (UIFont *)attributedStringWithFont:(UIFont *)arg0;
- (UIFont *)attributedStringWithFont:(UIFont *)arg0 foregroundColor:(UIColor *)arg1 textAlignment:(int)arg2;

@end

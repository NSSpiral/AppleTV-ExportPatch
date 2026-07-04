/* Runtime dump - IKTextParser
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKTextParser : NSObject <NSCopying>
{
    NSAttributedString * _attributedString;
}

@property (readonly, retain, nonatomic) NSString * string;
@property (readonly, retain, nonatomic) NSAttributedString * attributedString;

+ (NSObject *)textWithDOMElement:(NSObject *)arg0 usingParseBlock:(id /* block */)arg1;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (IKTextParser *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)string;
- (NSAttributedString *)attributedString;
- (void).cxx_destruct;
- (UIFont *)attributedStringWithFont:(UIFont *)arg0 style:(NSObject *)arg1;
- (UIFont *)attributedStringWithFont:(UIFont *)arg0 foregroundColor:(UIColor *)arg1 textAlignment:(int)arg2 style:(NSObject *)arg3;
- (NSObject *)_attributedStringFromDomElement:(NSObject *)arg0 usingParseBlock:(id /* block */)arg1;
- (NSObject *)_stringFromDateElement:(NSObject *)arg0 unformattedString:(NSString *)arg1;
- (NSObject *)_stringFromDurationElement:(NSObject *)arg0 unformattedString:(NSString *)arg1;
- (NSObject *)_stringFromNumberElement:(NSObject *)arg0 unformattedString:(NSString *)arg1;

@end

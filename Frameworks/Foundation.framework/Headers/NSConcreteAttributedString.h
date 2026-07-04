/* Runtime dump - NSConcreteAttributedString
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteAttributedString : NSAttributedString
{
    NSString * string;
    NSRLEArray * attributes;
}

- (NSDictionary *)_runArrayHoldingAttributes;
- (void)dealloc;
- (NSConcreteAttributedString *)init;
- (NSConcreteAttributedString *)initWithString:(NSString *)arg0 attributes:(NSRLEArray *)arg1;
- (unsigned int)length;
- (NSConcreteAttributedString *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)string;
- (NSConcreteAttributedString *)initWithString:(NSString *)arg0;
- (NSObject *)attribute:(NSObject *)arg0 atIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange *)arg2;
- (NSConcreteAttributedString *)initWithAttributedString:(NSAttributedString *)arg0;
- (NSObject *)attributesAtIndex:(unsigned int)arg0 effectiveRange:(struct _NSRange *)arg1;
- (void)finalize;

@end

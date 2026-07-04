/* Runtime dump - NSConcreteMutableAttributedString
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteMutableAttributedString : NSMutableAttributedString
{
    NSMutableString * mutableString;
    NSMutableRLEArray * mutableAttributes;
    struct ? fields;
}

+ (Class)_mutableStringClass;
+ (char)supportsSecureCoding;

- (NSDictionary *)_runArrayHoldingAttributes;
- (void)edited:(unsigned int)arg0 range:(struct _NSRange)arg1 changeInLength:(int)arg2;
- (void)dealloc;
- (NSConcreteMutableAttributedString *)initWithCoder:(NSCoder *)arg0;
- (NSConcreteMutableAttributedString *)init;
- (NSConcreteMutableAttributedString *)initWithString:(NSString *)arg0 attributes:(NSDictionary *)arg1;
- (unsigned int)length;
- (NSString *)string;
- (Class)classForCoder;
- (void)addAttribute:(struct __CFString *)arg0 value:(NSObject *)arg1 range:(struct _NSRange)arg2;
- (NSConcreteMutableAttributedString *)initWithString:(NSString *)arg0;
- (NSObject *)attribute:(NSObject *)arg0 atIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)setAttributes:(NSDictionary *)arg0 range:(struct _NSRange)arg1;
- (NSConcreteMutableAttributedString *)initWithAttributedString:(NSAttributedString *)arg0;
- (NSObject *)attribute:(NSObject *)arg0 atIndex:(unsigned int)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg0 withString:(NSString *)arg1;
- (NSObject *)attributesAtIndex:(unsigned int)arg0 effectiveRange:(struct _NSRange *)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg0 withAttributedString:(NSAttributedString *)arg1;
- (void)finalize;

@end

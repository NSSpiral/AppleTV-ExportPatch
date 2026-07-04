/* Runtime dump - NSCFAttributedString
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFAttributedString : NSMutableAttributedString

+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;

- (void)insertAttributedString:(NSString *)arg0 atIndex:(unsigned int)arg1;
- (NSCFAttributedString *)retain;
- (void)release;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)length;
- (NSCFAttributedString *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)string;
- (Class)classForCoder;
- (char)_tryRetain;
- (char)_isDeallocating;
- (void)deleteCharactersInRange:(struct _NSRange)arg0;
- (void)addAttribute:(struct __CFString *)arg0 value:(NSObject *)arg1 range:(struct _NSRange)arg2;
- (void)removeAttribute:(NSObject *)arg0 range:(struct _NSRange)arg1;
- (void)setAttributedString:(NSAttributedString *)arg0;
- (NSObject *)attribute:(NSObject *)arg0 atIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)setAttributes:(NSDictionary *)arg0 range:(struct _NSRange)arg1;
- (void)addAttributes:(NSDictionary *)arg0 range:(struct _NSRange)arg1;
- (NSObject *)attribute:(NSObject *)arg0 atIndex:(unsigned int)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (char)isEqualToAttributedString:(NSString *)arg0;
- (void)replaceCharactersInRange:(struct _NSRange)arg0 withString:(NSString *)arg1;
- (NSCFAttributedString *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSObject *)attributesAtIndex:(unsigned int)arg0 effectiveRange:(struct _NSRange *)arg1;
- (NSObject *)attributesAtIndex:(unsigned int)arg0 longestEffectiveRange:(struct _NSRange *)arg1 inRange:(struct _NSRange)arg2;
- (void)appendAttributedString:(NSString *)arg0;
- (NSObject *)attributedSubstringFromRange:(struct _NSRange)arg0;
- (void)replaceCharactersInRange:(struct _NSRange)arg0 withAttributedString:(NSAttributedString *)arg1;
- (void)finalize;

@end

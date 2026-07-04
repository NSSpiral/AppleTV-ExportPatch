/* Runtime dump - NSRegularExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSRegularExpression : NSObject <NSCopying, NSCoding>
{
    NSString * _pattern;
    unsigned int _options;
    void * _internal;
    id _reserved1;
    int _checkout;
    int _reserved2;
}

@property (readonly, copy) NSString * pattern;
@property (readonly) unsigned int options;
@property (readonly) unsigned int numberOfCaptureGroups;

+ (NSString *)escapedTemplateForString:(NSString *)arg0;
+ (void)initialize;
+ (NSString *)escapedPatternForString:(NSString *)arg0;
+ (NSRegularExpression *)regularExpressionWithPattern:(NSString *)arg0 options:(unsigned int)arg1 error:(id *)arg2;

- (unsigned int)numberOfCaptureGroups;
- (void)enumerateMatchesInString:(NSString *)arg0 options:(unsigned int)arg1 range:(struct _NSRange)arg2 usingBlock:(id /* block */)arg3;
- (void)dealloc;
- (NSRegularExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSRegularExpression *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)options;
- (NSRegularExpression *)initWithPattern:(NSString *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (struct _NSRange)rangeOfFirstMatchInString:(NSString *)arg0 options:(unsigned int)arg1 range:(struct _NSRange)arg2;
- (NSString *)matchesInString:(NSString *)arg0 options:(unsigned int)arg1 range:(struct _NSRange)arg2;
- (NSObject *)replacementStringForResult:(NSObject *)arg0 inString:(NSAttributedString *)arg1 offset:(int)arg2 template:(IKMenuBarTemplate *)arg3;
- (unsigned int)replaceMatchesInString:(NSString *)arg0 options:(unsigned int)arg1 range:(struct _NSRange)arg2 withTemplate:(IKMenuBarTemplate *)arg3;
- (unsigned int)numberOfMatchesInString:(NSString *)arg0 options:(unsigned int)arg1 range:(struct _NSRange)arg2;
- (NSString *)firstMatchInString:(NSString *)arg0 options:(unsigned int)arg1 range:(struct _NSRange)arg2;
- (NSString *)stringByReplacingMatchesInString:(NSString *)arg0 options:(unsigned int)arg1 range:(struct _NSRange)arg2 withTemplate:(IKMenuBarTemplate *)arg3;
- (void)finalize;
- (NSString *)pattern;

@end

/* Runtime dump - NSByteCountFormatter
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSByteCountFormatter : NSFormatter
{
    unsigned int _allowedUnits;
    char _countStyle;
    char _allowsNonnumericFormatting;
    char _includesUnit;
    char _includesCount;
    char _includesActualByteCount;
    char _adaptive;
    char _zeroPadsFractionDigits;
    int _formattingContext;
    id _reserved;
}

@property unsigned int allowedUnits;
@property int countStyle;
@property char allowsNonnumericFormatting;
@property char includesUnit;
@property char includesCount;
@property char includesActualByteCount;
@property char adaptive;
@property char zeroPadsFractionDigits;
@property int formattingContext;

+ (NSNumber *)stringFromByteCount:(long long)arg0 countStyle:(int)arg1;

- (void)setFormattingContext:(int)arg0;
- (int)formattingContext;
- (char)isPartialStringValid:(id *)arg0 proposedSelectedRange:(struct _NSRange *)arg1 originalString:(NSString *)arg2 originalSelectedRange:(struct _NSRange)arg3 errorDescription:(id *)arg4;
- (void)setAllowedUnits:(unsigned int)arg0;
- (unsigned int)allowedUnits;
- (int)countStyle;
- (char)allowsNonnumericFormatting;
- (char)includesUnit;
- (char)includesCount;
- (char)includesActualByteCount;
- (char)isAdaptive;
- (char)zeroPadsFractionDigits;
- (void)setAdaptive:(char)arg0;
- (void)setIncludesUnit:(char)arg0;
- (void)setIncludesCount:(char)arg0;
- (void)setIncludesActualByteCount:(char)arg0;
- (void)setZeroPadsFractionDigits:(char)arg0;
- (NSByteCountFormatter *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSByteCountFormatter *)init;
- (NSByteCountFormatter *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned long long)_options;
- (NSString *)stringForObjectValue:(id)arg0;
- (void)setAllowsNonnumericFormatting:(char)arg0;
- (void)setCountStyle:(int)arg0;
- (NSNumber *)stringFromByteCount:(long long)arg0;
- (char)getObjectValue:(id *)arg0 forString:(NSString *)arg1 errorDescription:(NSString *)arg2;

@end

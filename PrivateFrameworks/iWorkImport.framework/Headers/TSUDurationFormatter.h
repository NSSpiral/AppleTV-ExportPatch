/* Runtime dump - TSUDurationFormatter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDurationFormatter : NSFormatter
{
    NSString * mFormat;
    TSULocale * mLocale;
    int mCompactStyleStartUnit;
}

@property (copy, nonatomic) NSString * format;
@property (nonatomic) int compactStyleStartUnit;
@property (readonly) TSULocale * locale;

- (void)dealloc;
- (TSUDurationFormatter *)initWithCoder:(NSCoder *)arg0;
- (TSUDurationFormatter *)init;
- (TSULocale *)locale;
- (NSString *)stringForObjectValue:(id)arg0;
- (char)getObjectValue:(id *)arg0 forString:(NSString *)arg1 errorDescription:(NSString *)arg2;
- (TSUDurationFormatter *)initWithLocale:(TSULocale *)arg0;
- (void)p_commonInit;
- (int)compactStyleStartUnit;
- (void)setCompactStyleStartUnit:(int)arg0;
- (NSString *)format;
- (void)setFormat:(NSString *)arg0;

@end

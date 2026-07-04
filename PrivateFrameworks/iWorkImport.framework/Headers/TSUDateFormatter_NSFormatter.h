/* Runtime dump - TSUDateFormatter_NSFormatter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDateFormatter_NSFormatter : NSFormatter
{
    NSString * mPreferredFormat;
    char isDateOnly;
    char isTimeOnly;
    TSULocale * locale;
}

@property (nonatomic) char isDateOnly;
@property (nonatomic) char isTimeOnly;
@property (retain, nonatomic) TSULocale * locale;
@property (retain, nonatomic) NSString * preferredFormat;

- (void)dealloc;
- (TSUDateFormatter_NSFormatter *)init;
- (void)setLocale:(TSULocale *)arg0;
- (TSULocale *)locale;
- (NSString *)stringForObjectValue:(id)arg0;
- (char)isDateOnly;
- (char)isTimeOnly;
- (void)setPreferredFormat:(NSString *)arg0;
- (NSString *)preferredFormat;
- (char)getObjectValue:(id *)arg0 forString:(NSString *)arg1 errorDescription:(NSString *)arg2;
- (void)setIsDateOnly:(char)arg0;
- (void)setIsTimeOnly:(char)arg0;

@end

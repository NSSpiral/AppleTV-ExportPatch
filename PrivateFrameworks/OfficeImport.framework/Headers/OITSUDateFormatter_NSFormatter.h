/* Runtime dump - OITSUDateFormatter_NSFormatter
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDateFormatter_NSFormatter : NSFormatter
{
    NSString * mPreferredFormat;
    char isDateOnly;
    char isTimeOnly;
}

@property (nonatomic) char isDateOnly;
@property (nonatomic) char isTimeOnly;
@property (retain, nonatomic) NSString * preferredFormat;

- (void)dealloc;
- (NSString *)stringForObjectValue:(id)arg0;
- (char)isDateOnly;
- (char)isTimeOnly;
- (void)setPreferredFormat:(NSString *)arg0;
- (NSString *)preferredFormat;
- (char)getObjectValue:(id *)arg0 forString:(NSString *)arg1 errorDescription:(NSString *)arg2;
- (void)setIsDateOnly:(char)arg0;
- (void)setIsTimeOnly:(char)arg0;

@end

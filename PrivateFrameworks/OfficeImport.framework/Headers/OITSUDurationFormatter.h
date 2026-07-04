/* Runtime dump - OITSUDurationFormatter
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDurationFormatter : NSFormatter
{
    NSString * mFormat;
    int mCompactStyleStartUnit;
}

@property (copy, nonatomic) NSString * format;
@property (nonatomic) int compactStyleStartUnit;

- (void)dealloc;
- (OITSUDurationFormatter *)initWithCoder:(NSCoder *)arg0;
- (OITSUDurationFormatter *)init;
- (NSString *)stringForObjectValue:(id)arg0;
- (char)getObjectValue:(id *)arg0 forString:(NSString *)arg1 errorDescription:(NSString *)arg2;
- (void)p_commonInit;
- (int)compactStyleStartUnit;
- (void)setCompactStyleStartUnit:(int)arg0;
- (NSString *)format;
- (void)setFormat:(NSString *)arg0;

@end

/* Runtime dump - TSKPicaFormatter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKPicaFormatter : NSFormatter
{
    NSString * mPicaSeparator;
    NSNumber * mMinimum;
    NSNumber * mMaximum;
}

@property (copy, nonatomic) NSString * picaSeparator;
@property (copy, nonatomic) NSNumber * minimum;
@property (copy, nonatomic) NSNumber * maximum;

- (TSKPicaFormatter *)initWithPicaSeparator:(NSString *)arg0;
- (void)setPicaSeparator:(NSString *)arg0;
- (NSString *)picaSeparator;
- (NSNumber *)minimum;
- (void)setMinimum:(NSNumber *)arg0;
- (NSNumber *)maximum;
- (void)setMaximum:(NSNumber *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (TSKPicaFormatter *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)stringForObjectValue:(id)arg0;
- (char)getObjectValue:(id *)arg0 forString:(NSString *)arg1 errorDescription:(id *)arg2;

@end

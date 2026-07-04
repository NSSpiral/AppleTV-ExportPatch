/* Runtime dump - CHPValueAxisFormatting
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHPValueAxisFormatting : EDProcessor

- (BOOL)isObjectSupported:(id)arg0;
- (void)applyProcessorToObject:(NSObject *)arg0 sheet:(NSObject *)arg1;
- (BOOL)isPercentageFormattingInContentFormatString:(NSString *)arg0 edValue:(struct EDValue *)arg1;
- (id)dataPointFormattingInSeriesCollection:(id)arg0;
- (NSData *)dataPointFormattingInData:(NSData *)arg0;
- (id)dataPointFormattingInSources:(id)arg0;

@end

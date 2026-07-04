/* Runtime dump - CHPSeriesDateTimeFormatting
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHPSeriesDateTimeFormatting : EDProcessor

- (BOOL)isObjectSupported:(id)arg0;
- (void)applyProcessorToObject:(NSObject *)arg0 sheet:(NSObject *)arg1;
- (BOOL)isDateTimeFomrattingInData:(NSData *)arg0;
- (BOOL)isDateTimeFormattingInContentFormatString:(NSString *)arg0 edCell:(struct EDCellHeader *)arg1;

@end

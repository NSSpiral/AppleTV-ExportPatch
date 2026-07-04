/* Runtime dump - WDDateTime
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDDateTime : WDRun
{
    WDCharacterProperties * mProperties;
    NSDate * mDate;
}

- (void)clearProperties;
- (void)dealloc;
- (NSDate *)date;
- (void)setProperties:(NSDictionary *)arg0;
- (NSDictionary *)properties;
- (int)runType;
- (WDDateTime *)initWithParagraph:(CPParagraph *)arg0 date:(NSDate *)arg1;

@end

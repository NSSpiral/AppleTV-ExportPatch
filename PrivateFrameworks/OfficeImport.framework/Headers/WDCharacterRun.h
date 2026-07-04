/* Runtime dump - WDCharacterRun
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDCharacterRun : WDRun
{
    WDCharacterProperties * mProperties;
    NSMutableString * mString;
    char mBinaryWriterContentFlag;
}

- (void)clearProperties;
- (void)copyPropertiesFrom:(NSObject *)arg0;
- (void)dealloc;
- (void)appendString:(NSString *)arg0;
- (char)isEmpty;
- (NSString *)string;
- (void)setString:(NSString *)arg0;
- (NSDictionary *)properties;
- (int)runType;
- (char)binaryWriterContentFlag;
- (void)setBinaryWriterContentFlag:(char)arg0;
- (void)removeLastCharacter:(unsigned short)arg0;
- (WDCharacterRun *)initWithParagraph:(CPParagraph *)arg0;
- (void)setPropertiesForDocument;
- (void)clearString;
- (WDCharacterRun *)initWithParagraph:(CPParagraph *)arg0 string:(NSString *)arg1;

@end

/* Runtime dump - WDSymbol
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDSymbol : WDRun
{
    WDCharacterProperties * mProperties;
    WDFont * mFont;
    unsigned short mCharacter;
}

- (void)clearProperties;
- (void)dealloc;
- (void)setFont:(UIFont *)arg0;
- (UIFont *)font;
- (NSDictionary *)properties;
- (int)runType;
- (unsigned short)character;
- (WDSymbol *)initWithParagraph:(CPParagraph *)arg0;
- (void)setCharacter:(unsigned short)arg0;

@end

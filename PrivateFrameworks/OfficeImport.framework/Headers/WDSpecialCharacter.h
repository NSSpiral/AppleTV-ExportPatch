/* Runtime dump - WDSpecialCharacter
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDSpecialCharacter : WDRun
{
    WDCharacterProperties * mProperties;
    int mType;
}

- (void)clearProperties;
- (void)dealloc;
- (NSDictionary *)properties;
- (int)runType;
- (WDSpecialCharacter *)initWithParagraph:(CPParagraph *)arg0;
- (void)setCharacterType:(int)arg0;
- (int)characterType;

@end

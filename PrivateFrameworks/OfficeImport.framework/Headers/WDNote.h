/* Runtime dump - WDNote
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDNote : WDRun
{
    WDText * mText;
    WDCharacterRun * mReference;
    char mAutomaticNumbering;
}

- (void)dealloc;
- (NSString *)text;
- (int)runType;
- (struct ?)reference;
- (void)setAutomaticNumbering:(char)arg0;
- (char)automaticNumbering;
- (WDNote *)initWithParagraph:(CPParagraph *)arg0 footnote:(char)arg1;

@end

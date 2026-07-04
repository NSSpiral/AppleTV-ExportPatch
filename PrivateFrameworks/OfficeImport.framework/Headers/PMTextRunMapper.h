/* Runtime dump - PMTextRunMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMTextRunMapper : CMMapper
{
    OADTextRun * mTextRun;
}

- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (PMTextRunMapper *)initWithOadTextRun:(id)arg0 parent:(NSObject *)arg1;
- (OADFontScheme *)fontScheme;
- (NSObject *)copyCharacterStyleWithState:(NSObject *)arg0;
- (void)addFontForLanguageType:(int)arg0 toCharacterStyle:(NSObject *)arg1;
- (char)_isDefaultFill:(id)arg0;

@end

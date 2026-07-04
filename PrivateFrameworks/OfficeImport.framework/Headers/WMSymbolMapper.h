/* Runtime dump - WMSymbolMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMSymbolMapper : CMMapper
{
    unsigned short mCharacter;
    NSString * mFontName;
}

+ (unsigned short)mapWindingsCharacter:(unsigned short)arg0;
+ (unsigned short)mapZapfDingbatsCharacter:(unsigned short)arg0;
+ (unsigned short)mapCharacter:(unsigned short)arg0 withFontName:(NSString *)arg1;
+ (char)isSymbolFontName:(NSString *)arg0;

- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (WMSymbolMapper *)initWithWDSymbol:(WDSymbol *)arg0 parent:(NSObject *)arg1;

@end

/* Runtime dump - OADFontScheme
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADFontScheme : NSObject
{
    NSMutableDictionary * mMajorFont;
    NSMutableDictionary * mMinorFont;
}

+ (void)addFontEntry:(id)arg0 script:(NSString *)arg1 typeface:(id)arg2;

- (void)dealloc;
- (OADFontScheme *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (char)isFontSchemeRef:(id)arg0;
- (UIFont *)fontForFontSchemeRef:(id)arg0;
- (id)majorTypefaceForScript:(id)arg0;
- (id)minorTypefaceForScript:(id)arg0;
- (unsigned int)majorFontCount;
- (UIFont *)majorFont;
- (unsigned int)minorFontCount;
- (UIFont *)minorFont;

@end

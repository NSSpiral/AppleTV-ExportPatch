/* Runtime dump - PMParagraphMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMParagraphMapper : CMMapper
{
    OADParagraph * mParagraph;
}

- (PMParagraphMapper *)initWithOadParagraph:(id)arg0 parent:(NSObject *)arg1;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1 isFirstParagraph:(char)arg2;
- (NSObject *)copyParagraphStyleWithState:(NSObject *)arg0 isFirstParagraph:(char)arg1;
- (void)addEndCharacterStyleToStyle:(NSObject *)arg0;
- (int)firstTextRunFontSize;
- (OADFontScheme *)fontScheme;

@end

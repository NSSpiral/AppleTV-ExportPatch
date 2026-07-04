/* Runtime dump - WMCharacterRunMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMCharacterRunMapper : CMMapper
{
    WDCharacterRun * wdCharacterRun;
    WMStyle * mStyle;
    float mFontSizeBumpFactor;
    NSString * mText;
    char mIsDeleted;
}

+ (void)addNonCollapsableSpanAt:(id)arg0 withState:(NSObject *)arg1;

- (void)dealloc;
- (WMCharacterRunMapper *)initWithText:(NSString *)arg0;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (int)defaultTabWidth;
- (NSObject *)copyCharacterStyle;
- (unsigned int)countAndStripLeadingTabs;
- (void)mapSubstring:(id)arg0 at:(void *)arg1;
- (void)mapTabs:(unsigned int)arg0 at:(void *)arg1 afterText:(NSString *)arg2;
- (WMCharacterRunMapper *)initWithWDCharacterRun:(WDCharacterRun *)arg0 parent:(NSObject *)arg1;
- (void)map1At:(id)arg0 withState:(NSObject *)arg1;
- (NSObject *)baseStyle;
- (NSObject *)boldStyle;
- (char)isDeleted;

@end

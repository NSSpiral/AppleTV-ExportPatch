/* Runtime dump - TPTheme
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPTheme : TSATheme

+ (NSString *)themeWithContext:(NSObject *)arg0 alternate:(int)arg1 withStylesheet:(NSObject *)arg2;
+ (void)initialize;

- (TPTheme *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSObject *)headerAndFooterStyle;
- (NSObject *)bodyStyle;
- (NSString *)_paragraphStylePresetWithName:(NSString *)arg0 orContentTag:(NSString *)arg1;
- (void)p_saveToArchive:(struct ThemeArchive *)arg0 archiver:(NSObject *)arg1;
- (NSObject *)footnoteStyle;

@end

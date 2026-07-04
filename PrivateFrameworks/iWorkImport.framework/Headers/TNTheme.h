/* Runtime dump - TNTheme
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNTheme : TSATheme
{
    NSArray * mTablePrototypes;
}

@property (retain, nonatomic) NSArray * tablePrototypes;

+ (void)initialize;

- (TNTheme *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct ThemeArchive *)arg0 archiver:(struct /* ? */)arg1;
- (void)loadFromArchive:(struct ThemeArchive *)arg0 unarchiver:(struct ThemeArchive)arg1;
- (void)bootstrapWhiteHardCodedTheme;
- (void)p_initDefaultHardCodedStyles;
- (NSArray *)tablePrototypes;
- (void)setTablePrototypes:(NSArray *)arg0;
- (void)bootstrapBlackHardCodedTheme;

@end

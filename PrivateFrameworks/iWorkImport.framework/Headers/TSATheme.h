/* Runtime dump - TSATheme
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSATheme : TSSTheme

+ (void)registerPresetSourceClasses;
+ (TSATheme *)localizedNameForPresetKind:(id)arg0;
+ (NSString *)localizedNameForStylePickerTitle:(NSString *)arg0;
+ (NSObject *)localizedTitleForApplyStyleMenuItem:(NSObject *)arg0;
+ (NSObject *)localizedTitleForCreateStyleMenuItem:(NSObject *)arg0;

- (void)saveToArchive:(struct ThemeArchive *)arg0 archiver:(struct /* ? */)arg1;
- (void)loadFromArchive:(struct ThemeArchive *)arg0 unarchiver:(struct ThemeArchive)arg1;

@end

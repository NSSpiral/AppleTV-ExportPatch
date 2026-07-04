/* Runtime dump - TSWPTextPresetDisplayItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTextPresetDisplayItem : NSObject
{
    TSWPTextStylePreset * _preset;
    NSString * _displayName;
}

@property (retain, nonatomic) TSWPTextStylePreset * preset;
@property (copy, nonatomic) NSString * displayName;

- (void)saveToArchive:(struct TextPresetDisplayItemArchive *)arg0 archiver:(NSObject *)arg1;
- (TSWPTextPresetDisplayItem *)initWithArchive:(struct TextPresetDisplayItemArchive *)arg0 unarchiver:(struct TextPresetDisplayItemArchive)arg1;
- (TSWPTextStylePreset *)preset;
- (void)setPreset:(TSWPTextStylePreset *)arg0;
- (TSWPTextPresetDisplayItem *)initWithPreset:(TSWPTextStylePreset *)arg0 displayName:(NSString *)arg1;
- (void)dealloc;
- (NSString *)description;
- (NSString *)displayName;
- (void)setDisplayName:(NSString *)arg0;

@end

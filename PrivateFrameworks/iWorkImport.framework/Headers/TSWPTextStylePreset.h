/* Runtime dump - TSWPTextStylePreset
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTextStylePreset : TSPObject <TSSPreset>
{
    NSString * _presetIdentifier;
    TSWPParagraphStyle * _paragraphStyle;
    TSWPListStyle * _listStyle;
}

@property (copy, nonatomic) NSString * presetIdentifier;
@property (retain, nonatomic) TSWPParagraphStyle * paragraphStyle;
@property (retain, nonatomic) TSWPListStyle * listStyle;
@property (readonly, nonatomic) NSString * presetKind;

- (TSWPParagraphStyle *)paragraphStyle;
- (TSWPTextStylePreset *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct TextStylePresetArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct TextStylePresetArchive *)arg0 unarchiver:(struct TextStylePresetArchive)arg1;
- (NSString *)presetKind;
- (NSString *)presetIdentifier;
- (void)setPresetIdentifier:(NSString *)arg0;
- (TSWPTextStylePreset *)initWithContext:(NSObject *)arg0 presetIdentifier:(NSString *)arg1 paragraphStyle:(TSWPParagraphStyle *)arg2 listStyle:(TSWPListStyle *)arg3;
- (void)dealloc;
- (void)setParagraphStyle:(TSWPParagraphStyle *)arg0;
- (TSWPListStyle *)listStyle;
- (void)setListStyle:(TSWPListStyle *)arg0;

@end

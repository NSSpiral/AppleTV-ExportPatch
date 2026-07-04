/* Runtime dump - TSWPTOCSettings
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCSettings : TSPObject <TSPCopying, TSSPreset>
{
    NSString * _displayName;
    int _scope;
    TSURetainedPointerKeyDictionary * _map;
}

@property (copy, nonatomic) NSString * displayName;
@property (nonatomic) int scope;
@property (readonly, nonatomic) NSSet * indexedStyles;
@property (readonly, nonatomic) NSSet * paragraphStylesShownInTOC;
@property (retain, nonatomic) TSURetainedPointerKeyDictionary * map;
@property (readonly, nonatomic) NSString * presetKind;

- (TSWPTOCSettings *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)saveToArchive:(struct TOCSettingsArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct TOCSettingsArchive *)arg0 unarchiver:(struct TOCSettingsArchive)arg1;
- (NSString *)presetKind;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (void)addIndexedStyle:(NSObject *)arg0 withEntryStyle:(NSObject *)arg1 showInTOC:(char)arg2;
- (NSObject *)entryStyleForParagraphStyle:(NSObject *)arg0;
- (char)showInTOCForParagraphStyle:(NSObject *)arg0;
- (NSSet *)indexedStyles;
- (NSSet *)paragraphStylesShownInTOC;
- (void)addIndexedStyle:(NSObject *)arg0 withEntryStyle:(NSObject *)arg1;
- (void)removeIndexedStyle:(NSObject *)arg0;
- (void)setMap:(TSURetainedPointerKeyDictionary *)arg0;
- (void)dealloc;
- (NSString *)description;
- (TSWPTOCSettings *)copyWithZone:(struct _NSZone *)arg0;
- (TSWPTOCSettings *)initWithContext:(TSPObjectContext *)arg0;
- (void)setScope:(int)arg0;
- (int)scope;
- (NSString *)displayName;
- (void)setDisplayName:(NSString *)arg0;
- (TSURetainedPointerKeyDictionary *)map;

@end

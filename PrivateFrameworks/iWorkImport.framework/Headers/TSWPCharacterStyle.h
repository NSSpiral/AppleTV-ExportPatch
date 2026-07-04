/* Runtime dump - TSWPCharacterStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPCharacterStyle : TSSStyle <TSSPreset>

@property (readonly, nonatomic) NSString * presetKind;

+ (TSWPCharacterStyle *)propertiesAllowingNSNull;
+ (NSDictionary *)emphasisProperties;
+ (NSString *)nullStyleName;
+ (NSDictionary *)nonEmphasisCharacterProperties;
+ (NSString *)nullStyleWithContext:(NSObject *)arg0;
+ (NSDictionary *)properties;

- (TSWPCharacterStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct CharacterStyleArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct CharacterStyleArchive *)arg0 unarchiver:(struct CharacterStyleArchive)arg1;
- (NSString *)presetKind;
- (char)transformsFontSizes;
- (int)writingDirection;

@end

/* Runtime dump - WDStyleSheet
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDStyleSheet : NSObject
{
    NSMutableDictionary * mStyleDictionary;
    WDDocument * mDocument;
    WDCharacterProperties * mDefaultCharacterProperties;
    WDParagraphProperties * mDefaultParagraphProperties;
    WDStyle * mDefaultParagraphStyle;
    WDStyle * mDefaultCharacterStyle;
    WDStyle * mDefaultTableStyle;
    WDStyle * mDefaultListStyle;
    NSMutableArray * mStylesInOrder;
    NSMutableDictionary * mIdDictionaryForName;
}

- (void)dealloc;
- (<UITextInput> *)document;
- (WDStyleSheet *)initWithDocument:(NSObject *)arg0;
- (TSWPSpecParagraphStyle *)defaultParagraphStyle;
- (NSDictionary *)defaultCharacterProperties;
- (NSObject *)defaultTableStyle;
- (NSObject *)styleNameToUniqueId:(NSObject *)arg0;
- (NSObject *)styleWithId:(NSObject *)arg0;
- (NSObject *)createStyleWithId:(NSObject *)arg0 type:(int)arg1;
- (void)setDefaultParagraphStyle:(TSWPSpecParagraphStyle *)arg0;
- (void)setDefaultCharacterStyle:(NSObject *)arg0;
- (void)setDefaultTableStyle:(NSObject *)arg0;
- (void)setDefaultListStyle:(NSObject *)arg0;
- (void)addStyle:(struct __CFString *)arg0 name:(NSString *)arg1;
- (NSObject *)defaultCharacterStyle;
- (void)setName:(NSString *)arg0 forId:(NSObject *)arg1;
- (void)initializeDefaultProperties;
- (NSString *)styleIdForName:(NSString *)arg0;
- (NSString *)styleWithName:(NSString *)arg0;
- (NSString *)createStyleWithName:(NSString *)arg0 type:(int)arg1;
- (unsigned int)styleCount;
- (NSString *)paragraphStyleWithStartingName:(NSString *)arg0;
- (void)removeStyleWithId:(NSObject *)arg0;
- (NSObject *)defaultListStyle;
- (NSString *)styleIdToName:(NSString *)arg0;
- (NSObject *)allAliasesForStyleId:(NSObject *)arg0 name:(NSString *)arg1;
- (void)createDefaultStyles;
- (NSDictionary *)defaultParagraphProperties;
- (NSMutableArray *)styles;

@end

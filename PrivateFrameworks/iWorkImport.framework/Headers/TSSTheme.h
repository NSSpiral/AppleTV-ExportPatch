/* Runtime dump - TSSTheme
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSTheme : TSPObject <TSSPresetSource, TSKModel>
{
    NSString * mThemeIdentifier;
    NSMutableDictionary * mPresetsByKind;
    TSSStylesheet * mLegacyStylesheet;
    TSSStylesheet * mDocumentStylesheet;
    NSMutableDictionary * mReplacedPresetUUIDs;
}

@property (retain, nonatomic) TSSStylesheet * legacyStylesheet;
@property (retain, nonatomic) TSSStylesheet * documentStylesheet;
@property (retain, nonatomic) NSString * themeIdentifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)registerPresetSourceClasses;
+ (void)tsdRegisterPresetSourceClasses;
+ (void)registerPresetSourceClass:(Class)arg0;
+ (void)tstRegisterPresetSourceClasses;
+ (void)tschRegisterPresetSourceClasses;
+ (TSSTheme *)presetKinds;
+ (void)bootstrapPresetsOfKind:(NSString *)arg0 inTheme:(TSSTheme *)arg1 alternate:(int)arg2;
+ (TSSTheme *)presetSources;
+ (TSSTheme *)presetBootstrapOrder;
+ (NSString *)themeWithContext:(NSObject *)arg0 alternate:(int)arg1 withStylesheet:(NSObject *)arg2;

- (TSSTheme *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct ThemeArchive *)arg0 archiver:(struct /* ? */)arg1;
- (NSObject *)modelPathComponentForChild:(NSObject *)arg0;
- (NSObject *)hyperlinkStyle;
- (NSObject *)defaultColumnStyle;
- (void)enablePresetValidation;
- (void)loadFromArchive:(struct ThemeArchive *)arg0 unarchiver:(struct ThemeArchive)arg1;
- (id)presetsOfKind:(id)arg0;
- (void)setPresets:(id)arg0 ofKind:(NSString *)arg1;
- (TSSStylesheet *)legacyStylesheet;
- (unsigned int)indexOfPreset:(NSSet *)arg0;
- (void)removePreset:(NSSet *)arg0;
- (void)insertPreset:(NSSet *)arg0 ofKind:(NSString *)arg1 atIndex:(unsigned int)arg2;
- (char)hasPresetsOfKind:(id)arg0;
- (id)presetOfKind:(id)arg0 index:(unsigned int)arg1;
- (void)addPreset:(NSSet *)arg0 ofKind:(NSString *)arg1;
- (void)setStylesheetForUpgradeToSingleStylesheet:(NSObject *)arg0;
- (void)setLegacyStylesheet:(TSSStylesheet *)arg0;
- (void)tsdLoadFromArchive:(struct ThemeArchive *)arg0 unarchiver:(struct ThemeArchive)arg1;
- (void)tswpLoadFromArchive:(struct ThemeArchive *)arg0 unarchiver:(struct ThemeArchive)arg1;
- (void)tstLoadFromArchive:(struct ThemeArchive *)arg0 unarchiver:(struct ThemeArchive)arg1;
- (void)tschLoadFromArchive:(struct ThemeArchive *)arg0 unarchiver:(struct ThemeArchive)arg1;
- (void)tsdSaveToArchive:(struct ThemeArchive *)arg0 archiver:(struct /* ? */)arg1;
- (void)tswpSaveToArchive:(struct ThemeArchive *)arg0 archiver:(struct /* ? */)arg1;
- (void)tstSaveToArchive:(struct ThemeArchive *)arg0 archiver:(struct /* ? */)arg1;
- (void)tschSaveToArchive:(struct ThemeArchive *)arg0 archiver:(struct /* ? */)arg1;
- (void)disablePresetValidation;
- (TSSStylesheet *)documentStylesheet;
- (void)installContactCurvedShadowPresetsInStylesheet:(NSObject *)arg0;
- (void)upgradeStylesWithBlock:(id /* block */)arg0;
- (void)installMoviePresetsInStylesheet:(NSObject *)arg0;
- (TSSTheme *)initWithContext:(NSObject *)arg0 documentStylesheet:(TSSStylesheet *)arg1;
- (void)bootstrapThemeAlternate:(int)arg0;
- (void)setDocumentStylesheet:(TSSStylesheet *)arg0;
- (id)migratedPresetUUIDForPresetUUID:(id)arg0;
- (NSString *)p_identifierForBootstrapTheme:(int)arg0;
- (void)movePresetOfKind:(id)arg0 fromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (char)containsCGColor:(struct CGColor *)arg0;
- (void)recordReplacementOfPresetUUID:(id)arg0 withPresetUUID:(id)arg1;
- (void)clearReplacementsOfPresetUUID:(id)arg0;
- (NSSet *)migratedPresetForPreset:(NSSet *)arg0;
- (id)migratedPresetForPresetWithoutFollowingReplacements:(id)arg0;
- (void)checkThemeStylesheetConsistency;
- (void)createCommentInfoStyleIfNeeded;
- (NSString *)paragraphStylesWithContentTag:(NSString *)arg0;
- (NSString *)paragraphStyleWithContentTag:(NSString *)arg0;
- (NSString *)paragraphStylesWithPartialContentTag:(NSString *)arg0;
- (id)paragraphPresetStyles;
- (void)modifyHyperlinkStyleToMatchSage;
- (void)createDefaultParagraphStyleIfNeeded;
- (id)undeletableStyles;
- (id)unmodifiableStyles;
- (void)removeTextStylesOfPresetKinds:(id)arg0 notReferencedInDocumentRoot:(NSObject *)arg1;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (TSSTheme *)initWithContext:(TSPObjectContext *)arg0;
- (NSArray *)colors;
- (TSWPSpecParagraphStyle *)defaultParagraphStyle;
- (NSString *)themeIdentifier;
- (void)setThemeIdentifier:(NSString *)arg0;
- (NSEnumerator *)childEnumerator;
- (NSObject *)defaultCharacterStyle;
- (NSObject *)defaultListStyle;

@end

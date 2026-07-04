/* Runtime dump - KNTheme
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNTheme : TSATheme <KNSlideCollection, TSSPresetSource, TSKTransformableObject, TSKDocumentObject>
{
    NSString * mUUID;
    NSArray * mMasters;
    NSObject<OS_dispatch_queue> * mDefaultMasterSlideNodeQueue;
    TSUWeakReference * mDefaultMasterSlideNodeReference;
    char mDefaultMasterSlideNodeIsOurBestGuess;
    int mSlideStyleIndex;
    NSMutableArray * mClassicThemeRecords;
    NSMutableDictionary * mCustomEffectTimingCurves;
    NSMutableDictionary * mSlideNodesForFormulaReferenceNamesCache;
    TSUPointerKeyDictionary * mFormulaReferenceNamesForSlideNodesCache;
}

@property (retain, nonatomic) NSString * UUID;
@property (retain, nonatomic) NSArray * masters;
@property (retain, nonatomic) KNSlideNode * defaultMasterSlideNode;
@property (readonly, nonatomic) char defaultMasterSlideNodeIsOurBestGuess;
@property (readonly, nonatomic) struct CGSize thumbnailSize;
@property (retain, nonatomic) NSArray * classicThemeRecords;
@property (copy, nonatomic) NSDictionary * customEffectTimingCurves;
@property (readonly, nonatomic) float cornerRadius;
@property (readonly, nonatomic) TSWPParagraphStyle * defaultPresenterNotesParagraphStyle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) KNSlideNode * defaultSlideNodeForNewSelection;

+ (void)registerPresetSourceClasses;
+ (KNTheme *)presetKinds;
+ (void)bootstrapPresetsOfKind:(NSString *)arg0 inTheme:(TSSTheme *)arg1 alternate:(int)arg2;
+ (KNTheme *)generateUUID;
+ (KNTheme *)nativeThemeNameFromTheme:(id)arg0;
+ (KNTheme *)classicThemeNameFromTheme:(id)arg0;
+ (KNTheme *)themeNameForCustomOrUnknownTheme;
+ (void)initialize;

- (KNTheme *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct ThemeArchive *)arg0 archiver:(struct /* ? */)arg1;
- (NSObject *)modelPathComponentForChild:(NSObject *)arg0;
- (void)loadFromArchive:(struct ThemeArchive *)arg0 unarchiver:(struct ThemeArchive)arg1;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (KNTheme *)initWithContext:(NSObject *)arg0 documentStylesheet:(TSSStylesheet *)arg1;
- (id)undeletableStyles;
- (NSArray *)masters;
- (NSObject *)formulaReferenceNameForSlideNode:(NSObject *)arg0;
- (NSString *)slideNodeForFormulaReferenceName:(NSString *)arg0 caseSensitive:(char)arg1;
- (NSString *)slideNamesMatchingPrefix:(NSString *)arg0;
- (NSString *)nameForMasterCopyWithName:(NSString *)arg0;
- (void)invalidateSlideNameCache;
- (TSWPParagraphStyle *)defaultPresenterNotesParagraphStyle;
- (void)p_cacheSlideNodes;
- (id)orderedSlideNodesInSelection:(id)arg0;
- (KNSlideNode *)defaultSlideNodeForNewSelection;
- (id)p_findDefaultMaster;
- (void)p_setDefaultMasterSlideNode:(NSObject *)arg0;
- (void)bootstrapThemeOfSize:(struct CGSize)arg0 alternate:(int)arg1;
- (void)addDefaultPresenterNotesStylesIfAbsent;
- (void)addMasterSlideNode:(NSObject *)arg0 withThumbnails:(PLPhotoBakedThumbnails *)arg1 dolcContext:(NSObject *)arg2;
- (void)insertMasterSlideNode:(NSObject *)arg0 withThumbnails:(PLPhotoBakedThumbnails *)arg1 atIndex:(unsigned int)arg2 dolcContext:(NSObject *)arg3;
- (NSString *)masterWithName:(NSString *)arg0;
- (char)containsMasterWithName:(NSString *)arg0;
- (id)p_nameByIncrementingCounterAfterStringToAppend:(id)arg0 forOriginalName:(NSString *)arg1 testForExistingName:(NSString *)arg2;
- (NSDictionary *)customEffectTimingCurves;
- (char)customTimingCurvesContainsName:(NSString *)arg0;
- (NSString *)customTimingCurveWithName:(NSString *)arg0;
- (void)setMasters:(NSArray *)arg0;
- (int)p_matchScoreForMaster:(id)arg0 toMaster:(PDSlideMaster *)arg1;
- (id)p_mappedMasterForMaster:(id)arg0 scoringHeuristic:(id)arg1;
- (id)mappedMasterForPasteForMaster:(id)arg0;
- (id)p_findSecondMaster;
- (void)p_selectSecondMasterAsDefault;
- (KNSlideNode *)defaultMasterSlideNode;
- (void)setDefaultMasterSlideNode:(KNSlideNode *)arg0;
- (void)bootstrapBlackThemeOfSize:(struct CGSize)arg0;
- (void)bootstrapGradientThemeOfSize:(struct CGSize)arg0;
- (void)bootstrapWhiteThemeOfSize:(struct CGSize)arg0;
- (void)addMasterSlideNode:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)setCustomEffectTimingCurves:(NSDictionary *)arg0;
- (void)setCustomTimingCurve:(int)arg0 forName:(NSString *)arg1;
- (void)removeCustomTimingCurveWithName:(NSString *)arg0;
- (id)updatedThemeCurveInfoForPastedThemeCurves:(id)arg0;
- (id)themeCurvesForBuilds:(id)arg0 slideNodes:(NSArray *)arg1;
- (void)removeMasterSlideNode:(NSObject *)arg0;
- (void)removeAllMasters;
- (id)mappedMasterForThemeChangeForMaster:(id)arg0;
- (id)mappedMasterForPasteForSlide:(id)arg0;
- (void)addClassicThemeRecord:(NSObject *)arg0;
- (void)setClassicThemeRecords:(NSArray *)arg0;
- (void)removeAllClassicThemeRecords;
- (void)selectSecondMasterAsDefault;
- (id)i_findDefaultMaster;
- (void)resolveDefaultMaster;
- (NSArray *)classicThemeRecords;
- (char)defaultMasterSlideNodeIsOurBestGuess;
- (void)dealloc;
- (float)cornerRadius;
- (NSString *)UUID;
- (struct CGSize)thumbnailSize;
- (NSEnumerator *)childEnumerator;
- (void)setUUID:(NSSet *)arg0;

@end

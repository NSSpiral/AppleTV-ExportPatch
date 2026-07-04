/* Runtime dump - KNDocumentRoot
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNDocumentRoot : TSADocumentRoot <TSKModel, TSTResolverContainerNameProvider>
{
    KNShow * mShow;
    KNThumbnailManager * mThumbnailManager;
    KNSlidePreviewManager * mSlidePreviewManager;
    KNRecordingSyncMaintainer * mRecordingSyncMaintainer;
    char mIsObservingRecording;
    char _isShowcastAllowed;
}

@property (retain, nonatomic) KNShow * show;
@property (readonly, nonatomic) char isShowcastAllowed;
@property (nonatomic) <KNDocumentRootDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)localizeModelObject:(NSObject *)arg0 withTemplateBundle:(NSObject *)arg1;

- (KNDocumentRoot *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct DocumentArchive *)arg0 archiver:(NSObject *)arg1;
- (void)documentDidLoad;
- (void)loadFromArchive:(struct DocumentArchive *)arg0 unarchiver:(struct DocumentArchive)arg1;
- (void)upgradeTextStylesForUnityAfterSingleStylesheetUpgrade;
- (char)isMultiPageForQuickLook;
- (void)willClose;
- (id)createViewStateRootForContinuation:(char)arg0;
- (NSArray *)warningLocationDescriptionForAffectedObjects:(NSArray *)arg0 sortingInfo:(id *)arg1;
- (int)compareLocationSortingInfo:(NSDictionary *)arg0 toSortingInfo:(NSDictionary *)arg1;
- (id)protected_defaultTextPresetOrdering;
- (void)setStylesheetForUpgradeToSingleStylesheet:(NSObject *)arg0;
- (void)prepareForSavingAsTemplate;
- (char)shouldAllowDrawableInGroups:(id)arg0 forImport:(char)arg1;
- (id)UIStateForChart:(id)arg0;
- (void)setUIState:(NSObject *)arg0 forChart:(GQHChart *)arg1;
- (unsigned int)writingDirectionForStorage;
- (char)shouldShowComments;
- (void)setThemeForTemplateImport:(id)arg0;
- (id)resolverContainerNameForResolver:(id)arg0;
- (NSObject *)nameForResolverContainer:(NSObject *)arg0;
- (NSString *)resolverContainerForName:(NSString *)arg0 caseSensitive:(char)arg1;
- (NSString *)resolverContainerNamesMatchingPrefix:(NSString *)arg0;
- (NSString *)resolverMatchingName:(NSString *)arg0 contextResolver:(NSObject *)arg1;
- (NSString *)resolverMatchingName:(NSString *)arg0 contextContainerName:(NSString *)arg1;
- (NSString *)resolversMatchingPrefix:(NSString *)arg0;
- (void)p_thumbnailUpgradeForUnity20SlideNodes:(id)arg0 andMasterSlideNodess:(id)arg1;
- (void)withRootSearchTargetAtIndex:(unsigned int)arg0 executeBlock:(id /* block */)arg1;
- (unsigned int)rootSearchTargetCountThroughIndex:(unsigned int)arg0;
- (id)slideNodeForClearedShow;
- (void)changeShowSizeTo:(struct CGSize)arg0;
- (void)preprocessForSaveAsTheme;
- (char)validateUIState:(NSObject *)arg0;
- (char)isSharedReadOnly;
- (void)p_applicationWillResignActive:(id)arg0;
- (void)p_applicationDidBecomeActive:(id)arg0;
- (char)isShowcastAllowed;
- (void)p_hyperlinkAndBreadcrumbUpgradeForUnity20SlideNodes:(id)arg0;
- (KNShow *)show;
- (void)dealloc;
- (void)setDelegate:(<KNDocumentRootDelegate> *)arg0;
- (KNDocumentRoot *)initWithContext:(TSPObjectContext *)arg0;
- (void)setShow:(KNShow *)arg0;
- (unsigned int)writingDirection;
- (unsigned int)applicationType;
- (NSEnumerator *)childEnumerator;
- (TPTheme *)theme;
- (void)setTheme:(TSSTheme *)arg0;
- (VKStylesheet *)stylesheet;

@end

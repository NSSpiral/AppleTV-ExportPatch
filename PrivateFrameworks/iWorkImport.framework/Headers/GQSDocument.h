/* Runtime dump - GQSDocument
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQSDocument : NSObject <GQWrapPointGenerator>
{
    GQPProcessor * mProcessor;
    GQDRoot * mRoot;
    struct __CFURL * mBundleUrl;
    SFUZipArchive * mArchive;
    <GQUOutputBundle> * mOutputBundle;
    struct __CFArray * mObjectStack;
    id mGeneratorState;
    GQSTable * mTableState;
    Class mCurrentDrawablesGenerator;
    Class mCurrentTableGenerator;
    <GQWrapPointGenerator> * mCurrentWrapPointGenerator;
    char mMustRegisterDrawables;
    char mGeneratorBeginWasCalled;
    char mShouldStreamTables;
    char mDoExternalTextWrap;
    char mGeneratingThumbnail;
    char mThumbnailGenerationDone;
    unsigned int mTextScale;
    struct set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > * mWrapPoints;
    struct __CFDictionary * mBundleResourceUriMap;
    GQDSStylesheet * mStylesheet;
    char mIsReadingStorageAttachments;
    struct __CFString * mFilename;
    struct __CFURL * mDocumentUrl;
    char _doCalculateThumbnailSize;
}

@property (nonatomic) char doCalculateThumbnailSize;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSObject *)peekObject;
- (NSObject *)popRetainedObject;
- (NSObject *)topObjectOfClass:(Class)arg0;
- (int)objectStackDepth;
- (void)setCurrentDrawablesGenerator:(Class)arg0;
- (Class)currentDrawablesGenerator;
- (void)setCurrentTableGenerator:(Class)arg0;
- (void)setMustRegisterDrawables:(char)arg0;
- (char)isGeneratingThumbnail;
- (void)setThumbnailGenerationDone:(char)arg0;
- (char)mustRegisterDrawables;
- (id)currentWrapPointGenerator;
- (struct set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > *)wrapPoints;
- (void)addWrapPoint:(NSObject *)arg0;
- (struct vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > *)createListOfWrapPointsAlongY:(id)arg0 minX:(id)arg1 maxX:(float)arg2 zIndex:(SEL)arg3;
- (void)clearWrapPoints;
- (char)doExternalTextWrap;
- (struct __CFURL *)createUriToDocumentBundleResource:(struct __CFString *)arg0;
- (TSCH3DRenderProcessor *)processor;
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg0 processorBundle:(struct __CFBundle *)arg1 skipCachingPDFAndNoExtentionResources:(char *)arg2;
- (NSObject *)tableState;
- (void)setTableState:(NSObject *)arg0;
- (char)isReadingStorageAttachments;
- (Class)currentTableGenerator;
- (char)shouldStreamTables;
- (void)setIsReadingStorageAttachments:(char)arg0;
- (NSObject *)generatorState;
- (char)doCalculateThumbnailSize;
- (NSBundle *)outputBundle;
- (void)setGeneratorState:(NSObject *)arg0;
- (struct __CFString *)uriForBundleResource:(struct __CFString *)arg0 ofType:(struct __CFString *)arg1;
- (void)setCurrentWrapPointGenerator:(id)arg0;
- (void)setDoExternalTextWrap:(char)arg0;
- (char)isThumbnailGenerationDone;
- (void)setGeneratorBeginWasCalled;
- (GQSDocument *)initWithRoot:(NSObject *)arg0 processor:(TSCH3DRenderProcessor *)arg1 bundleUrl:(struct __CFURL *)arg2 archive:(GQZArchive *)arg3 outputBundle:(NSObject *)arg4;
- (GQSDocument *)initWithRoot:(NSObject *)arg0 processor:(TSCH3DRenderProcessor *)arg1 archive:(GQZArchive *)arg2 outputBundle:(NSObject *)arg3 fileURL:(struct __CFURL *)arg4;
- (char)generatorBeginWasCalled;
- (void)setShouldStreamTables:(char)arg0;
- (void)setDoCalculateThumbnailSize:(char)arg0;
- (GQSDocument *)initWithRoot:(NSObject *)arg0 processor:(TSCH3DRenderProcessor *)arg1 outputBundle:(NSObject *)arg2 fileURL:(struct __CFURL *)arg3;
- (void)setGeneratingThumbnail:(char)arg0;
- (void)dealloc;
- (struct __CFString *)filename;
- (<TSKModel> *)root;
- (void)pushObject:(NSObject *)arg0;
- (VKStylesheet *)stylesheet;
- (void)setStylesheet:(TSSStylesheet *)arg0;

@end

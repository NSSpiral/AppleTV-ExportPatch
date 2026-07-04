/* Runtime dump - TSARenderingExporter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSARenderingExporter : NSObject <TSKRenderingExporter>
{
    TSADocumentRoot * mDocumentRoot;
    TSDImager * mImager;
    NSObject<TSARenderingExporterDelegate> * mRenderingExporterDelegate;
    char mIsCancelled;
    char mIsQuit;
    char mPaginate;
    char mDoesDrawAllPages;
    TSUProgressContext * mProgressContext;
    TSDBitmapRenderingQualityInfo * mBitmapRenderingQualityInfo;
}

@property (retain) TSUProgressContext * progressContext;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSARenderingExporter *)initWithDocumentRoot:(NSObject *)arg0;
- (char)exportToURL:(NSURL *)arg0 delegate:(NSObject *)arg1 error:(id *)arg2;
- (struct CGRect)boundsRect;
- (id)currentInfos;
- (double)totalProgess;
- (NSObject *)p_renderingExporterDelegate;
- (TSARenderingExporter *)initWithDocumentRoot:(NSObject *)arg0 imager:(TSDImager *)arg1;
- (struct CGRect)unscaledClipRect;
- (char)drawCurrentPageInContext:(struct CGContext *)arg0 viewScale:(float)arg1 unscaledClipRect:(struct CGRect)arg2 createPage:(struct CGSize)arg3;
- (void)waitForRecalcToFinish;
- (char)incrementPage;
- (void)p_drawCurrentPageWithContext:(struct CGContext *)arg0 returnSuccess:(char *)arg1 createPage:(char)arg2;
- (char)preparePage:(unsigned int)arg0;
- (void)drawAllPagesWithContext:(struct CGContext *)arg0 returnSuccess:(char *)arg1;
- (void)drawCurrentPageWithContext:(struct CGContext *)arg0 returnSuccess:(char *)arg1;
- (char)p_exportToURL:(NSURL *)arg0 pageNumber:(unsigned int)arg1 delegate:(NSObject *)arg2 error:(id *)arg3;
- (double)progressForCurrentPage;
- (char)setInfosToCurrentPage;
- (char)exportToURL:(NSURL *)arg0 pageNumber:(unsigned int)arg1 delegate:(NSObject *)arg2 error:(id *)arg3;
- (TSDImager *)imager;
- (void)setPaginate:(char)arg0;
- (char)paginate;
- (char)hasMoreThanOnePageToPrint;
- (TSDBitmapRenderingQualityInfo *)bitmapRenderingQualityInfo;
- (void)cancel;
- (void)dealloc;
- (char)isCancelled;
- (unsigned int)pageCount;
- (void)setup;
- (void)teardown;
- (void)setProgressContext:(TSUProgressContext *)arg0;
- (TSUProgressContext *)progressContext;
- (char)isQuit;
- (void)quit;
- (NSString *)documentRoot;

@end

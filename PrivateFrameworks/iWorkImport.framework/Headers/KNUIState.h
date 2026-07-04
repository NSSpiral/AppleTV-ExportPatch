/* Runtime dump - KNUIState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNUIState : NSObject <NSCopying>
{
    TSKSelectionPath * mSelectionPath;
    float mMobileCanvasViewScale;
    struct CGPoint mMobileCanvasOffset;
    float mDesktopCanvasViewScale;
    struct CGPoint mDesktopCanvasOffset;
    KNMacUILayout * mDocumentUILayout;
    char mSlideViewFitsContentInWindow;
    float mLightTableZoomScale;
    char mLightTableHidesSkippedSlides;
    struct CGPoint mDesktopMainWindowOrigin;
    struct CGSize mDesktopMainContentSize;
    float mDesktopNavigatorViewWidth;
    float mDesktopOutlineViewWidth;
    float mDesktopPresenterNotesViewHeight;
    NSMutableDictionary * mChartUIState;
    NSSet * mCollapsedSlideNodes;
    NSSet * mOutlineCollapsedSlideNodes;
    NSSet * mOutlineHasBodySlideNodes;
    char mShowSlideGuides;
    char mShowMasterGuides;
    char mShowsComments;
    char mShowsRuler;
}

@property (readonly, nonatomic) KNSlideCollectionSelection * slideTreeSelection;
@property (retain, nonatomic) TSKSelectionPath * selectionPath;
@property (nonatomic) float canvasViewScale;
@property (nonatomic) struct CGPoint canvasOffset;
@property (copy, nonatomic) KNMacUILayout * documentUILayout;
@property (nonatomic) char slideViewFitsContentInWindow;
@property (nonatomic) float lightTableZoomScale;
@property (nonatomic) char lightTableHidesSkippedSlides;
@property (nonatomic) struct CGPoint desktopMainWindowOrigin;
@property (nonatomic) struct CGSize desktopMainContentSize;
@property (nonatomic) float desktopNavigatorViewWidth;
@property (nonatomic) float desktopOutlineViewWidth;
@property (nonatomic) float desktopPresenterNotesHeight;
@property (copy, nonatomic) NSSet * collapsedSlideNodes;
@property (copy, nonatomic) NSSet * outlineCollapsedSlideNodes;
@property (copy, nonatomic) NSSet * outlineHasBodySlideNodes;
@property (nonatomic) char showSlideGuides;
@property (nonatomic) char showMasterGuides;
@property (nonatomic) char showsComments;
@property (nonatomic) char showsRuler;

- (TSKSelectionPath *)selectionPath;
- (void)setSelectionPath:(TSKSelectionPath *)arg0;
- (id)UIStateForChart:(id)arg0;
- (void)setUIState:(NSObject *)arg0 forChart:(GQHChart *)arg1;
- (void)saveToArchive:(struct UIStateArchive *)arg0 archiver:(NSObject *)arg1 context:(NSObject *)arg2;
- (KNSlideCollectionSelection *)slideTreeSelection;
- (NSSet *)collapsedSlideNodes;
- (NSSet *)outlineCollapsedSlideNodes;
- (NSSet *)outlineHasBodySlideNodes;
- (void)setOutlineCollapsedSlideNodes:(NSSet *)arg0;
- (void)setOutlineHasBodySlideNodes:(NSSet *)arg0;
- (float)canvasViewScale;
- (struct CGPoint)canvasOffset;
- (KNMacUILayout *)documentUILayout;
- (char)slideViewFitsContentInWindow;
- (float)lightTableZoomScale;
- (char)lightTableHidesSkippedSlides;
- (struct CGPoint)desktopMainWindowOrigin;
- (struct CGSize)desktopMainContentSize;
- (float)desktopNavigatorViewWidth;
- (float)desktopOutlineViewWidth;
- (float)desktopPresenterNotesHeight;
- (char)showSlideGuides;
- (char)showMasterGuides;
- (char)showsComments;
- (char)showsRuler;
- (void)setSlideTreeSelection:(KNSlideCollectionSelection *)arg0 withDocumentRoot:(NSObject *)arg1;
- (void)setCanvasViewScale:(float)arg0;
- (void)setCanvasOffset:(struct CGPoint)arg0;
- (NSString *)archivedUIStateInContext:(NSObject *)arg0;
- (void)updateOutlineStateFromSlideTree:(id)arg0;
- (void)setDocumentUILayout:(KNMacUILayout *)arg0;
- (void)setSlideViewFitsContentInWindow:(char)arg0;
- (void)setLightTableZoomScale:(float)arg0;
- (void)setLightTableHidesSkippedSlides:(char)arg0;
- (void)setDesktopMainWindowOrigin:(struct CGPoint)arg0;
- (void)setDesktopMainContentSize:(struct CGSize)arg0;
- (void)setDesktopNavigatorViewWidth:(float)arg0;
- (void)setDesktopOutlineViewWidth:(float)arg0;
- (void)setDesktopPresenterNotesHeight:(float)arg0;
- (void)setCollapsedSlideNodes:(NSSet *)arg0;
- (void)setShowMasterGuides:(char)arg0;
- (void)setShowSlideGuides:(char)arg0;
- (void)setShowsComments:(char)arg0;
- (void)setShowsRuler:(char)arg0;
- (void)loadFromArchive:(struct UIStateArchive *)arg0 unarchiver:(struct UIStateArchive)arg1 context:(NSObject *)arg2;
- (void)dealloc;
- (KNUIState *)init;
- (NSString *)debugDescription;
- (KNUIState *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;

@end

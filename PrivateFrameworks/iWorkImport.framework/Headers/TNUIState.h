/* Runtime dump - TNUIState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNUIState : NSObject <NSCopying>
{
    TSURetainedPointerKeyDictionary * mSheetUIStates;
    TSURetainedPointerKeyDictionary * mEditModeSheetUIStates;
    char mShowCanvasGuides;
    char mInspectorPaneVisible;
    char mRemovedAllQuickCalcFunctions;
    char mShowsComments;
    TSKSelectionPath * mSelectionPath;
    <TNUIStateDelegate> * mDelegate;
    int mDocumentMode;
    int mInspectorPaneViewMode;
    NSArray * mSelectedQuickCalcFunctions;
    NSMutableDictionary * mChartUIState;
    struct CGSize mDesktopScreenSize;
    struct CGRect mDesktopWindowFrame;
}

@property (retain, nonatomic) TSKSelectionPath * selectionPath;
@property (readonly, nonatomic) TNSheetSelection * sheetSelection;
@property (readonly, nonatomic) struct CGPoint scrollPosition;
@property (readonly, nonatomic) struct CGPoint previousScrollPosition;
@property (readonly, nonatomic) char hasVisibleRect;
@property (readonly, nonatomic) char hasPreviousVisibleRect;
@property (readonly, nonatomic) float viewScale;
@property (readonly, nonatomic) float previousViewScale;
@property (nonatomic) struct CGRect visibleRect;
@property (nonatomic) struct CGRect previousVisibleRect;
@property (nonatomic) <TNUIStateDelegate> * delegate;
@property (nonatomic) int documentMode;
@property (nonatomic) char inspectorPaneVisible;
@property (nonatomic) int inspectorPaneViewMode;
@property (copy, nonatomic) NSArray * selectedQuickCalcFunctions;
@property (nonatomic) char removedAllQuickCalcFunctions;
@property (nonatomic) char showsComments;
@property (nonatomic) struct CGRect desktopWindowFrame;
@property (nonatomic) struct CGSize desktopScreenSize;
@property (nonatomic) char showCanvasGuides;
@property (readonly, nonatomic) NSMutableDictionary * chartUIState;

+ (float)maximumViewScale;
+ (float)minimumViewScale;

- (TNUIState *)initWithArchive:(struct UIStateArchive *)arg0 unarchiver:(struct UIStateArchive)arg1;
- (float)viewScale;
- (TSKSelectionPath *)selectionPath;
- (void)setSelectionPath:(TSKSelectionPath *)arg0;
- (id)UIStateForChart:(id)arg0;
- (void)setUIState:(NSObject *)arg0 forChart:(GQHChart *)arg1;
- (void)saveToArchive:(struct UIStateArchive *)arg0 archiver:(NSObject *)arg1 context:(NSObject *)arg2;
- (int)inspectorPaneViewMode;
- (void)setInspectorPaneViewMode:(int)arg0;
- (char)showsComments;
- (NSString *)archivedUIStateInContext:(NSObject *)arg0;
- (void)setShowsComments:(char)arg0;
- (NSObject *)uiStateForActiveSheet;
- (NSObject *)uiStateForSheet:(NSObject *)arg0;
- (float)p_calculateViewScaleForVisibleRect:(struct CGRect)arg0;
- (TNSheetSelection *)sheetSelection;
- (void)setVisibleRect:(struct CGRect)arg0 forSheet:(struct CGSize)arg1;
- (void)clearVisibleRect;
- (struct CGRect)previousVisibleRect;
- (void)setPreviousVisibleRect:(struct CGRect)arg0;
- (void)setPreviousVisibleRect:(struct CGRect)arg0 forSheet:(struct CGSize)arg1;
- (void)clearPreviousVisibleRect;
- (char)hasPreviousVisibleRect;
- (float)previousViewScale;
- (float)p_defaultViewScale;
- (void)removeUIStateForSheet:(NSObject *)arg0;
- (void)setUIState:(NSObject *)arg0 forSheet:(NSObject *)arg1;
- (NSMutableDictionary *)chartUIState;
- (char)hasVisibleRect;
- (void)p_enterPaginatedMode;
- (void)p_exitPaginatedMode;
- (int)documentMode;
- (struct CGPoint)scrollPosition;
- (struct CGPoint)previousScrollPosition;
- (void)enumerateSheetUIStatesWithBlock:(id /* block */)arg0;
- (void)setDocumentMode:(int)arg0;
- (char)isInspectorPaneVisible;
- (void)setInspectorPaneVisible:(char)arg0;
- (NSArray *)selectedQuickCalcFunctions;
- (void)setSelectedQuickCalcFunctions:(NSArray *)arg0;
- (char)removedAllQuickCalcFunctions;
- (void)setRemovedAllQuickCalcFunctions:(char)arg0;
- (char)showCanvasGuides;
- (void)setShowCanvasGuides:(char)arg0;
- (struct CGRect)desktopWindowFrame;
- (void)setDesktopWindowFrame:(struct CGRect)arg0;
- (struct CGSize)desktopScreenSize;
- (void)setDesktopScreenSize:(struct CGSize)arg0;
- (void)dealloc;
- (void)setDelegate:(<TNUIStateDelegate> *)arg0;
- (TNUIState *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (<TNUIStateDelegate> *)delegate;
- (TNUIState *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGRect)visibleRect;
- (void).cxx_construct;
- (void)setVisibleRect:(struct CGRect)arg0;

@end

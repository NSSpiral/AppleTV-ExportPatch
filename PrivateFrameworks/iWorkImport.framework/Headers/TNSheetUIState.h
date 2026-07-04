/* Runtime dump - TNSheetUIState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNSheetUIState : NSObject <NSCopying>
{
    struct CGRect mVisibleRect;
    struct CGRect mPreviousVisibleRect;
    char mHasVisibleRect;
    char mHasPreviousVisibleRect;
    float mPreviousViewScale;
    float mViewScale;
    int mDeviceIdiom;
    TSKSelectionPath * mSelectionPath;
}

@property (nonatomic) struct CGRect visibleRect;
@property (readonly, nonatomic) struct CGPoint scrollPosition;
@property (nonatomic) struct CGRect previousVisibleRect;
@property (readonly, nonatomic) struct CGPoint previousScrollPosition;
@property (nonatomic) char hasVisibleRect;
@property (nonatomic) char hasPreviousVisibleRect;
@property (nonatomic) float viewScale;
@property (nonatomic) float previousViewScale;
@property (nonatomic) int archivedDeviceIdiom;
@property (retain, nonatomic) TSKSelectionPath * selectionPath;

+ (int)currentDeviceIdiom;
+ (NSObject *)sheetUIState;
+ (NSObject *)sheetUIStateWithVisibleRect:(struct CGRect)arg0;
+ (NSObject *)sheetUIStateWithPreviousVisibleRect:(struct CGRect)arg0;

- (TNSheetUIState *)initWithArchive:(struct SheetUIStateArchive *)arg0 unarchiver:(struct SheetUIStateArchive)arg1;
- (float)viewScale;
- (TSKSelectionPath *)selectionPath;
- (void)setSelectionPath:(TSKSelectionPath *)arg0;
- (void)saveToArchive:(struct SheetUIStateArchive *)arg0 archiver:(NSObject *)arg1 context:(NSObject *)arg2;
- (void)clearVisibleRect;
- (struct CGRect)previousVisibleRect;
- (void)setPreviousVisibleRect:(struct CGRect)arg0;
- (void)setPreviousViewScale:(float)arg0;
- (void)clearPreviousVisibleRect;
- (int)archivedDeviceIdiom;
- (char)hasPreviousVisibleRect;
- (float)previousViewScale;
- (char)hasVisibleRect;
- (struct CGPoint)scrollPosition;
- (struct CGPoint)previousScrollPosition;
- (NSString *)p_persistableSelectionPath:(NSString *)arg0;
- (void)setHasVisibleRect:(char)arg0;
- (void)setHasPreviousVisibleRect:(char)arg0;
- (void)setArchivedDeviceIdiom:(int)arg0;
- (void)dealloc;
- (TNSheetUIState *)init;
- (char)isEqual:(NSObject *)arg0;
- (TNSheetUIState *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGRect)visibleRect;
- (void).cxx_construct;
- (void)setVisibleRect:(struct CGRect)arg0;
- (void)setViewScale:(float)arg0;

@end

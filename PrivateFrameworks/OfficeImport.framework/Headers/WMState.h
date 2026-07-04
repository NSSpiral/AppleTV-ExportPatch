/* Runtime dump - WMState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMState : CMState
{
    CMOutlineState * currentListState;
    CMOutlineState * outlineState;
    NSMutableDictionary * listStates;
    WDText * mLastHeader;
    WDText * mLastFooter;
    unsigned int mCurrentPage;
    unsigned int mBlockIndex;
    unsigned int mRunIndex;
    float mTopMargin;
    float mLeftMargin;
    float mPageHeight;
    char mIsFrame;
    char mIsFrameStart;
    char mIsFrameEnd;
    char mIsHeaderOrFooter;
    float mTotalPageHeight;
}

- (float)topMargin;
- (void)setTopMargin:(float)arg0;
- (void)dealloc;
- (WMState *)init;
- (void)setCurrentPage:(unsigned int)arg0;
- (unsigned int)currentPage;
- (float)leftMargin;
- (float)pageHeight;
- (char)isHeaderOrFooter;
- (float)pageOffset;
- (float)totalPageHeight;
- (void)setTotalPageHeight:(float)arg0;
- (unsigned int)runIndex;
- (void)setRunIndex:(unsigned int)arg0;
- (char)isCurrentListId:(unsigned int)arg0;
- (NSObject *)listStateForListWithId:(long)arg0 settingUpStateIfNeededWithDocument:(NSObject *)arg1;
- (void)setCurrentListState:(CMOutlineState *)arg0;
- (CMOutlineState *)currentListState;
- (void)setBlockIndex:(unsigned int)arg0;
- (char)isFrame;
- (unsigned int)blockIndex;
- (void)setIsFrame:(char)arg0;
- (void)setIsFrameStart:(char)arg0;
- (void)setIsFrameEnd:(char)arg0;
- (char)isFrameEnd;
- (char)isFrameStart;
- (void)setLeftMargin:(float)arg0;
- (void)setPageHeight:(float)arg0;
- (void)setLastHeader:(NSString *)arg0;
- (NSString *)lastHeader;
- (void)setIsHeaderOrFooter:(char)arg0;
- (void)setLastFooter:(id)arg0;
- (id)lastFooter;
- (void)clearCurrentListState;
- (char)isCurrentListStateOverridden;
- (NSObject *)listStateForListId:(unsigned int)arg0;
- (void)setListState:(NSObject *)arg0 forListId:(unsigned int)arg1;
- (CMOutlineState *)outlineState;

@end

/* Runtime dump - TSTCellStateForLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellStateForLayout : NSObject
{
    char mCellPropsRowHeight;
    char mCellWraps;
    char mForDrawing;
    char mInDynamicLayout;
    struct ? mModelCellID;
    TSTCell * mCell;
    TSWPColumn * mWPColumn;
    float mMaxWidthForChildren;
    int mVerticalAlignment;
    id mCellContents;
    TSTLayoutContentCachedKey * mKeyVal;
    int mLayoutCacheFlags;
    unsigned int mPageNumber;
    unsigned int mPageCount;
    struct TSUColumnRowRect mMergedRange;
    struct CGSize mMinSize;
    struct CGSize mMaxSize;
    struct UIEdgeInsets mPaddingInsets;
}

@property (nonatomic) struct ? modelCellID;
@property (copy, nonatomic) TSTCell * cell;
@property (nonatomic) struct TSUColumnRowRect mergedRange;
@property (retain, nonatomic) id cellContents;
@property (nonatomic) struct CGSize minSize;
@property (nonatomic) struct CGSize maxSize;
@property (nonatomic) float maxWidthForChildren;
@property (nonatomic) struct UIEdgeInsets paddingInsets;
@property (nonatomic) int verticalAlignment;
@property (nonatomic) char cellPropsRowHeight;
@property (nonatomic) char cellWraps;
@property (nonatomic) char forDrawing;
@property (nonatomic) char inDynamicLayout;
@property (nonatomic) int layoutCacheFlags;
@property (readonly, nonatomic) char hasContent;
@property (retain, nonatomic) TSTLayoutContentCachedKey * keyVal;
@property (retain, nonatomic) TSWPColumn * wpColumn;
@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) unsigned int pageCount;

- (void)setModelCellID:(struct ?)arg0;
- (void)setCellPropsRowHeight:(char)arg0;
- (void)setCellWraps:(char)arg0;
- (void)setPaddingInsets:(struct UIEdgeInsets)arg0;
- (void)setForDrawing:(char)arg0;
- (void)setMergedRange:(struct TSUColumnRowRect)arg0;
- (void)setInDynamicLayout:(char)arg0;
- (void)setCellContents:(id)arg0;
- (void)setLayoutCacheFlags:(int)arg0;
- (TSWPColumn *)wpColumn;
- (TSTLayoutContentCachedKey *)keyVal;
- (int)layoutCacheFlags;
- (id)cellContents;
- (void)setMaxWidthForChildren:(float)arg0;
- (struct ?)modelCellID;
- (char)cellWraps;
- (struct UIEdgeInsets)paddingInsets;
- (void)setKeyVal:(TSTLayoutContentCachedKey *)arg0;
- (float)maxWidthForChildren;
- (void)setWpColumn:(TSWPColumn *)arg0;
- (struct TSUColumnRowRect)mergedRange;
- (char)inDynamicLayout;
- (char)cellPropsRowHeight;
- (char)forDrawing;
- (void)dealloc;
- (TSTCellStateForLayout *)init;
- (struct CGSize)maxSize;
- (struct CGSize)minSize;
- (void)setMaxSize:(struct CGSize)arg0;
- (char)hasContent;
- (unsigned int)pageCount;
- (TSTCell *)cell;
- (void)setPageCount:(unsigned int)arg0;
- (void)setCell:(TSTCell *)arg0;
- (unsigned int)pageNumber;
- (void)setMinSize:(struct CGSize)arg0;
- (void)setPageNumber:(unsigned int)arg0;
- (int)verticalAlignment;
- (void)setVerticalAlignment:(int)arg0;

@end

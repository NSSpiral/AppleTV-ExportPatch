/* Runtime dump - TSTTablePartitioner
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTablePartitioner : NSObject <TSDPartitioner>
{
    TSTTableInfo * mTableInfo;
    TSDInfoGeometry * mInfoGeometry;
    float mFirstPartitionWidth;
    struct CGSize mScaleToFit;
    TSTLayout * mScaledLayout;
    TSUPointerKeyDictionary * mHintMatricesByCanvas;
    NSMutableDictionary * mPartitioningPassCache;
}

@property (readonly, nonatomic) TSTLayout * scaledLayout;
@property (readonly, nonatomic) TSTTableInfo * tableInfo;
@property (readonly, nonatomic) float inlineTableWidth;
@property (nonatomic) struct CGSize scaleToFit;
@property (readonly, nonatomic) char scaleIsValid;
@property (copy, nonatomic) TSDInfoGeometry * infoGeometry;

- (struct CGSize)scaleToFit;
- (void)setScaleToFit:(struct CGSize)arg0;
- (TSDInfoGeometry *)infoGeometry;
- (NSObject *)nextHintForSize:(struct CGSize)arg0 parentLayout:(TSWPTextParentLayout *)arg1 previousHint:(NSObject *)arg2 horizontally:(char)arg3 outFinished:(char *)arg4;
- (id)layoutForHint:(TSTLayoutHint *)arg0 parentLayout:(TSWPTextParentLayout *)arg1;
- (NSObject *)nextLayoutForSize:(struct CGSize)arg0 parentLayout:(TSWPTextParentLayout *)arg1 previousHint:(NSObject *)arg2 horizontally:(char)arg3 outFinished:(char *)arg4;
- (char)didHint:(id)arg0 syncWithNextHint:(id)arg1 horizontally:(char)arg2 delta:(int)arg3;
- (NSObject *)hintForLayout:(NSObject *)arg0;
- (TSTTableInfo *)tableInfo;
- (char)scaleIsValid;
- (void)setInfoGeometry:(TSDInfoGeometry *)arg0;
- (TSTLayout *)scaledLayout;
- (void)validateScaledLayout;
- (char)p_didFinishPartitioningHint:(id)arg0 horizontally:(char)arg1;
- (struct TSUColumnRowRect)measureCellRangeForNextPartitionOfSize:(NSObject *)arg0 previousHint:(SEL)arg1 horizontally:(struct CGSize)arg2;
- (id)partitioningPassForHint:(id)arg0 withPreviousHint:(id)arg1;
- (id)hintCacheKeyForHint:(id)arg0;
- (char)shouldReuseLayout:(NSObject *)arg0 forSize:(struct CGSize)arg1 parentLayout:(TSWPTextParentLayout *)arg2 hint:(id)arg3;
- (void)p_flushCacheAfterPartitioningFinished:(id)arg0 lastHint:(id)arg1 horizontally:(char)arg2;
- (NSObject *)partitioningPassForFirstPartitionSize:(struct CGSize)arg0;
- (id)hintCacheKeyForPartitioningPass:(id)arg0 andHintID:(struct ?)arg1;
- (float)inlineTableWidth;
- (TSTTablePartitioner *)initWithInfo:(NSDictionary *)arg0;
- (void)dealloc;

@end

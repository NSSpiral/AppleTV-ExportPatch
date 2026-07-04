/* Runtime dump - TSWPTOCLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCLayout : TSWPShapeLayout
{
    TSWPTOCLayoutHint * _hint;
    unsigned int _initialCharIndex;
    struct CGSize _maxSize;
}

@property (nonatomic) struct CGSize maxSize;
@property (readonly, nonatomic) unsigned int initialCharIndex;
@property (readonly, nonatomic) TSWPTOCLayoutHint * hint;
@property (readonly, nonatomic) char lastLayoutInTOC;

- (NSObject *)computeLayoutGeometry;
- (struct CGRect)boundsForStandardKnobs;
- (id)childSearchTargets;
- (struct CGSize)adjustedInsetsForTarget:(NSObject *)arg0;
- (float)widthForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1;
- (float)gapForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1;
- (float)positionForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1 target:(NSObject *)arg2 outWidth:(float *)arg3 outGap:(float *)arg4;
- (char)alwaysStartsNewTarget;
- (char)shrinkTextToFit;
- (unsigned int)autosizeFlagsForTextLayout:(NSObject *)arg0;
- (int)verticalAlignmentForTextLayout:(NSObject *)arg0;
- (void)invalidateForAutosizingTextLayout:(NSObject *)arg0;
- (struct CGRect)nonAutosizedFrameForTextLayout:(NSObject *)arg0;
- (struct CGRect)autosizedFrameForTextLayout:(NSObject *)arg0 textSize:(SEL)arg1;
- (Class)repClassForTextLayout:(NSObject *)arg0;
- (float)maxAutoGrowHeightForTextLayout:(NSObject *)arg0;
- (unsigned int)initialCharIndex;
- (void)layoutSearchForString:(NSString *)arg0 options:(unsigned int)arg1 hitBlock:(id /* block */)arg2;
- (TSWPTOCLayout *)initWithInfo:(NSDictionary *)arg0 initialCharIndex:(unsigned int)arg1 maxSize:(struct CGSize)arg2;
- (char)isLastLayoutInTOC;
- (TSWPTOCLayout *)initWithInfo:(NSDictionary *)arg0;
- (void)dealloc;
- (struct CGSize)maxSize;
- (TSWPPadding *)layoutMargins;
- (void)setMaxSize:(struct CGSize)arg0;
- (void).cxx_construct;
- (unsigned int)columnCount;
- (char)isSelectable;
- (TSWPTOCLayoutHint *)hint;
- (char)isDraggable;

@end

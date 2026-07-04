/* Runtime dump - KNNoteLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNNoteLayout : TSDLayout <TSWPLayoutParent, TSWPColumnMetrics>
{
    struct CGSize mSizeOfScrollViewEnclosingCanvas;
    TSWPLayout * mContainedLayout;
    TSWPPadding * mPadding;
}

@property (readonly, nonatomic) TSWPLayout * containedLayout;
@property (readonly, nonatomic) TSWPPadding * padding;
@property (readonly, nonatomic) TSWPPadding * layoutMargins;
@property (readonly, nonatomic) unsigned int columnCount;
@property (readonly, nonatomic) char alwaysStartsNewTarget;
@property (readonly, nonatomic) char shrinkTextToFit;
@property (readonly, nonatomic) char columnsAreLeftToRight;
@property (readonly, nonatomic) float textScaleFactor;

- (void)invalidateSize;
- (NSDictionary *)layoutGeometryFromInfo;
- (NSObject *)computeLayoutGeometry;
- (void)updateChildrenFromInfo;
- (struct CGPoint)capturedInfoPositionForAttachment;
- (void)insertChild:(NSObject *)arg0 below:(char)arg1;
- (void)insertChild:(NSObject *)arg0 above:(UITextEffectsWindowNoAbove *)arg1;
- (char)textIsVertical;
- (struct CGSize)adjustedInsetsForTarget:(NSObject *)arg0;
- (float)widthForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1;
- (float)gapForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1;
- (float)positionForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1 target:(NSObject *)arg2 outWidth:(float *)arg3 outGap:(float *)arg4;
- (char)alwaysStartsNewTarget;
- (char)shrinkTextToFit;
- (char)columnsAreLeftToRight;
- (float)textScaleFactor;
- (unsigned int)autosizeFlagsForTextLayout:(NSObject *)arg0;
- (int)verticalAlignmentForTextLayout:(NSObject *)arg0;
- (void)invalidateForAutosizingTextLayout:(NSObject *)arg0;
- (struct CGRect)nonAutosizedFrameForTextLayout:(NSObject *)arg0;
- (struct CGRect)autosizedFrameForTextLayout:(NSObject *)arg0 textSize:(SEL)arg1;
- (NSObject *)dependentsOfTextLayout:(NSObject *)arg0;
- (Class)repClassForTextLayout:(NSObject *)arg0;
- (float)maxAutoGrowHeightForTextLayout:(NSObject *)arg0;
- (NSObject *)columnMetricsForCharIndex:(unsigned int)arg0 outRange:(struct _NSRange)arg1;
- (void)createContainedLayoutForEditing;
- (TSWPLayout *)containedLayout;
- (char)supportsBoldItalicUnderlineShortcuts;
- (char)p_isForPrint;
- (id)p_adjustedPaddingForBodyWidth:(float)arg0;
- (void)invalidatePadding;
- (float)textScaleFactorForPrinting;
- (void)dealloc;
- (TSWPPadding *)layoutMargins;
- (TSWPPadding *)padding;
- (void).cxx_construct;
- (unsigned int)columnCount;
- (void)setChildren:(NSArray *)arg0;
- (void)addChild:(OADDrawable *)arg0;
- (void)insertChild:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)replaceChild:(NSObject *)arg0 with:(OADDrawable *)arg1;
- (NSArray *)children;

@end

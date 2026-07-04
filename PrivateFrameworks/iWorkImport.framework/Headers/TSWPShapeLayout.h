/* Runtime dump - TSWPShapeLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPShapeLayout : TSDShapeLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver>
{
    TSDWrapSegments * _cachedInteriorWrapSegments;
    char _observingStorage;
    TSWPLayout * _containedLayout;
    <TSWPShapeLayoutDelegate> * _delegate;
}

@property (readonly, nonatomic) TSWPLayout * containedLayout;
@property (readonly, nonatomic) char autosizes;
@property <TSWPShapeLayoutDelegate> * delegate;
@property (readonly, nonatomic) TSWPPadding * layoutMargins;
@property (readonly, nonatomic) unsigned int columnCount;
@property (readonly, nonatomic) char alwaysStartsNewTarget;
@property (readonly, nonatomic) char shrinkTextToFit;
@property (readonly, nonatomic) char columnsAreLeftToRight;
@property (readonly, nonatomic) float textScaleFactor;

- (void)invalidateSize;
- (void)processChangedProperty:(int)arg0;
- (void)updateChildrenFromInfo;
- (NSArray *)dependentLayouts;
- (char)parentAutosizes;
- (void)willBeAddedToLayoutController:(BRController *)arg0;
- (void)willBeRemovedFromLayoutController:(BRController *)arg0;
- (void)insertChild:(NSObject *)arg0 below:(char)arg1;
- (void)insertChild:(NSObject *)arg0 above:(UITextEffectsWindowNoAbove *)arg1;
- (NSString *)interiorWrapPath;
- (TSDPathSource *)pathSource;
- (struct CGAffineTransform)computeLayoutTransform;
- (char)isInvisibleAutosizingShape;
- (struct CGSize)adjustedInsetsForTarget:(NSObject *)arg0;
- (float)widthForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1;
- (float)gapForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1;
- (float)positionForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1 target:(NSObject *)arg2 outWidth:(float *)arg3 outGap:(float *)arg4;
- (char)alwaysStartsNewTarget;
- (char)shrinkTextToFit;
- (char)columnsAreLeftToRight;
- (unsigned int)autosizeFlagsForTextLayout:(NSObject *)arg0;
- (int)verticalAlignmentForTextLayout:(NSObject *)arg0;
- (void)invalidateForAutosizingTextLayout:(NSObject *)arg0;
- (struct CGRect)nonAutosizedFrameForTextLayout:(NSObject *)arg0;
- (struct CGRect)autosizedFrameForTextLayout:(NSObject *)arg0 textSize:(SEL)arg1;
- (NSObject *)dependentsOfTextLayout:(NSObject *)arg0;
- (Class)repClassForTextLayout:(NSObject *)arg0;
- (float)maxAutoGrowWidthForTextLayout:(NSObject *)arg0;
- (float)maxAutoGrowWidthForTextLayout:(NSObject *)arg0;
- (char)textLayoutShouldWrapAroundExternalDrawables:(id)arg0;
- (char)textLayoutShouldLayoutVertically:(id)arg0;
- (NSObject *)textWrapper;
- (TSUBezierPath *)interiorClippingPath;
- (struct CGPoint)autosizePositionOffset;
- (void)createContainedLayoutForEditing;
- (TSWPLayout *)containedLayout;
- (char)autosizes;
- (void)createContainedLayoutForInstructionalText;
- (TSDWrapSegments *)interiorWrapSegments;
- (struct CGAffineTransform)autosizedTransform;
- (struct CGAffineTransform)autosizedTransformForInfoGeometry:(NSObject *)arg0;
- (struct CGPoint)autosizePositionOffsetForFixedWidth:(char)arg0 height:(char)arg1;
- (unsigned int)cropLine:(struct CGRect)arg0 lineSegmentRects:(struct CGSize)arg1;
- (TSWPShapeLayout *)initWithInfo:(NSDictionary *)arg0;
- (void)invalidatePath;
- (void)dealloc;
- (void)setDelegate:(<TSWPShapeLayoutDelegate> *)arg0;
- (<TSWPShapeLayoutDelegate> *)delegate;
- (TSWPPadding *)layoutMargins;
- (void)setGeometry:(TSDInfoGeometry *)arg0;
- (unsigned int)columnCount;
- (void)setChildren:(NSArray *)arg0;
- (void)addChild:(OADDrawable *)arg0;
- (void)insertChild:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)replaceChild:(NSObject *)arg0 with:(OADDrawable *)arg1;
- (NSArray *)children;

@end

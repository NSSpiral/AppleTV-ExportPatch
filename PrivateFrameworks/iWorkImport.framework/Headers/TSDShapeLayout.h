/* Runtime dump - TSDShapeLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeLayout : TSDStyledLayout
{
    struct ? mShapeInvalidFlags;
    TSUBezierPath * mCachedPath;
    struct CGRect mCachedPathBounds;
    struct CGRect mCachedPathBoundsWithoutStroke;
    char mCachedPathIsOpen;
    char mCachedPathIsLineSegment;
    struct CGRect mCachedAlignmentFrame;
    struct CGRect mCachedAlignmentFrameInRoot;
    struct CGAffineTransform mCachedAlignmentFrameInRootTransformInRoot;
    struct CGPoint mHeadPoint;
    struct CGPoint mTailPoint;
    struct CGPoint mHeadLineEndPoint;
    struct CGPoint mTailLineEndPoint;
    float mHeadLineEndAngle;
    float mTailLineEndAngle;
    int mHeadCutSegment;
    int mTailCutSegment;
    float mHeadCutT;
    float mTailCutT;
    TSUBezierPath * mCachedClippedPath;
    TSDPathSource * mShrunkenPathSource;
    TSDEditableBezierPathSource * mCachedEditableBezierPathSource;
    TSDPathSource * mCachedPathSource;
    TSDPathSource * mResizePathSource;
    TSDInfoGeometry * mResizeInfoGeometry;
    TSDInfoGeometry * mInitialInfoGeometry;
    TSDMutableStroke * mDynamicStroke;
    TSDFill * mDynamicFill;
}

@property (readonly, nonatomic) TSDFill * fill;
@property (retain, nonatomic) TSDFill * dynamicFill;

- (void)invalidateFrame;
- (NSDictionary *)layoutGeometryFromInfo;
- (NSObject *)computeLayoutGeometry;
- (void)processChangedProperty:(int)arg0;
- (struct CGRect)alignmentFrame;
- (NSString *)i_computeWrapPath;
- (struct CGRect)boundsForStandardKnobs;
- (char)shouldBeDisplayedInShowMode;
- (char)isStrokeBeingManipulated;
- (void)dynamicStrokeWidthChangeDidBegin;
- (void)dynamicStrokeWidthUpdateToValue:(float)arg0;
- (void)dynamicStrokeWidthChangeDidEnd;
- (NSObject *)initialInfoGeometry;
- (struct CGPoint)centerForConnecting;
- (struct CGRect)alignmentFrameInRoot;
- (char)supportsRotation;
- (char)supportsResize;
- (TSDPathSource *)pathSource;
- (char)isTailEndOnLeft;
- (char)pathIsOpen;
- (NSDictionary *)shapeInfo;
- (struct CGRect)shapeFrameWithTransform:(NSObject *)arg0;
- (struct CGRect)pathBounds;
- (void)aliasPathForScale:(float)arg0 adjustedStroke:(id *)arg1 adjustedPath:(id *)arg2 startDelta:(struct CGPoint *)arg3 endDelta:(struct CGPoint *)arg4;
- (struct CGRect)pathBoundsWithoutStroke;
- (char)pathIsLineSegment;
- (id)strokeHeadLineEnd;
- (id)strokeTailLineEnd;
- (struct CGPoint)headLineEndPoint;
- (struct CGPoint)tailLineEndPoint;
- (float)headLineEndAngle;
- (float)tailLineEndAngle;
- (float)lineEndScale;
- (NSObject *)layoutInfoGeometry;
- (void)invalidatePathBounds;
- (struct CGAffineTransform)computeLayoutTransform;
- (void)p_invalidateHead;
- (void)p_invalidateTail;
- (NSString *)p_cachedPath;
- (struct CGRect)p_cachedPathBounds;
- (struct CGRect)p_cachedPathBoundsWithoutStroke;
- (char)p_cachedPathIsOpen;
- (char)p_cachedPathIsLineSegment;
- (void)p_validateHeadAndTail;
- (void)p_validateHeadLineEnd;
- (void)p_validateTailLineEnd;
- (NSString *)p_createClippedPath;
- (id)clippedPathForLineEnds;
- (struct CGRect)p_boundsOfLineEndForHead:(id)arg0 transform:(SEL)arg1;
- (char)isInvisibleAutosizingShape;
- (void)aliasPathForScale:(float)arg0 originalStroke:(id)arg1 adjustedStroke:(id *)arg2 adjustedPath:(id *)arg3 startDelta:(struct CGPoint *)arg4 endDelta:(struct CGPoint *)arg5;
- (void)p_invalidateClippedPath;
- (struct CGPoint)headPoint;
- (struct CGPoint)tailPoint;
- (id)i_computeWrapPathClosed:(char)arg0;
- (NSString *)p_unitePath:(NSString *)arg0 withLineEndForHead:(char)arg1 stroke:(TSDStroke *)arg2;
- (void)p_computeAngle:(float *)arg0 point:(struct CGPoint *)arg1 cutSegment:(int *)arg2 cutT:(float *)arg3 forLineEndAtHead:(char)arg4;
- (NSObject *)editablePathSource;
- (TSDPathSource<TSDSmartPathSource> *)smartPathSource;
- (struct CGRect)aliasedAlignmentFrameForScale:(id)arg0;
- (char)canBeIntersected;
- (char)canResetTextAndObjectHandles;
- (struct CGPoint)unclippedHeadPoint;
- (struct CGPoint)unclippedTailPoint;
- (void)p_updateResizeInfoGeometryFromResizePathSource;
- (TSDFill *)dynamicFill;
- (void)setDynamicFill:(TSDFill *)arg0;
- (id)textWrapperForExteriorWrap;
- (TSDShapeLayout *)initWithInfo:(NSDictionary *)arg0;
- (void)invalidatePath;
- (void)dealloc;
- (NSString *)path;
- (TSDFill *)fill;
- (OADStroke *)stroke;
- (struct CGSize)minimumSize;
- (void)setGeometry:(TSDInfoGeometry *)arg0;
- (char)isInvisible;

@end

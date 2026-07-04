/* Runtime dump - TSDConnectionLineAbstractLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDConnectionLineAbstractLayout : TSDShapeLayout
{
    TSUBezierPath * mClippedBezierPath;
    TSDConnectionLinePathSource * mOriginalPathSource;
    TSDConnectionLinePathSource * mConnectedPathSource;
    TSDInfoGeometry * mConnectedInfoGeometry;
    TSDLayout * mConnectedFrom;
    TSDLayout * mConnectedTo;
    NSObject<TSDInfo> * mConnectedFromInfo;
    NSObject<TSDInfo> * mConnectedToInfo;
    TSUBezierPath * mCachedFromWrapPath;
    TSUBezierPath * mCachedToWrapPath;
    float mCachedFromOutset;
    float mCachedToOutset;
    TSUBezierPath * mCachedFromOutsetWrapPath;
    TSUBezierPath * mCachedToOutsetWrapPath;
    TSDLayout * mOldConnectedFrom;
    TSDLayout * mOldConnectedTo;
    char mValidConnections;
    char mVisibleLine;
    char mValidLine;
    struct CGPoint mLooseEndPosition;
    struct CGPoint mAcumulatedDrag;
    id mUseResizePoints;
    id mResizeControlPoints;
    char mUseDynamicOutsets;
    float mDynamicOutsetFrom;
    float mDynamicOutsetTo;
}

@property (nonatomic) TSDLayout * connectedFrom;
@property (nonatomic) TSDLayout * connectedTo;
@property (nonatomic) NSObject<TSDInfo> * connectedFromInfo;
@property (nonatomic) NSObject<TSDInfo> * connectedToInfo;
@property (readonly, nonatomic) char validLine;
@property (readonly, nonatomic) TSDConnectionLinePathSource * connectedPathSource;
@property (nonatomic) char useDynamicOutsets;
@property (nonatomic) float dynamicOutsetFrom;
@property (nonatomic) float dynamicOutsetTo;
@property (readonly, nonatomic) float outsetFrom;
@property (readonly, nonatomic) float outsetTo;

- (void)processChangedProperty:(int)arg0;
- (struct CGRect)boundsForStandardKnobs;
- (TSDLayout *)connectedFrom;
- (TSDLayout *)connectedTo;
- (void)invalidatePosition;
- (void)parentDidChange;
- (void)connectedLayoutInvalidated:(id)arg0;
- (char)shouldValidate;
- (id)reliedOnLayouts;
- (id)additionalLayoutsForRepCreation;
- (char)shouldDisplayGuides;
- (char)supportsRotation;
- (char)supportsResize;
- (char)supportsFlipping;
- (struct CGPoint)getControlKnobPosition:(unsigned int)arg0;
- (TSDPathSource *)pathSource;
- (char)pathIsOpen;
- (char)pathIsLineSegment;
- (NSObject *)layoutInfoGeometry;
- (char)canBeIntersected;
- (char)canResetTextAndObjectHandles;
- (struct CGPoint)unclippedHeadPoint;
- (struct CGPoint)unclippedTailPoint;
- (float)outsetFrom;
- (float)outsetTo;
- (void)setConnectedFrom:(TSDLayout *)arg0;
- (void)setConnectedTo:(TSDLayout *)arg0;
- (void)invalidateConnections;
- (NSString *)clipPath:(struct CGPath *)arg0 onLayout:(NSObject *)arg1 outset:(float)arg2 reversed:(char)arg3 isValid:(char *)arg4;
- (TSDConnectionLinePathSource *)connectedPathSource;
- (char)isStraightLine;
- (NSObject *)createConnectedPathFrom:(NSObject *)arg0 to:(NSObject *)arg1 withControlPoints:(void *)arg2;
- (struct CGPoint)controlPointForPointA:(struct CGPoint)arg0 pointB:(struct CGPoint)arg1 andOriginalA:(struct CGPoint)arg2 originalB:(struct CGPoint)arg3;
- (char)validLine;
- (void)checkConnections;
- (char)p_isConnectedToLockedObjects;
- (void)removeConnections;
- (void)updateRepPath;
- (NSDictionary *)connectionLineInfo;
- (NSDictionary *)p_infoForConnectingToInfo:(NSDictionary *)arg0;
- (char)canEndpointsCoincide;
- (void)updateConnectedPath;
- (NSObject<TSDInfo> *)connectedFromInfo;
- (void)setConnectedFromInfo:(NSObject<TSDInfo> *)arg0;
- (NSObject<TSDInfo> *)connectedToInfo;
- (void)setConnectedToInfo:(NSObject<TSDInfo> *)arg0;
- (char)useDynamicOutsets;
- (void)setUseDynamicOutsets:(char)arg0;
- (float)dynamicOutsetFrom;
- (void)setDynamicOutsetFrom:(float)arg0;
- (float)dynamicOutsetTo;
- (void)setDynamicOutsetTo:(float)arg0;
- (void)invalidatePath;
- (void)dealloc;
- (void)validate;
- (NSString *)path;
- (char)canFlip;
- (char)isSelectable;
- (int)wrapType;
- (char)isDraggable;
- (char)isInvisible;

@end

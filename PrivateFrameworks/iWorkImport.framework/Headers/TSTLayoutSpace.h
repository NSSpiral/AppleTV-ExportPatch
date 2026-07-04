/* Runtime dump - TSTLayoutSpace
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutSpace : NSObject
{
    TSTLayoutSpaceBundle * mBundle;
    int mLayoutSpaceType;
    char mInvalidTableOffset;
    unsigned char mInvalidColumnIndex;
    unsigned short mInvalidRowIndex;
    struct ? mGridRange;
    char mHeaderColumnsRepeat;
    char mHeaderRowsRepeat;
    float mViewScale;
    struct CGAffineTransform mTransformToCanvas;
    struct CGAffineTransform mTransformFromCanvas;
    struct CGAffineTransform mTransformToDevice;
    struct CGAffineTransform mTransformFromDevice;
    char mDrawBlackAndWhite;
    char mDrawPreventAntialias;
    struct CGPoint mTableOffset;
    TSTCoordinateArray * mHeaderRowColumnCoordinates;
    TSTCoordinateArray * mBodyColumnCoordinates;
    TSTCoordinateArray * mHeaderColumnRowCoordinates;
    TSTCoordinateArray * mBodyRowCoordinates;
    struct CGRect mCachedFrame;
    struct CGRect mCachedAlignedFrame;
    struct CGRect mCachedStrokeFrame;
    struct CGRect mCachedAlignedStrokeFrame;
    TSTLayoutSpaceBezierPathCache * mBezierPathCache;
    char mLayoutDirectionIsLeftToRight;
    struct _opaque_pthread_rwlock_t mLock;
}

@property (readonly, nonatomic) TSTLayoutSpaceBundle * bundle;
@property (readonly, nonatomic) int layoutSpaceType;
@property (readonly, nonatomic) TSTLayout * layout;
@property (readonly, nonatomic) TSTMasterLayout * masterLayout;
@property (readonly, nonatomic) char layoutDirectionIsLeftToRight;
@property (readonly, nonatomic) char isMain;
@property (readonly, nonatomic) char isFrozen;
@property (readonly, nonatomic) char isRepeat;
@property (readonly, nonatomic) char isColumns;
@property (readonly, nonatomic) char isRows;
@property (readonly, nonatomic) char isCorner;
@property (nonatomic) char headerColumnsRepeat;
@property (nonatomic) char headerRowsRepeat;
@property (nonatomic) float viewScale;
@property (nonatomic) struct CGAffineTransform transformToCanvas;
@property (nonatomic) struct CGAffineTransform transformFromCanvas;
@property (nonatomic) struct CGAffineTransform transformToDevice;
@property (nonatomic) struct CGAffineTransform transformFromDevice;
@property (nonatomic) char drawBlackAndWhite;
@property (nonatomic) char drawPreventAntialias;
@property (nonatomic) struct CGPoint tableOffset;
@property (readonly, nonatomic) TSTLayoutSpaceBezierPathCache * bezierPathCache;

- (char)isRows;
- (char)isColumns;
- (float)viewScale;
- (TSTMasterLayout *)masterLayout;
- (char)p_getLayoutDirectionLeftToRight;
- (struct CGPoint)tableOffset;
- (void)invalidateCoordinates;
- (void)invalidateCoordinatesAfterColumn:(unsigned char)arg0;
- (void)invalidateCoordinatesAfterRow:(unsigned short)arg0;
- (char)headerRowsRepeat;
- (char)headerColumnsRepeat;
- (char)layoutDirectionIsLeftToRight;
- (void)lockForRead;
- (void)setTransformToCanvas:(struct CGAffineTransform)arg0;
- (struct CGAffineTransform)transformToCanvas;
- (struct CGAffineTransform)transformToDevice;
- (int)layoutSpaceType;
- (void)setHeaderRowsRepeat:(char)arg0;
- (void)setHeaderColumnsRepeat:(char)arg0;
- (TSTLayoutSpace *)initWithLayoutSpaceBundle:(NSObject *)arg0 type:(int)arg1;
- (void)lockForWrite;
- (void)validateCachedFrames;
- (int)validateCoordinateCache:(NSObject *)arg0;
- (int)validateTableOffset:(NSSet *)arg0;
- (TSTLayoutSpaceBezierPathCache *)bezierPathCache;
- (void)setTableOffset:(struct CGPoint)arg0;
- (char)isMain;
- (char)drawPreventAntialias;
- (char)drawBlackAndWhite;
- (void)p_drawStrokeForGridColumn:(unsigned int)arg0 strokeRect:(struct ?)arg1 clearStroke:(struct ?)arg2 shadowType:(NSObject *)arg3 context:(char)arg4;
- (void)p_drawStrokeForGridRow:(unsigned int)arg0 strokeRect:(struct ?)arg1 clearStroke:(struct ?)arg2 shadowType:(NSObject *)arg3 context:(char)arg4;
- (char)isCorner;
- (void)invalidateTableOffset;
- (void)drawStrokesInGridRange:(struct ?)arg0 clearStrokes:(struct ?)arg1 context:(NSObject *)arg2;
- (struct CGAffineTransform)transformFromCanvas;
- (void)setTransformFromCanvas:(struct CGAffineTransform)arg0;
- (void)setTransformToDevice:(struct CGAffineTransform)arg0;
- (struct CGAffineTransform)transformFromDevice;
- (void)setTransformFromDevice:(struct CGAffineTransform)arg0;
- (void)setDrawBlackAndWhite:(char)arg0;
- (void)setDrawPreventAntialias:(char)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)unlock;
- (char)isFrozen;
- (TSTLayout *)layout;
- (TSTLayoutSpaceBundle *)bundle;
- (void).cxx_construct;
- (int)validate:(NSDate *)arg0;
- (char)isRepeat;
- (void)setViewScale:(float)arg0;

@end

/* Runtime dump - TSDCalloutPathSource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCalloutPathSource : TSDPathSource <TSDSmartPathSource, TSDMixing>
{
    float mCornerRadius;
    float mTailSize;
    struct CGPoint mTailPosition;
    struct CGSize mNaturalSize;
    char mIsTailAtCenter;
}

@property (nonatomic) float cornerRadius;
@property (readonly, nonatomic) float maxCornerRadius;
@property (nonatomic) struct CGPoint tailKnobPosition;
@property (nonatomic) float tailSize;
@property (readonly, nonatomic) float maxTailSize;
@property (nonatomic) struct CGPoint tailSizeKnobPosition;
@property (readonly, nonatomic) struct CGPoint tailCenter;
@property (readonly, nonatomic) char isTailAtCenter;

+ (NSObject *)quoteBubbleWithTailPosition:(struct CGPoint)arg0 tailSize:(float)arg1 naturalSize:(struct CGSize)arg2;
+ (TSDCalloutPathSource *)calloutWithCornerRadius:(float)arg0 tailPosition:(struct CGPoint)arg1 tailSize:(float)arg2 naturalSize:(struct CGSize)arg3;

- (struct CGPoint)tailCenter;
- (float)tailSize;
- (void)saveToArchive:(struct PathSourceArchive *)arg0;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (id)bezierPathWithoutFlips;
- (NSString *)interiorWrapPath;
- (void)scaleToNaturalSize:(struct CGSize)arg0;
- (NSString *)valueForSetSelector:(SEL)arg0;
- (struct CGPoint)getControlKnobPosition:(unsigned int)arg0;
- (unsigned int)numberOfControlKnobs;
- (struct CGPoint)p_getControlKnobPointForRoundedRect;
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint)arg0;
- (TSDCalloutPathSource *)initWithCornerRadius:(float)arg0 tailPosition:(struct CGPoint)arg1 tailSize:(float)arg2 naturalSize:(struct CGSize)arg3 tailAtCenter:(char)arg4;
- (void)p_setNaturalSize:(struct CGSize)arg0;
- (void)p_setCornerRadius:(float)arg0;
- (void)p_setTailPosition:(struct CGPoint)arg0;
- (void)p_setTailSize:(float)arg0;
- (void)p_setTailAtCenter:(char)arg0;
- (struct CGPoint)p_tailPosition;
- (struct CGPoint)tailKnobPosition;
- (struct CGPoint)tailSizeKnobPosition;
- (float)maxCornerRadius;
- (NSString *)p_basePath;
- (void)p_getTailPath:(NSString *)arg0 center:(struct CGPoint *)arg1 tailSize:(float *)arg2 intersections:(NSMutableArray *)arg3;
- (struct CGPoint)p_adjustedCenterForPath:(NSString *)arg0;
- (void)setTailSizeKnobPosition:(struct CGPoint)arg0;
- (char)isOval;
- (NSString *)p_buildPath;
- (float)maxTailSize;
- (void)setTailSize:(float)arg0;
- (void)setTailKnobPosition:(struct CGPoint)arg0;
- (char)isTailAtCenter;
- (void)setNaturalSize:(struct CGSize)arg0;
- (TSDCalloutPathSource *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSDCalloutPathSource *)copyWithZone:(struct _NSZone *)arg0;
- (float)cornerRadius;
- (void)setCornerRadius:(float)arg0;
- (struct CGSize)naturalSize;
- (char)isRectangular;
- (char)isCircular;
- (TSDCalloutPathSource *)initWithArchive:(struct PathSourceArchive *)arg0;

@end

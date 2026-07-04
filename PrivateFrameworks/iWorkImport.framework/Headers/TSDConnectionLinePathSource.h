/* Runtime dump - TSDConnectionLinePathSource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDConnectionLinePathSource : TSDBezierPathSource <TSDSmartPathSource>
{
    int mType;
    float mOutsetFrom;
    float mOutsetTo;
}

@property (nonatomic) int type;
@property (nonatomic) float outsetFrom;
@property (nonatomic) float outsetTo;

+ (NSObject *)pathSourceAtAngleOfSize:(struct CGSize)arg0 forType:(int)arg1;
+ (TSDConnectionLinePathSource *)pathSourceOfLength:(float)arg0;

- (void)saveToArchive:(struct PathSourceArchive *)arg0;
- (TSDConnectionLinePathSource *)initWithBezierPath:(TSUBezierPath *)arg0;
- (void)bend;
- (char)isLineSegment;
- (struct CGPoint)getControlKnobPosition:(unsigned int)arg0;
- (unsigned int)numberOfControlKnobs;
- (float)outsetFrom;
- (float)outsetTo;
- (void)p_setBezierPath:(NSString *)arg0;
- (void)setOutsetFrom:(float)arg0;
- (void)setOutsetTo:(float)arg0;
- (int)pathElementIndexForKnobTag:(unsigned int)arg0;
- (struct CGPoint)fixedPointForControlKnobChange;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (TSUBezierPath *)bezierPath;
- (TSDConnectionLinePathSource *)copyWithZone:(struct _NSZone *)arg0;
- (char)isRectangular;
- (char)isCircular;
- (TSDConnectionLinePathSource *)initWithArchive:(struct PathSourceArchive *)arg0;

@end

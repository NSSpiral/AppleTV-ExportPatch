/* Runtime dump - TSDPathIntersection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDPathIntersection : NSObject
{
    int mSegment;
    int mSegmentB;
    float mT;
    float mTB;
    struct CGPoint mPoint;
}

@property (readonly, nonatomic) int segment;
@property (readonly, nonatomic) int segmentB;
@property (readonly, nonatomic) float t;
@property (readonly, nonatomic) float tB;
@property (nonatomic) struct CGPoint point;

- (int)segment;
- (float)t;
- (TSDPathIntersection *)initWithSegment:(int)arg0 atT:(float)arg1 onSegmentB:(int)arg2 atT:(float)arg3 atPoint:(struct CGPoint)arg4;
- (int)compareT:(id)arg0;
- (TSDPathIntersection *)initWithSegment:(int)arg0 atT:(float)arg1 atPoint:(struct CGPoint)arg2;
- (int)compareSegmentAndT:(id)arg0;
- (int)segmentB;
- (float)tB;
- (NSString *)description;
- (struct CGPoint)point;
- (void)setPoint:(struct CGPoint)arg0;

@end

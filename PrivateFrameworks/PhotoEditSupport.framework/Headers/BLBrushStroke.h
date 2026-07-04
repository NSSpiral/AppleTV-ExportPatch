/* Runtime dump - BLBrushStroke
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLBrushStroke : AutoEncodeDecodeObject
{
    char _erase;
    char _magicEdges;
    char _startPointSet;
    int _type;
    int _destinationWidth;
    float _opacity;
    float _size;
    float _softness;
    NSMutableData * _offsets;
    double _timestamp;
    struct CGPoint _startPoint;
    struct CGPoint _lastPoint;
    struct CGRect _strokeRect;
}

@property (nonatomic) double timestamp;
@property (nonatomic) int type;
@property (nonatomic) int destinationWidth;
@property (nonatomic) char erase;
@property (nonatomic) char magicEdges;
@property (nonatomic) float opacity;
@property (nonatomic) float size;
@property (nonatomic) float softness;
@property (nonatomic) struct CGPoint startPoint;
@property (nonatomic) char startPointSet;
@property (nonatomic) struct CGPoint lastPoint;
@property (retain, nonatomic) NSMutableData * offsets;
@property (nonatomic) struct CGRect strokeRect;

- (void)dealloc;
- (float)size;
- (BLBrushStroke *)init;
- (double)timestamp;
- (void)setType:(int)arg0;
- (void)setTimestamp:(double)arg0;
- (int)type;
- (void)setSize:(float)arg0;
- (float)opacity;
- (void)setOpacity:(float)arg0;
- (struct CGPoint)startPoint;
- (void)setStartPoint:(struct CGPoint)arg0;
- (void)addPoint:(struct CGPoint)arg0;
- (NSArray *)keysToEncode;
- (int)destinationWidth;
- (void)setDestinationWidth:(int)arg0;
- (void)setErase:(char)arg0;
- (void)setMagicEdges:(char)arg0;
- (void)setSoftness:(float)arg0;
- (struct CGRect)strokeRect;
- (void)setStrokeRect:(struct CGRect)arg0;
- (char)erase;
- (char)magicEdges;
- (float)softness;
- (void)replayPointsWithScale:(float)arg0 pointBlock:(id /* block */)arg1;
- (void)setStartPointSet:(char)arg0;
- (char)startPointSet;
- (NSMutableData *)offsets;
- (struct CGPoint)lastPoint;
- (void)setLastPoint:(struct CGPoint)arg0;
- (void)setOffsets:(NSMutableData *)arg0;
- (int)numberOfPoints;

@end

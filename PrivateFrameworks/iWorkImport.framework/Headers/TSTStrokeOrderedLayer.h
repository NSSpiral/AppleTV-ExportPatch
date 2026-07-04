/* Runtime dump - TSTStrokeOrderedLayer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeOrderedLayer : TSTStrokeLayer
{
    TSTStrokeLayer * _majorStrokeLayer;
    TSTStrokeLayer * _minorStrokeLayer;
}

@property (retain, nonatomic) TSTStrokeLayer * majorStrokeLayer;
@property (retain, nonatomic) TSTStrokeLayer * minorStrokeLayer;

- (void)invalidateRange:(struct TSTSimpleRange)arg0;
- (NSObject *)findStrokeAndRangeAtIndex:(int)arg0;
- (TSTStrokeOrderedLayer *)initWithContext:(NSObject *)arg0 majorStrokeLayer:(TSTStrokeLayer *)arg1 minorStrokeLayer:(TSTStrokeLayer *)arg2;
- (void)enumerateRawStrokesSegmentsUsingBlock:(id /* block */)arg0;
- (void)appendStroke:(id)arg0 inRange:(struct TSTSimpleRange)arg1 order:(int)arg2;
- (TSTStrokeLayer *)majorStrokeLayer;
- (int)startingIndex;
- (TSTStrokeLayer *)minorStrokeLayer;
- (NSObject *)nextStrokeAndRange:(NSObject *)arg0;
- (NSObject *)p_findStrokeAndRangeAtIndex:(int)arg0 highOrderToken:(NSString *)arg1 updatingLowOrderToken:(id *)arg2 lowOrderLayer:(id)arg3;
- (void)enumerateStrokesUsingBlock:(id /* block */)arg0;
- (void)insertStroke:(id)arg0 inRange:(struct TSTSimpleRange)arg1 order:(int)arg2;
- (void)setMajorStrokeLayer:(TSTStrokeLayer *)arg0;
- (void)setMinorStrokeLayer:(TSTStrokeLayer *)arg0;
- (void)invalidate;

@end

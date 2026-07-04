/* Runtime dump - TSTMutableStrokeLayer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMutableStrokeLayer : TSTStrokeLayer

@property (nonatomic) unsigned short columnOrRowIndex;

- (void)flattenStrokeOrder;
- (void)invalidateRange:(struct TSTSimpleRange)arg0;
- (void)setStroke:(TSDStroke *)arg0 inRange:(struct TSTSimpleRange)arg1 order:(int)arg2;
- (void)insertSpaceAtRange:(struct TSTSimpleRange)arg0;
- (void)removeRange:(struct TSTSimpleRange)arg0;
- (void)moveRange:(struct _NSRange)arg0 toIndex:(int)arg1;
- (void)swapSegmentAtIndex:(int)arg0 withSegmentAtIndex:(int)arg1;
- (void)appendStroke:(id)arg0 inRange:(struct TSTSimpleRange)arg1 order:(int)arg2;
- (void)invalidate;

@end

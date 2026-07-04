/* Runtime dump - TSTStrokeLayer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeLayer : TSPObject <NSCopying, NSMutableCopying>
{
    struct vector<TSTStrokeLayerRun, std::__1::allocator<TSTStrokeLayerRun> > mStrokeRuns;
    unsigned short _columnOrRowIndex;
}

@property (nonatomic) unsigned short columnOrRowIndex;
@property (readonly, nonatomic) char isEmpty;

+ (CALayer *)strokeLayer;

- (TSTStrokeLayer *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSTStrokeLayer *)initWithContext:(NSObject *)arg0 columnOrRowIndex:(unsigned short)arg1;
- (NSObject *)findStrokeAndRangeAtIndex:(int)arg0;
- (unsigned short)columnOrRowIndex;
- (void)setColumnOrRowIndex:(unsigned short)arg0;
- (int)startingIndex;
- (NSObject *)nextStrokeAndRange:(NSObject *)arg0;
- (void)enumerateStrokesUsingBlock:(id /* block */)arg0;
- (void)p_invalidate;
- (void)enumerateStrokesInRange:(struct TSTSimpleRange)arg0 usingBlock:(id /* block */)arg1;
- (NSObject *)strokeLayerModifiedUsingMoveDelegate:(NSObject *)arg0;
- (id)strokeLayerModifiedByInsertingSpaceAt:(struct TSTSimpleRange)arg0;
- (id)strokeLayerModifiedByRemovingRangeAt:(struct TSTSimpleRange)arg0;
- (void)p_setStrokeRuns:(struct vector<TSTStrokeLayerRun, std::__1::allocator<TSTStrokeLayerRun> >)arg0;
- (void)p_mergeStrokeRunsAtPosition:(unsigned int)arg0;
- (void)p_appendStroke:(id)arg0 inRange:(struct TSTSimpleRange)arg1 order:(int)arg2;
- (void)p_setStroke:(id)arg0 inRange:(struct TSTSimpleRange)arg1 order:(int)arg2;
- (void)p_invalidateRange:(struct TSTSimpleRange)arg0;
- (void)p_insertSpaceAtRange:(struct TSTSimpleRange)arg0;
- (void)p_removeRange:(struct TSTSimpleRange)arg0;
- (void)p_flattenStrokeOrder;
- (void)dealloc;
- (TSTStrokeLayer *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;
- (void).cxx_construct;
- (TSTStrokeLayer *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end

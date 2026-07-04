/* Runtime dump - TSTStrokeLayerAbstractStack
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeLayerAbstractStack : NSObject
{
    struct _opaque_pthread_rwlock_t mRWLock;
}

- (void)lockForRead;
- (void)lockForWrite;
- (id)strokeLayerEnumeration;
- (void)enumerateStrokesInRange:(struct TSTSimpleRange)arg0 usingBlock:(id /* block */)arg1;
- (CALayer *)portalledStrokeLayer;
- (void)enumerateStrokesAndCapsInRange:(struct TSTSimpleRange)arg0 usingBlock:(id /* block */)arg1;
- (NSObject *)lookupStrokeAtIndex:(int)arg0;
- (void)enumerateStrokesFrom:(unsigned int)arg0 to:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateStrokesAndCapsFrom:(unsigned int)arg0 to:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (void)dealloc;
- (TSTStrokeLayerAbstractStack *)init;
- (void)unlock;

@end

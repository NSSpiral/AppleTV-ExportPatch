/* Runtime dump - MTLToolsPointerArray
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsPointerArray : NSObject
{
    unsigned int _pointerAdditions;
    NSPointerArray * _pointerArray;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

- (void)addPointer:(void *)arg0;
- (NSObject *)objectAssociatedWithBaseObject:(NSObject *)arg0 usingBlock:(id /* block */)arg1;
- (void)enumeratePointersUsingBlock:(id /* block */)arg0;
- (void)removeObjectAssociatedWithBaseObject:(NSObject *)arg0;
- (void)_addPointer:(void *)arg0;
- (void).cxx_destruct;
- (MTLToolsPointerArray *)initWithOptions:(unsigned int)arg0;

@end

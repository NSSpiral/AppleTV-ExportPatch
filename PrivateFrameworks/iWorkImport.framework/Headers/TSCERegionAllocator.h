/* Runtime dump - TSCERegionAllocator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCERegionAllocator : NSObject
{
    struct TSCERegionNode * mHead;
    struct TSCERegionNode * mCurBlock;
    unsigned int mBlockOffset;
    struct _NSZone * mZone;
}

- (void *)malloc:(unsigned long)arg0;
- (TSCERegionAllocator *)initWithInitialCapacity:(unsigned long)arg0;
- (void *)calloc:(unsigned long)arg0;
- (void)dealloc;
- (struct _NSZone *)zone;
- (void)reset;

@end

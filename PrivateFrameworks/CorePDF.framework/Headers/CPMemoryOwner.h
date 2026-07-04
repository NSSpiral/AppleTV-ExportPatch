/* Runtime dump - CPMemoryOwner
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPMemoryOwner : NSObject <CPDisposable>
{
    void * memory;
}

- (void)dealloc;
- (void)dispose;
- (CPMemoryOwner *)initWithAllocatedMemory:(void *)arg0;
- (void)finalize;

@end

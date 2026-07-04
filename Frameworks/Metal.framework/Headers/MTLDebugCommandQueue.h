/* Runtime dump - MTLDebugCommandQueue
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugCommandQueue : MTLToolsCommandQueue
{
    unsigned int _maxCommandBufferCount;
}

@property (readonly, nonatomic) unsigned int maxCommandBufferCount;

- (id)commandBufferWithUnretainedReferences;
- (MTLDebugCommandQueue *)initWithCommandQueue:(NSObject *)arg0 device:(NSObject *)arg1 maxBufferCount:(unsigned int)arg2;
- (unsigned int)maxCommandBufferCount;
- (NSObject *)commandBuffer;

@end

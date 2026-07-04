/* Runtime dump - NSURLCacheInternal
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLCacheInternal : NSObject
{
    unsigned int memoryCapacity;
    unsigned int diskCapacity;
    NSString * diskPath;
    unsigned int currentMemoryUsage;
    unsigned int currentDiskUsage;
    struct _CFURLCache * _cacheRef;
}

- (void)dealloc;
- (void)finalize;

@end

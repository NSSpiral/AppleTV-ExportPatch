/* Runtime dump - MTLIOAccelDeviceShmemPool
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelDeviceShmemPool : NSObject
{
    struct _MTLIOAccelDeviceShmemPoolPrivate _priv;
}

- (unsigned int)shmemSize;
- (int)availableCount;
- (MTLIOAccelDeviceShmemPool *)initWithDevice:(NSObject *)arg0 resourceClass:(Class)arg1 shmemSize:(unsigned int)arg2 options:(NSDictionary *)arg3;
- (void)setShmemSize:(unsigned int)arg0;
- (void)prune;
- (void)dealloc;

@end

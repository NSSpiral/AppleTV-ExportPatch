/* Runtime dump - MTLIOAccelResourcePool
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelResourcePool : NSObject
{
    struct _MTLIOAccelResourcePoolPrivate _priv;
    Class _resourceClass;
    MTLIOAccelDevice<MTLDevice> * _device;
    struct IOAccelNewResourceArgs * _resourceArgs;
    unsigned int _resourceArgsSize;
    unsigned long long age_to_purge;
}

@property (readonly) struct IOAccelNewResourceArgs * resourceArgs;
@property (readonly) unsigned int resourceArgsSize;

- (MTLIOAccelResourcePool *)initWithDevice:(MTLIOAccelDevice<MTLDevice> *)arg0 resourceClass:(Class)arg1 resourceArgs:(struct IOAccelNewResourceArgs *)arg2 resourceArgsSize:(struct IOAccelNewResourceArgs)arg3 options:(struct ?)arg4;
- (int)availableCount;
- (struct IOAccelNewResourceArgs *)resourceArgs;
- (unsigned int)resourceArgsSize;
- (void)dealloc;

@end

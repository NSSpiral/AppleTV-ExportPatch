/* Runtime dump - MTLIOAccelDeviceShmem
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelDeviceShmem : NSObject
{
    struct _MTLIOAccelDeviceShmemPrivate _priv;
    MTLIOAccelDevice * _device;
    unsigned int _shmemID;
    unsigned int _shmemSize;
    void * _virtualAddress;
    BOOL purgeable;
}

@property (readonly) void * virtualAddress;
@property (readonly) unsigned int shmemID;
@property (readonly) unsigned int shmemSize;

- (MTLIOAccelDeviceShmem *)initWithDevice:(MTLIOAccelDevice *)arg0 shmemSize:(unsigned int)arg1;
- (void *)virtualAddress;
- (unsigned int)shmemID;
- (unsigned int)shmemSize;
- (void)dealloc;

@end

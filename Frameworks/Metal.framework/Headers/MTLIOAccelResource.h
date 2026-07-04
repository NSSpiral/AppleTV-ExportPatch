/* Runtime dump - MTLIOAccelResource
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelResource : NSObject <MTLResourceSPI>
{
    struct _MTLIOAccelResource _res;
}

@property (readonly) struct __IOAccelResource * resourceRef;
@property (readonly, nonatomic) void * virtualAddress;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly, nonatomic) unsigned int resourceID;
@property (readonly, nonatomic) unsigned int resourceSize;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy) NSString * label;
@property (readonly) <MTLDevice> * device;
@property (readonly) unsigned int cpuCacheMode;
@property int responsibleProcess;
@property (readonly) MTLResourceAllocationInfo * sharedAllocationInfo;
@property (readonly) MTLResourceAllocationInfo * cachedAllocationInfo;

- (void *)virtualAddress;
- (unsigned int)setPurgeableState:(unsigned int)arg0;
- (unsigned int)cpuCacheMode;
- (MTLIOAccelResource *)initWithDevice:(<MTLDevice> *)arg0 cacheMode:(unsigned int)arg1 args:(struct IOAccelNewResourceArgs *)arg2 argsSize:(struct ?)arg3;
- (void)annotateResource:(struct __CFDictionary *)arg0;
- (struct __CFArray *)copyAnnotations;
- (struct __CFDictionary *)copyAnnotationDictionary:(unsigned long long)arg0 obj_key_name:(struct __CFString *)arg1 obj_dict:(struct __CFDictionary *)arg2;
- (MTLIOAccelResource *)initWithResource:(NSObject *)arg0 offset:(int)arg1;
- (char)isPurgeable;
- (int)responsibleProcess;
- (void)setResponsibleProcess:(int)arg0;
- (MTLResourceAllocationInfo *)sharedAllocationInfo;
- (MTLResourceAllocationInfo *)cachedAllocationInfo;
- (struct __IOAccelResource *)resourceRef;
- (MTLIOAccelResource *)initWithDevice:(<MTLDevice> *)arg0 resource:(NSObject *)arg1;
- (unsigned long long)gpuAddress;
- (unsigned int)resourceID;
- (unsigned int)resourceSize;
- (void)setAllocationInfoShared:(id)arg0 andCached:(id)arg1;
- (void)dealloc;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (MTLIOAccelResource *)initWithResource:(NSObject *)arg0;
- (<MTLDevice> *)device;

@end

/* Runtime dump - MTLToolsResource
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsResource : MTLToolsObject <MTLResourceSPI>

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

- (unsigned int)setPurgeableState:(unsigned int)arg0;
- (unsigned int)cpuCacheMode;
- (char)isPurgeable;
- (int)responsibleProcess;
- (void)setResponsibleProcess:(int)arg0;
- (MTLResourceAllocationInfo *)sharedAllocationInfo;
- (MTLResourceAllocationInfo *)cachedAllocationInfo;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (<MTLDevice> *)device;

@end

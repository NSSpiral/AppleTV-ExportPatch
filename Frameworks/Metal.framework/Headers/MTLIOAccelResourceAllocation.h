/* Runtime dump - MTLIOAccelResourceAllocation
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelResourceAllocation : MTLResourceAllocationInfo
{
    NSString * _memoryPool;
    unsigned int _virtualSize;
    unsigned int _residentSize;
    unsigned int _dirtySize;
    char _purgeable;
    unsigned long long _uniqueIdentifier;
}

- (char)purgeable;
- (MTLIOAccelResourceAllocation *)initWithPool:(NSObject *)arg0 virtualSize:(unsigned int)arg1 residentSize:(unsigned int)arg2 dirtySize:(unsigned int)arg3 purgeable:(char)arg4 uniqueID:(unsigned long long)arg5;
- (NSString *)memoryPool;
- (unsigned int)residentSize;
- (unsigned int)dirtySize;
- (void)dealloc;
- (unsigned int)virtualSize;
- (unsigned long long)uniqueIdentifier;

@end

/* Runtime dump - MTLResourceAllocationInfo
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLResourceAllocationInfo : NSObject <NSCopying, NSCoding>
{
    char _pageoffRequired;
    char _purgeable;
    NSString * _memoryPool;
    unsigned int _virtualSize;
    unsigned int _residentSize;
    unsigned int _dirtySize;
    unsigned long long _uniqueIdentifier;
}

@property (readonly) NSString * memoryPool;
@property (readonly) unsigned int virtualSize;
@property (readonly) unsigned int residentSize;
@property (readonly) unsigned int dirtySize;
@property (readonly) char pageoffRequired;
@property (readonly) char purgeable;
@property (readonly) unsigned long long uniqueIdentifier;

- (char)purgeable;
- (NSString *)memoryPool;
- (unsigned int)residentSize;
- (unsigned int)dirtySize;
- (char)pageoffRequired;
- (MTLResourceAllocationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)virtualSize;
- (MTLResourceAllocationInfo *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned long long)uniqueIdentifier;

@end

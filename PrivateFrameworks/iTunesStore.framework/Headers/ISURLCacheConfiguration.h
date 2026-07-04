/* Runtime dump - ISURLCacheConfiguration
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLCacheConfiguration : NSObject <NSCopying>
{
    unsigned int _diskCapacity;
    unsigned int _memoryCapacity;
    NSString * _persistentIdentifier;
}

@property (nonatomic) unsigned int diskCapacity;
@property (nonatomic) unsigned int memoryCapacity;
@property (copy, nonatomic) NSString * persistentIdentifier;

- (unsigned int)memoryCapacity;
- (unsigned int)diskCapacity;
- (void)setMemoryCapacity:(unsigned int)arg0;
- (void)setDiskCapacity:(unsigned int)arg0;
- (NSString *)persistentIdentifier;
- (void)dealloc;
- (ISURLCacheConfiguration *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPersistentIdentifier:(NSString *)arg0;

@end

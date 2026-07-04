/* Runtime dump - ML3ContainerMediaTypeCounts
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ContainerMediaTypeCounts : NSObject
{
    struct __CFDictionary * _map;
    unsigned int _count;
}

@property (nonatomic) unsigned int count;

- (void)dealloc;
- (unsigned int)count;
- (ML3ContainerMediaTypeCounts *)init;
- (NSString *)description;
- (void)setCount:(unsigned int)arg0;
- (void)addMediaType:(unsigned long)arg0 count:(unsigned int)arg1;
- (void)enumerateMediaTypesWithBlock:(id /* block */)arg0;

@end

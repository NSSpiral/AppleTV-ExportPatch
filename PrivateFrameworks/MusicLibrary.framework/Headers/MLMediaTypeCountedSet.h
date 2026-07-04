/* Runtime dump - MLMediaTypeCountedSet
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLMediaTypeCountedSet : NSObject
{
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int> > > _map;
    unsigned int _count;
}

@property (nonatomic) unsigned int count;

- (unsigned int)count;
- (NSString *)description;
- (void)setCount:(unsigned int)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)addMediaType:(unsigned long)arg0 count:(unsigned int)arg1;
- (void)enumerateMediaTypesWithBlock:(id /* block */)arg0;

@end

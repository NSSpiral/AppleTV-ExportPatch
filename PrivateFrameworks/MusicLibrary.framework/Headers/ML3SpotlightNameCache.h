/* Runtime dump - ML3SpotlightNameCache
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3SpotlightNameCache : NSObject
{
    struct unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *> > > _map;
    char _idle;
    ML3MusicLibrary * _library;
}

+ (void)initialize;
+ (NSObject *)copyFromLibrary:(NSObject *)arg0 cancelHandler:(id /* block */)arg1;

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSObject *)_initWithLibrary:(ML3MusicLibrary *)arg0 cancelHandler:(id /* block */)arg1;

@end

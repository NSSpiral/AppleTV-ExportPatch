/* Runtime dump - ML3SpotlightMatchingNameCache
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3SpotlightMatchingNameCache : NSObject
{
    struct unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > _matchingSet;
    NSString * _matchString;
    char _idle;
    ML3MusicLibrary * _library;
}

+ (void)initialize;
+ (void)loadFromLibrary:(NSObject *)arg0 namesMatchingString:(NSString *)arg1 cancelHandler:(id /* block */)arg2;

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSObject *)_initWithLibrary:(ML3MusicLibrary *)arg0 matchString:(NSString *)arg1 cancelHandler:(id /* block */)arg2;

@end

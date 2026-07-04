/* Runtime dump - ML3MusicLibrary_SortMapEntry
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3MusicLibrary_SortMapEntry : NSObject
{
    long long _nameOrder;
    NSString * _name;
    NSData * _sortKey;
    int _nameSection;
    char _dirty;
}

- (NSString *)description;
- (void).cxx_destruct;
- (ML3MusicLibrary_SortMapEntry *)initWithName:(NSString *)arg0 nameSection:(int)arg1 sortKey:(NSData *)arg2 nameOrder:(long long)arg3 dirtyFlag:(char)arg4;
- (ML3MusicLibrary_SortMapEntry *)initWithName:(NSString *)arg0 nameSection:(int)arg1 sortKey:(NSData *)arg2;

@end

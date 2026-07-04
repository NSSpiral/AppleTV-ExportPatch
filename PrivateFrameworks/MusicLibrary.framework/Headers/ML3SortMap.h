/* Runtime dump - ML3SortMap
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3SortMap : NSObject
{
    ML3DatabaseConnection * _connection;
    ML3MusicLibrary * _library;
    NSMutableDictionary * _nameOrders;
    NSMutableArray * _entries;
    NSData * _minSortKey;
    NSData * _maxSortKey;
    long long _smallestNameDelta;
    char _preloadNames;
}

- (void).cxx_destruct;
- (ML3SortMap *)initWithConnection:(ML3DatabaseConnection *)arg0 library:(ML3MusicLibrary *)arg1 preloadNames:(char)arg2;
- (char)insertStringsIntoSortMap:(NSObject *)arg0 didReSortMap:(char *)arg1;
- (char)commitUpdates;
- (NSMutableDictionary *)nameOrders;
- (NSArray *)_sortedNameEntriesToInsertForNames:(id)arg0;
- (char)_insertSortedNameEntriesIntoSortMap:(NSObject *)arg0;
- (char)loadExistingSortedEntries;
- (long long)_minNameOrderForSortMapEntry:(id)arg0 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder *)arg1;
- (long long)_maxNameOrderForSortMapEntry:(id)arg0 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder *)arg1;
- (id)_minSortKeyForEntry:(id)arg0 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder *)arg1;
- (id)_maxSortKeyForEntry:(id)arg0 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder *)arg1;
- (long long)_sortKeyDistance:(id)arg0 sortKey2:(NSString *)arg1 offset:(unsigned int)arg2;
- (char)attemptInsertStringsIntoSortMap:(NSObject *)arg0;
- (char)commitFailedInsertedStrings:(id)arg0;
- (NSString *)_sortKeyString:(NSString *)arg0;

@end

/* Runtime dump - ML3ContainerQueryResultSet
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ContainerQueryResultSet : ML3QueryResultSet
{
    char _needsSorting;
    char _needsReversing;
    ML3QueryResultSet_BackingStore * _sortedBackingStore;
    long long _containerPID;
    unsigned int _entityLimit;
}

- (ML3ContainerQueryResultSet *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (ML3ContainerQueryResultSet *)initWithQuery:(ML3Query *)arg0;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)arg0;
- (void)enumerateSectionsUsingBlock:(id /* block */)arg0;
- (long long)persistentIDAtIndex:(unsigned int)arg0;
- (unsigned int)entityLimit;
- (char)_updateToLibraryCurrentRevision;
- (void)_loadCurrentFullResults;
- (id)sortedBackingStoreForDisplayOrdering;

@end

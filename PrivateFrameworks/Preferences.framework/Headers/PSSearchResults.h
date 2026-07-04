/* Runtime dump - PSSearchResults
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchResults : NSObject <NSCopying>
{
    NSMutableArray * _sectionEntries;
    NSMutableSet * _explicitlyAddedSectionEntries;
    NSMutableDictionary * _entriesBySection;
    char _needsSorting;
    char _treatSectionEntriesAsRegularEntries;
    id _sectionComparator;
    id _entryComparator;
}

@property (copy, nonatomic) id sectionComparator;
@property (copy, nonatomic) id entryComparator;
@property (nonatomic) char treatSectionEntriesAsRegularEntries;

- (void)dealloc;
- (PSSearchResults *)init;
- (NSString *)description;
- (PSSearchResults *)copyWithZone:(struct _NSZone *)arg0;
- (void)addEntry:(QLZipArchiveEntry *)arg0;
- (unsigned int)removeEntries:(NSArray *)arg0;
- (void)sortResults;
- (NSArray *)resultsByMergingWithResults:(NSArray *)arg0;
- (void)mergeWithResults:(NSArray *)arg0;
- (char)removeEntry:(QLZipArchiveEntry *)arg0;
- (void)setSectionComparator:(id /* block */)arg0;
- (NSArray *)_initForCopyWithSectionEntries:(NSMutableArray *)arg0 entriesBySection:(NSMutableDictionary *)arg1 explicitlyAddedSectionEntries:(NSMutableSet *)arg2;
- (NSObject *)entriesInSectionAtIndex:(unsigned int)arg0;
- (unsigned int)numberOfSectionEntries;
- (unsigned int)numberOfEntriesInSectionAtIndex:(unsigned int)arg0;
- (unsigned int)totalNumberOfEntries;
- (NSObject *)sectionEntryAtIndex:(unsigned int)arg0;
- (NSString *)entryAtIndexPath:(NSIndexPath *)arg0;
- (NSArray *)allSectionEntries;
- (void)setEntryComparator:(id /* block */)arg0;
- (id /* block */)sectionComparator;
- (id /* block */)entryComparator;
- (char)treatSectionEntriesAsRegularEntries;
- (void)setTreatSectionEntriesAsRegularEntries:(char)arg0;
- (void)addEntries:(NSArray *)arg0;

@end

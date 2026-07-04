/* Runtime dump - ML3ImportPersistentIDGenerator
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ImportPersistentIDGenerator : ML3PersistentIDGenerator
{
    NSMutableDictionary * _pregeneratedIdMappings;
}

- (void).cxx_destruct;
- (ML3ImportPersistentIDGenerator *)initWithDatabaseConnection:(ML3DatabaseConnection *)arg0;
- (void)addIdMapping:(CPLEngineIDMapping *)arg0 forProperty:(unsigned int)arg1;
- (long long)nextPersistentIDForImportItem:(struct shared_ptr<ML3ImportItem>)arg0;
- (void)removePersistentIDFromIdMapping:(long long)arg0;

@end

/* Runtime dump - GEOPlaceDataDBWriter
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataDBWriter : GEODBWriter
{
    struct sqlite3_stmt * _insertPhoneNumber;
    struct sqlite3_stmt * _insertKeyString;
    struct sqlite3_stmt * _deletePhoneNumberMappingStatement;
    struct sqlite3_stmt * _deleteKeyStringStatement;
    char _canCreateDebugTable;
}

- (void)dealloc;
- (GEOPlaceDataDBWriter *)initWithPath:(NSString *)arg0;
- (void)_openIfNecessary;
- (void)_setMUID:(NSSet *)arg0 forKey:(struct _GEOTileKey)arg1;
- (void)_setMUID:(unsigned long long)arg0 forPhoneNumber:(long long)arg1;
- (void)_populateDBKey:(struct _GEOTileKey *)arg0 forMUID:(unsigned long long)arg1;
- (void)setPlaceData:(NSData *)arg0 forKey:(struct _GEOTileKey)arg1;
- (void)_deleteKeystringForKey:(struct _GEOTileKey)arg0;
- (void)deletePlaceDataForKey:(struct _GEOTileKey)arg0;
- (void)_createPhoneNumberTable;
- (void)_createKeyStringTable;
- (void)setPlaceData:(NSData *)arg0 forMUID:(unsigned long long)arg1;
- (void)deletePlaceDataForMUID:(unsigned long long)arg0;
- (void)deletePhoneNumberMapping;
- (void)performStatementPreparationTasks;
- (void)performTableCreationTasks;

@end

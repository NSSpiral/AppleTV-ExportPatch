/* Runtime dump - GEODBWriter
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODBWriter : NSObject
{
    NSString * _path;
    struct sqlite3 * _db;
    struct sqlite3_stmt * _versionQuery;
    struct sqlite3_stmt * _versionInsert;
    struct sqlite3_stmt * _editionQuery;
    struct sqlite3_stmt * _editionDelete;
    struct sqlite3_stmt * _editionInvalidate;
    struct sqlite3_stmt * _editionUpdate;
    struct sqlite3_stmt * _editionInvalidateAll;
    struct sqlite3_stmt * _tileInsert;
    struct sqlite3_stmt * _tileDelete;
    struct sqlite3_stmt * _tileSize;
    struct sqlite3_stmt * _sizeQuery;
    long long _lastRowID;
    unsigned long long _databaseSize;
    unsigned long long _maxDatabaseSize;
    char _closed;
    char _defunct;
    NSMutableArray * _writeList;
    NSMutableSet * _uncommitedWriteSet;
    unsigned int _pendingWriteBytes;
    NSLock * _writeListLock;
    NSObject<OS_dispatch_queue> * _writeQueue;
    void * _editionMap;
    long long _evictionRowsThreshold;
    struct ? * _expirationRecords;
    unsigned int _expirationRecordCount;
    char _preloading;
    double _lastCheckedGeneralExpiration;
    unsigned int _tileCacheMinimumWriteCount;
    unsigned int _tileCacheMinimumWriteBytes;
    unsigned int _tileCacheMaximumWriteCount;
    unsigned int _tileCacheMaximumWriteBytes;
}

@property (readonly, nonatomic) NSString * path;
@property char closed;
@property (readonly, nonatomic) unsigned long long databaseSize;
@property (nonatomic) unsigned long long maxDatabaseSize;

- (void)dealloc;
- (NSString *)path;
- (void)_updateSize;
- (GEODBWriter *)initWithPath:(NSString *)arg0;
- (char)closed;
- (void)endPreloadSession;
- (void)_closeDB;
- (void)setClosed:(char)arg0;
- (void)setExpirationRecords:(struct ? *)arg0 count:(unsigned int)arg1;
- (void)_openIfNecessary;
- (void)addData:(NSData *)arg0 forKey:(struct _GEOTileKey *)arg1 edition:(unsigned int)arg2 set:(unsigned int)arg3 provider:(unsigned int)arg4 etag:(NSString *)arg5;
- (void)deleteData:(struct _GEOTileKey *)arg0;
- (char)prepareSingleStatement:(struct sqlite3_stmt * *)arg0 forSql:(struct sqlite3_stmt)arg1;
- (void)_deviceLocked;
- (void)_editionUpdate:(NSDate *)arg0;
- (void)_openDBForceRecreate:(char)arg0;
- (void)_performWrites:(char)arg0;
- (void)_updateEdition:(unsigned int)arg0 forTileset:(unsigned int)arg1 provider:(unsigned int)arg2 invalidateOnly:(char)arg3;
- (void)_createTables;
- (void)_prepareStatements;
- (void)_writeVersion;
- (char)_readEditions;
- (void)_evict;
- (unsigned long long)_dbFileSize;
- (void)_assertDatabaseSize;
- (unsigned long long)_freeableDiskSpace;
- (void)_shrinkToUnderSize:(unsigned long long)arg0 vacuum:(char)arg1;
- (char)_tileSetExpires:(unsigned int)arg0;
- (void)_deleteKey:(struct _GEOTileKey)arg0;
- (void)_dropWritesOnFloor:(id)arg0;
- (void)_writeEntry:(GEODBWriteEntry *)arg0;
- (void)flushPendingWrites;
- (void)_printDBStatus:(char *)arg0;
- (void)calculateFreeableSizeWithHandler:(id /* block */)arg0 onQueue:(/* block */ id)arg1;
- (void)shrinkToSize:(unsigned long long)arg0 finished:(id /* block */)arg1;
- (void)shrinkToSize:(unsigned long long)arg0 finished:(id /* block */)arg1 onQueue:(/* block */ id)arg2;
- (NSString *)pendingWriteForKey:(struct _GEOTileKey *)arg0;
- (void)pendingWritesForKeys:(NSArray *)arg0 handler:(id /* block */)arg1;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg0;
- (unsigned long long)maxDatabaseSize;
- (void)setMaxDatabaseSize:(unsigned long long)arg0;
- (unsigned long long)databaseSize;
- (void)_localeChanged:(NSNotification *)arg0;

@end

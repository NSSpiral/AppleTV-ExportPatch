/* Runtime dump - GEODBReader
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODBReader : NSObject
{
    char _defunct;
    char _closed;
    int _editionUpdating;
    NSObject<OS_dispatch_queue> * _readQueue;
    NSString * _path;
    struct sqlite3 * _db;
    struct sqlite3_stmt * _tileQuery;
    struct sqlite3_stmt * _versionQuery;
    struct ? * _expirationRecords;
    unsigned int _expirationRecordCount;
}

@property char closed;

- (void)dealloc;
- (GEODBReader *)initWithPath:(NSString *)arg0;
- (char)closed;
- (void)_databaseReset:(NSSet *)arg0;
- (void)_editionUpdateBegin:(id)arg0;
- (void)_editionUpdateEnd:(id)arg0;
- (void)_deviceLocking;
- (void)_closeDB;
- (void)_openDB;
- (NSString *)_dataForKey:(struct _GEOTileKey)arg0 isCurrent:(char *)arg1 eTag:(id *)arg2;
- (void)setClosed:(char)arg0;
- (NSString *)dataForKey:(struct _GEOTileKey *)arg0 isCurrent:(char *)arg1 eTag:(id *)arg2;
- (void)dataForKey:(struct _GEOTileKey *)arg0 asyncHandler:(id /* block */)arg1;
- (void)dataForKeys:(struct GEOTileKeyList *)arg0 asyncHandler:(id /* block */)arg1;
- (void)setExpirationRecords:(struct ? *)arg0 count:(unsigned int)arg1;

@end

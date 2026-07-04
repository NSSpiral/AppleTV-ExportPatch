/* Runtime dump - GEOPlaceDataDBReader
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataDBReader : GEODBReader
{
    struct sqlite3_stmt * _queryPhoneNumber;
    struct sqlite3_stmt * _queryAllPlaceDataEntries;
    struct sqlite3_stmt * _queryAllPhoneNumberEntries;
}

- (void)_openDB;
- (id)placeDataForMUID:(unsigned long long)arg0;
- (unsigned long long)muidForPhoneNumber:(unsigned long long)arg0;
- (NSNumber *)placeDataForPhoneNumber:(unsigned long long)arg0;
- (NSArray *)allCacheEntries;
- (NSString *)placeDataForKey:(struct _GEOTileKey)arg0;
- (id)_placeCardDataForMuid:(unsigned long long)arg0;

@end

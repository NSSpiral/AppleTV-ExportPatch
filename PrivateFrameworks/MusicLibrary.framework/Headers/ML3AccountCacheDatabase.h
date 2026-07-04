/* Runtime dump - ML3AccountCacheDatabase
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3AccountCacheDatabase : NSObject
{
    ML3DatabaseConnection * _databaseConnection;
}

- (ML3AccountCacheDatabase *)init;
- (void).cxx_destruct;
- (NSString *)_databasePath;
- (char)_internalSetAppleID:(NSObject *)arg0 forDSID:(unsigned long long)arg1;
- (char)_clearCacheDatabase;
- (char)_openDatabase;
- (char)_closeDatabase;
- (char)_openDatabaseIsRetry:(char)arg0;
- (char)setAppleID:(NSString *)arg0 forDSID:(unsigned long long)arg1;
- (id)appleIDForDSID:(unsigned long long)arg0;

@end

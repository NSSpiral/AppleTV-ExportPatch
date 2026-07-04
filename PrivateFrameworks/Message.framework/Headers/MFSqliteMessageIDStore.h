/* Runtime dump - MFSqliteMessageIDStore
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSqliteMessageIDStore : NSObject
{
    NSString * _url;
    int _mailboxRowid;
    MFMailMessageLibrary * _library;
}

- (void)dealloc;
- (void)_loadMailboxRowidIfNecessary:(struct sqlite3 *)arg0;
- (MFSqliteMessageIDStore *)initWithLibrary:(MFMailMessageLibrary *)arg0 URLString:(NSString *)arg1;
- (NSSet *)knownMessageIDsFromSet:(NSSet *)arg0;
- (NSDate *)messageIDsAddedBeforeDate:(double)arg0;
- (void)deleteUIDsNotInArray:(NSArray *)arg0;
- (unsigned int)numberOfMessageIDs;
- (void)deleteAllUIDs;
- (unsigned long long)flagsForUID:(id)arg0;

@end

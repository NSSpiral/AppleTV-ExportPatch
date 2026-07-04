/* Runtime dump - ML3PersistentIDGenerator
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3PersistentIDGenerator : NSObject
{
    ML3DatabaseConnection * _connection;
    long long _currentPersistentID;
    long long _nextUsedPersistentID;
}

- (void).cxx_destruct;
- (ML3PersistentIDGenerator *)initWithDatabaseConnection:(ML3DatabaseConnection *)arg0;
- (long long)nextPersistentID;
- (void)_calculateNewRun;

@end

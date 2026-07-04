/* Runtime dump - ML3DatabaseConnectionPool
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseConnectionPool : NSObject
{
    _ML3DatabaseConnectionSubPool * _readersSubPool;
    _ML3DatabaseConnectionSubPool * _writersSubPool;
    NSMutableDictionary * _identifiersConnectionsMap;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSObject<OS_dispatch_semaphore> * _lockedSemaphore;
    NSUUID * _poolStorageKey;
    int _connectionsProfilingLevel;
    char _useDistantWriterConnections;
    char _waitingForUnlock;
    char _locked;
    NSString * _databasePath;
    <ML3DatabaseConnectionPoolDelegate> * _delegate;
    unsigned int _maxReaders;
    unsigned int _maxWriters;
    unsigned int _connectionsJournalingMode;
}

@property (readonly, nonatomic) NSString * databasePath;
@property (weak, nonatomic) <ML3DatabaseConnectionPoolDelegate> * delegate;
@property (readonly, nonatomic) unsigned int maxReaders;
@property (readonly, nonatomic) unsigned int maxWriters;
@property (nonatomic) unsigned int connectionsJournalingMode;
@property (nonatomic) int connectionsProfilingLevel;
@property (nonatomic) char useDistantWriterConnections;
@property (readonly, nonatomic) char locked;
@property (readonly) char isCurrentThreadConnectionInTransaction;

- (void)dealloc;
- (void)setDelegate:(<ML3DatabaseConnectionPoolDelegate> *)arg0;
- (ML3DatabaseConnectionPool *)init;
- (<ML3DatabaseConnectionPoolDelegate> *)delegate;
- (void)lock;
- (void)unlock;
- (char)isLocked;
- (void).cxx_destruct;
- (ML3DatabaseConnectionPool *)initWithDatabasePath:(NSString *)arg0 maxReaders:(unsigned int)arg1 maxWriters:(unsigned int)arg2;
- (NSURLConnection *)readerConnection;
- (NSURLConnection *)writerConnection;
- (void)checkInConnection:(NSURLConnection *)arg0;
- (void)closeAllConnections;
- (char)isCurrentThreadConnectionInTransaction;
- (void)setConnectionsProfilingLevel:(int)arg0;
- (id)_connectionForWriting:(char)arg0 useThreadConnection:(char)arg1;
- (void)setConnectionsJournalingMode:(unsigned int)arg0;
- (NSObject *)_localConnectionForThread:(NSObject *)arg0;
- (void)_setLocalConnection:(NSURLConnection *)arg0 forThread:(NSObject *)arg1;
- (void)_setConnection:(NSURLConnection *)arg0 forIdentifier:(NSString *)arg1;
- (NSString *)_connectionForIdentifier:(NSString *)arg0;
- (void)_closeAllConnectionsAndWaitForBusyConnections:(char)arg0;
- (ML3DatabaseConnectionPool *)initWithDatabasePath:(NSString *)arg0 maxReaders:(unsigned int)arg1;
- (int)connectionsProfilingLevel;
- (char)useDistantWriterConnections;
- (void)setUseDistantWriterConnections:(char)arg0;
- (unsigned int)maxReaders;
- (unsigned int)maxWriters;
- (unsigned int)connectionsJournalingMode;
- (NSString *)databasePath;

@end

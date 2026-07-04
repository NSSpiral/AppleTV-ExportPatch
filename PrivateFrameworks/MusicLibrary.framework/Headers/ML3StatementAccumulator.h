/* Runtime dump - ML3StatementAccumulator
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3StatementAccumulator : NSObject
{
    MLMediaLibraryService * _xpcService;
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned int _statementThreshold;
    NSMutableArray * _statementQueue;
    NSString * _databasePath;
    ML3DatabaseConnection * _connection;
    NSUUID * _existingTransactionIdentifier;
    unsigned int _priorityLevel;
}

@property (nonatomic) unsigned int statementThreshold;
@property (readonly, nonatomic) NSMutableArray * statementQueue;
@property (readonly, nonatomic) NSString * databasePath;
@property (readonly, nonatomic) ML3DatabaseConnection * connection;
@property (retain, nonatomic) NSUUID * existingTransactionIdentifier;
@property (nonatomic) unsigned int priorityLevel;

- (void)dealloc;
- (ML3StatementAccumulator *)init;
- (void).cxx_destruct;
- (ML3DatabaseConnection *)connection;
- (ML3StatementAccumulator *)initWithConnection:(ML3DatabaseConnection *)arg0;
- (void)setExistingTransactionIdentifier:(NSUUID *)arg0;
- (void)setPriorityLevel:(unsigned int)arg0;
- (void)setStatementThreshold:(unsigned int)arg0;
- (char)enqueueStatement:(id)arg0;
- (char)flushAndWait:(char)arg0;
- (char)_onQueueFlushAndWait:(char)arg0;
- (unsigned int)statementThreshold;
- (NSMutableArray *)statementQueue;
- (NSUUID *)existingTransactionIdentifier;
- (unsigned int)priorityLevel;
- (NSString *)databasePath;

@end

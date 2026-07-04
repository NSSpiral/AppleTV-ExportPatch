/* Runtime dump - NSSQLChannel
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLChannel : NSObject
{
    NSSQLConnection * _connection;
    NSSQLCore * _sqlCore;
    NSSQLEntity * _currentEntity;
    NSMutableArray * _fetchProperties;
    NSManagedObjectContext * _currentMOCon;
}

- (NSSQLCore *)sqlCore;
- (NSSQLChannel *)initWithSQLCore:(NSSQLCore *)arg0;
- (void)endFetch;
- (char)isFetchInProgress;
- (void)bindTempTablesForStatementIfNecessary:(id)arg0;
- (void)endFetchAndRecycleStatement:(char)arg0;
- (void)setCurrentEntity:(NSSQLEntity *)arg0;
- (NSArray *)_propertiesToFetch;
- (void)selectRowsWithFetchRequest:(NSURLRequest *)arg0;
- (void)selectRowsWithStatement:(id)arg0;
- (void)selectRowsWithCachedStatement:(id)arg0;
- (char)selectCountWithFetchRequest:(NSURLRequest *)arg0;
- (void)_openChannel;
- (void)_closeChannel;
- (void)_setCurrentEntityAndRelationshipWithFetchRequest:(NSURLRequest *)arg0;
- (void)dealloc;
- (NSSQLConnection *)connection;
- (NSManagedObjectContext *)currentContext;
- (void)setCurrentContext:(NSManagedObjectContext *)arg0;
- (void)finalize;

@end

/* Runtime dump - NSSQLiteAdapter
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLiteAdapter : NSSQLAdapter
{
    NSString * _dbpath;
}

- (char)supportsCorrelatedSubqueries;
- (Class)statementClass;
- (id)typeStringForColumn:(id)arg0;
- (NSObject *)typeStringForSQLType:(unsigned int)arg0;
- (NSSQLiteAdapter *)initWithSQLCore:(NSSQLCore *)arg0;
- (NSURLConnection *)createConnection;
- (NSObject *)generateSQLStatmentForSourcesAndOrderKeysForDestination:(NSObject *)arg0 inToMany:(id)arg1;
- (NSObject *)generateSQLStatmentForSourcesAndOrderKeysForDestination:(NSObject *)arg0 inManyToMany:(id)arg1;
- (NSString *)sqliteVersion;
- (id)pathnameForDatabase;
- (void)dealloc;
- (NSString *)type;

@end

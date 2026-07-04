/* Runtime dump - ML3DatabaseDistantResult
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseDistantResult : ML3DatabaseResult
{
    NSArray * _cachedRows;
    ML3DatabaseDistantConnection * _distantConnection;
    NSString * _sql;
    NSArray * _parameters;
}

@property (readonly, nonatomic) ML3DatabaseDistantConnection * distantConnection;
@property (readonly, nonatomic) NSString * sql;
@property (readonly, nonatomic) NSArray * parameters;

- (ML3DatabaseDistantResult *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)sql;
- (void)enumerateRowsWithBlock:(id /* block */)arg0;
- (NSArray *)parameters;
- (unsigned int)indexForColumnName:(NSString *)arg0;
- (NSDictionary *)columnNameIndexMap;
- (ML3DatabaseDistantResult *)initWithStatement:(ML3DatabaseStatement *)arg0;
- (ML3DatabaseDistantResult *)initWithDistantConnection:(ML3DatabaseDistantConnection *)arg0 sql:(NSString *)arg1 parameters:(NSArray *)arg2;
- (void)_remoteEnumerateRowsWithBlock:(id /* block */)arg0;
- (void)_localEnumerateRowsWithBlock:(id /* block */)arg0;
- (char)_fetchRowsIfEmpty;
- (ML3DatabaseDistantConnection *)distantConnection;

@end

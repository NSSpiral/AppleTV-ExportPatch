/* Runtime dump - ML3DatabaseStatementRenderer
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseStatementRenderer : NSObject

+ (ML3DatabaseStatementRenderer *)defaultRenderer;

- (NSString *)statementWithPrefix:(NSString *)arg0 inParameterCount:(unsigned int)arg1;
- (NSDictionary *)insertStatementWithOptions:(NSDictionary *)arg0;
- (NSString *)insertStatementForTableName:(NSString *)arg0 columnNames:(id)arg1;
- (NSString *)insertStatementUsingDefaultValuesForTableName:(NSString *)arg0;
- (NSString *)rollbackTranscationStatementToSavepointName:(NSString *)arg0;
- (NSObject *)beginTransactionStatementWithBehaviorType:(unsigned int)arg0;
- (struct sqlite3_stmt *)commitTransactionStatement;
- (id)rollbackTranscationStatement;
- (NSString *)savepointStatementWithName:(NSString *)arg0;
- (NSString *)savepointReleaseStatementWithName:(NSString *)arg0;

@end

/* Runtime dump - ML3DatabaseRow
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseRow : NSObject
{
    struct sqlite3_stmt * _stmt;
    ML3DatabaseResult * _parentResult;
}

@property (readonly, nonatomic) ML3DatabaseResult * parentResult;

- (ML3DatabaseRow *)init;
- (NSObject *)objectAtIndexedSubscript:(unsigned int)arg0;
- (NSObject *)objectForKeyedSubscript:(id)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)columnCount;
- (void).cxx_destruct;
- (long long)int64ForColumnIndex:(unsigned int)arg0;
- (NSObject *)numberForColumnIndex:(unsigned int)arg0;
- (NSObject *)stringForColumnIndex:(unsigned int)arg0;
- (int)intForColumnIndex:(unsigned int)arg0;
- (NSObject *)dataForColumnIndex:(unsigned int)arg0;
- (double)doubleForColumnIndex:(unsigned int)arg0;
- (void)getBlobBytes:(void * *)arg0 outLength:(void *)arg1 forColumnIndex:(int *)arg2;
- (NSObject *)valueForColumnIndex:(unsigned int)arg0;
- (NSString *)stringForColumnName:(NSString *)arg0;
- (ML3DatabaseResult *)parentResult;
- (ML3DatabaseRow *)initWithParentResult:(ML3DatabaseResult *)arg0;
- (NSArray *)arrayRepresentation;
- (char *)cStringForColumnIndex:(SEL)arg0;
- (NSString *)valueForColumnName:(NSString *)arg0;
- (NSString *)dataForColumnName:(NSString *)arg0;
- (double)doubleForColumnName:(NSString *)arg0;
- (int)intForColumnName:(NSString *)arg0;
- (long long)int64ForColumnName:(NSString *)arg0;
- (char *)cStringForColumnName:(SEL)arg0;
- (NSString *)numberForColumnName:(NSString *)arg0;
- (void)getBlobBytes:(void * *)arg0 outLength:(void *)arg1 forColumnName:(int *)arg2;

@end

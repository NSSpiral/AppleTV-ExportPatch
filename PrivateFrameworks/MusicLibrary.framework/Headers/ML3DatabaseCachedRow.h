/* Runtime dump - ML3DatabaseCachedRow
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseCachedRow : ML3DatabaseRow
{
    NSArray * _arrayRepresentation;
}

- (ML3DatabaseCachedRow *)initWithArray:(NSArray *)arg0;
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
- (ML3DatabaseCachedRow *)initWithParentResult:(ML3DatabaseResult *)arg0;
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
- (NSObject *)_numberOrZeroForColumnIndex:(unsigned int)arg0;

@end

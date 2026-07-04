/* Runtime dump - ML3DatabaseResult
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseResult : NSObject
{
    ML3DatabaseStatement * _statement;
    NSDictionary * _columnNameIndexMap;
    unsigned int _limitIndex;
    NSString * _limitProperty;
    long long _limitValue;
}

@property (copy, nonatomic) NSString * limitProperty;
@property (nonatomic) long long limitValue;

- (ML3DatabaseResult *)init;
- (NSMapTable *)rows;
- (void).cxx_destruct;
- (char)hasAtLeastOneRow;
- (void)enumerateRowsWithBlock:(id /* block */)arg0;
- (long long)int64ValueForFirstRowAndColumn;
- (id)objectForFirstRowAndColumn;
- (id)stringValueForFirstRowAndColumn;
- (id)objectsInColumn:(unsigned int)arg0;
- (long long)limitValue;
- (void)setLimitValue:(long long)arg0;
- (ML3DatabaseStatement *)_statement;
- (unsigned int)indexForColumnName:(NSString *)arg0;
- (void)setLimitProperty:(NSString *)arg0;
- (NSDictionary *)columnNameIndexMap;
- (ML3DatabaseResult *)initWithStatement:(ML3DatabaseStatement *)arg0;
- (void)setLimitProperty:(NSString *)arg0 limitValue:(long long)arg1;
- (NSString *)limitProperty;

@end

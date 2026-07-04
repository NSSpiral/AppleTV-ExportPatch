/* Runtime dump - ML3MigrationAddedColumn
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3MigrationAddedColumn : NSObject
{
    NSString * _columnName;
    NSString * _foreignTableName;
    NSString * _foreignColumnName;
    NSString * _joinColumnName;
}

@property (readonly, nonatomic) NSString * columnName;
@property (readonly, nonatomic) NSString * foreignTableName;
@property (readonly, nonatomic) NSString * foreignColumnName;
@property (readonly, nonatomic) NSString * joinColumnName;
@property (readonly, nonatomic) char shouldImportFromForeignTable;

- (void).cxx_destruct;
- (ML3MigrationAddedColumn *)initWithName:(NSString *)arg0 foreignTable:(ML3DatabaseTable *)arg1 foreignColumn:(id)arg2 joinColumn:(id)arg3;
- (char)shouldImportFromForeignTable;
- (NSString *)joinColumnName;
- (NSString *)foreignTableName;
- (NSString *)columnName;
- (NSString *)foreignColumnName;

@end

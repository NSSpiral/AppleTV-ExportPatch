/* Runtime dump - ML3DatabaseForeignKeyConstraint
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseForeignKeyConstraint : NSObject
{
    ML3DatabaseTable * _foreignTable;
    NSArray * _localColumns;
    NSArray * _foreignColumns;
}

@property (readonly, nonatomic) ML3DatabaseTable * foreignTable;
@property (readonly, nonatomic) NSArray * localColumns;
@property (readonly, nonatomic) NSArray * foreignColumns;

- (void).cxx_destruct;
- (ML3DatabaseForeignKeyConstraint *)initWithForeignTable:(ML3DatabaseTable *)arg0 localColumns:(NSArray *)arg1 foreignColumns:(NSArray *)arg2;
- (id)_foreignKeyClauseSQL;
- (ML3DatabaseTable *)foreignTable;
- (NSArray *)localColumns;
- (NSArray *)foreignColumns;

@end

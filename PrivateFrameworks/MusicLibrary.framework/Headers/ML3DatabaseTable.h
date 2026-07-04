/* Runtime dump - ML3DatabaseTable
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseTable : NSObject <NSCopying, NSMutableCopying>
{
    NSString * _name;
    NSArray * _columns;
    NSArray * _foreignKeyConstraints;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSArray * columns;
@property (readonly, nonatomic) NSArray * foreignKeyConstraints;

- (NSString *)name;
- (ML3DatabaseTable *)copyWithZone:(struct _NSZone *)arg0;
- (ML3DatabaseTable *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSArray *)columns;
- (NSObject *)_copyWithZone:(struct _NSZone *)arg0 concreteClass:(Class)arg1;
- (id)columnDefinitionsSQL;
- (NSArray *)foreignKeyConstraints;
- (id)createTableSQLWithExistenceClause:(char)arg0;

@end

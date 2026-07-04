/* Runtime dump - ML3MutableDatabaseTable
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3MutableDatabaseTable : ML3DatabaseTable

@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSArray * columns;
@property (copy, nonatomic) NSArray * foreignKeyConstraints;

- (void)setName:(NSString *)arg0;
- (void)setColumns:(NSArray *)arg0;
- (void)setForeignKeyConstraints:(NSArray *)arg0;

@end

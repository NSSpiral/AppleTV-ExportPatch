/* Runtime dump - NSSQLiteIntarrayTable
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLiteIntarrayTable : NSObject
{
    struct sqlite3_intarray * _intarrayTable;
    NSString * _intarrayTableName;
}

@property struct sqlite3_intarray * intarrayTable;
@property (retain) NSString * intarrayTableName;

- (void)setIntarrayTableName:(NSString *)arg0;
- (void)setIntarrayTable:(struct sqlite3_intarray *)arg0;
- (struct sqlite3_intarray *)intarrayTable;
- (NSString *)intarrayTableName;
- (void)dealloc;

@end

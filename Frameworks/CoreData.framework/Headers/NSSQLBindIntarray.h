/* Runtime dump - NSSQLBindIntarray
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLBindIntarray : NSObject
{
    unsigned int _index;
    id _value;
    NSString * _tableName;
}

@property unsigned int index;
@property (retain) id value;
@property (retain) NSString * tableName;

- (NSSQLBindIntarray *)initWithValue:(NSValue *)arg0;
- (NSString *)tableName;
- (void)setTableName:(NSString *)arg0;
- (void)dealloc;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg0;

@end

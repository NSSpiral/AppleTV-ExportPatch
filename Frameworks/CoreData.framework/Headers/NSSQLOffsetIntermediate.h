/* Runtime dump - NSSQLOffsetIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLOffsetIntermediate : NSSQLIntermediate
{
    unsigned int _offset;
}

- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (NSSQLOffsetIntermediate *)initWithOffset:(unsigned int)arg0 inScope:(NSObject *)arg1;

@end

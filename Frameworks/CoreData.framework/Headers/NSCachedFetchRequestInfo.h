/* Runtime dump - NSCachedFetchRequestInfo
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCachedFetchRequestInfo : NSObject
{
    NSArray * _substVarBindOrdering;
    NSArray * _substIntarrayBindOrdering;
}

@property (retain, nonatomic) NSArray * substitutionBindVariableOrder;
@property (retain, nonatomic) NSArray * substitutionBindIntarrayOrder;

- (NSArray *)substitutionBindVariableOrder;
- (void)setSubstitutionBindVariableOrder:(NSArray *)arg0;
- (NSArray *)substitutionBindIntarrayOrder;
- (void)setSubstitutionBindIntarrayOrder:(NSArray *)arg0;
- (void)dealloc;

@end

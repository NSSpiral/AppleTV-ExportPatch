/* Runtime dump - NSSQLPredicateAnalyser
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor>
{
    char _compoundPredicate;
    NSMutableArray * _keys;
    NSMutableArray * _allModifierPredicates;
    NSMutableArray * _setExpressions;
    NSMutableArray * _subqueries;
}

- (void)visitPredicate:(NSPredicate *)arg0;
- (void)visitPredicateExpression:(NSObject *)arg0;
- (NSMutableArray *)allModifierPredicates;
- (void)visitPredicateOperator:(id)arg0;
- (id)keypaths;
- (NSMutableArray *)subqueries;
- (NSMutableArray *)setExpressions;
- (void)dealloc;
- (NSSQLPredicateAnalyser *)init;

@end

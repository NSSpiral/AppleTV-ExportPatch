/* Runtime dump - SSSQLitePredicate
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLitePredicate : NSObject <NSCopying>

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (SSSQLitePredicate *)copyWithZone:(struct _NSZone *)arg0;
- (NSObject *)SQLForEntityClass:(Class)arg0;
- (void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(int *)arg1;
- (NSObject *)SQLJoinClausesForEntityClass:(Class)arg0;

@end

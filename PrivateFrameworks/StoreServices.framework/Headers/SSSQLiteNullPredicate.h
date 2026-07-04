/* Runtime dump - SSSQLiteNullPredicate
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLiteNullPredicate : SSSQLitePropertyPredicate <NSCopying>
{
    char _matchesNull;
}

@property (readonly, nonatomic) char matchesNull;

+ (NSObject *)isNotNullPredicateWithProperty:(NSString *)arg0;
+ (NSObject *)isNullPredicateWithProperty:(NSString *)arg0;

- (char)isEqual:(NSObject *)arg0;
- (SSSQLiteNullPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (NSObject *)SQLForEntityClass:(Class)arg0;
- (char)matchesNull;

@end

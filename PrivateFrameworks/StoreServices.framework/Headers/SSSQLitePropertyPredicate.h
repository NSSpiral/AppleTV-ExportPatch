/* Runtime dump - SSSQLitePropertyPredicate
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLitePropertyPredicate : SSSQLitePredicate <NSCopying>
{
    NSString * _property;
}

@property (readonly, nonatomic) NSString * property;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (SSSQLitePropertyPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)property;
- (NSObject *)SQLJoinClausesForEntityClass:(Class)arg0;

@end

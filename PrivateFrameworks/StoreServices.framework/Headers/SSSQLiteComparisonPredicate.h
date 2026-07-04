/* Runtime dump - SSSQLiteComparisonPredicate
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLiteComparisonPredicate : SSSQLitePropertyPredicate <NSCopying>
{
    int _comparisonType;
    id _value;
}

@property (readonly, nonatomic) int comparisonType;
@property (readonly, nonatomic) id value;

+ (NSPredicate *)predicateWithProperty:(NSString *)arg0 equalToValue:(id)arg1;
+ (NSPredicate *)predicateWithProperty:(NSString *)arg0 value:(NSObject *)arg1 comparisonType:(int)arg2;
+ (NSPredicate *)predicateWithProperty:(NSString *)arg0 equalToLongLong:(long long)arg1;

- (int)comparisonType;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void *)value;
- (SSSQLiteComparisonPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (NSObject *)SQLForEntityClass:(Class)arg0;
- (void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(int *)arg1;
- (NSString *)_comparisonTypeString;

@end

/* Runtime dump - NSFetchRequestExpression
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSFetchRequestExpression : NSExpression
{
    void * _reserved1;
    void * _reserved2;
    void * _reserved3;
    void * _reserved4;
    NSExpression * _fetchRequest;
    NSExpression * _managedObjectContext;
    struct _fetchExpressionFlags _flags;
}

@property (readonly) NSExpression * requestExpression;
@property (readonly) NSExpression * contextExpression;
@property (readonly) char countOnlyRequest;

+ (NSFetchRequestExpression *)expressionForFetch:(id)arg0 context:(NSObject *)arg1 countOnly:(char)arg2;

- (void)acceptVisitor:(NSObject *)arg0 flags:(unsigned int)arg1;
- (NSObject *)expressionValueWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (char)isCountOnlyRequest;
- (NSExpression *)requestExpression;
- (NSFetchRequestExpression *)initForFetch:(CKDQueuedRecordFetch *)arg0 context:(NSObject *)arg1 countOnly:(char)arg2;
- (NSString *)predicateFormat;
- (NSExpression *)contextExpression;
- (NSExpression *)_expressionWithSubstitutionVariables:(NSDictionary *)arg0;
- (void)dealloc;
- (NSFetchRequestExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSFetchRequestExpression *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)expressionType;

@end

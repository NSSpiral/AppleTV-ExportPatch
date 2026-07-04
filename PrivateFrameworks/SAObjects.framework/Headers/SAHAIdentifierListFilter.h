/* Runtime dump - SAHAIdentifierListFilter
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAIdentifierListFilter : SAHAFilter

@property (copy, nonatomic) NSArray * identifiers;

+ (NSObject *)identifierListFilter;
+ (NSDictionary *)identifierListFilterWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)shortDescription;
- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSArray *)identifiers;
- (void)setIdentifiers:(NSArray *)arg0;

@end

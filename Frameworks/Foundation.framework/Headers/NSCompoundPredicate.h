/* Runtime dump - NSCompoundPredicate
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCompoundPredicate : NSPredicate
{
    void * _reserved2;
    unsigned int _type;
    NSArray * _subpredicates;
}

@property (readonly) unsigned int compoundPredicateType;
@property (readonly, copy) NSArray * subpredicates;

+ (NSObject *)_operatorForType:(unsigned int)arg0;
+ (char)supportsSecureCoding;
+ (NSCompoundPredicate *)orPredicateWithSubpredicates:(NSArray *)arg0;
+ (NSPredicate *)notPredicateWithSubpredicate:(NSPredicate *)arg0;
+ (NSCompoundPredicate *)andPredicateWithSubpredicates:(NSArray *)arg0;

- (id)CKDPQueryFiltersWithTranslator:(CKDProtocolTranslator *)arg0 error:(id *)arg1;
- (NSURL *)br_watchedURL;
- (void)validate;
- (void)ab_bindStatement:(struct CPSqliteStatement *)arg0 withBindingOffset:(struct sqlite3_stmt *)arg1 predicateIdentifier:(NSString *)arg2;
- (char)ab_hasCallback;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg0 addressBook:(void *)arg1 propertyIndices:(struct __CFDictionary * *)arg2;
- (void)ab_addCallbackContextToArray:(struct __CFArray *)arg0;
- (NSString *)minimalFormInContext:(NSObject *)arg0;
- (NSCompoundPredicate *)initWithType:(unsigned int)arg0 subpredicates:(NSArray *)arg1;
- (void)allowEvaluation;
- (NSPredicateOperator *)predicateOperator;
- (void)acceptVisitor:(NSObject *)arg0 flags:(unsigned int)arg1;
- (NSPredicate *)predicateWithSubstitutionVariables:(NSDictionary *)arg0;
- (NSString *)predicateFormat;
- (NSString *)generateMetadataDescription;
- (NSPredicateOperator *)_predicateOperator;
- (NSString *)_subpredicateDescription:(NSString *)arg0;
- (void)_acceptSubpredicates:(id)arg0 flags:(unsigned int)arg1;
- (void)dealloc;
- (NSCompoundPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSCompoundPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)compoundPredicateType;
- (NSArray *)subpredicates;
- (char)evaluateWithObject:(NSObject *)arg0 substitutionVariables:(NSDictionary *)arg1;

@end

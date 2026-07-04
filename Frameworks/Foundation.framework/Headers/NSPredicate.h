/* Runtime dump - NSPredicate
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPredicate : NSObject <NSSecureCoding, NSCopying>
{
    struct _predicateFlags _predicateFlags;
}

@property (readonly, copy) NSString * predicateFormat;

+ (NSPredicate *)predicateWithCKDPQueryFilters:(id)arg0 translator:(CKDProtocolTranslator *)arg1;
+ (NSPredicate *)predicateWithSortedCKDPQueryFilters:(id)arg0 translator:(CKDProtocolTranslator *)arg1;
+ (NSPredicate *)predicateForAssetsInAssetCollectionWithID:(int)arg0;
+ (NSPredicate *)predicateForCloudInvitationsInAssetCollection:(id)arg0;
+ (NSPredicate *)predicateForCommentsInAsset:(NSSet *)arg0;
+ (NSPredicate *)predicateForLikesInAsset:(NSSet *)arg0;
+ (struct __CFLocale *)retainedLocale;
+ (NSPredicate *)predicateWithFormat:(NSString *)arg0 argumentArray:(NSMutableArray *)arg1;
+ (NSObject *)newStringFrom:(NSObject *)arg0 usingUnicodeTransforms:(unsigned int)arg1;
+ (NSPredicate *)predicateWithFormat:(NSString *)arg0 arguments:(void *)arg1;
+ (void)initialize;
+ (char)supportsSecureCoding;
+ (NSPredicate *)predicateWithValue:(char)arg0;
+ (NSPredicate *)predicateWithBlock:(id /* block */)arg0;
+ (NSPredicate *)predicateWithFormat:(NSString *)arg0;

- (id)CKDPQueryFiltersWithTranslator:(CKDProtocolTranslator *)arg0 error:(id *)arg1;
- (NSURL *)br_watchedURL;
- (void)validate;
- (void)ab_bindStatement:(struct CPSqliteStatement *)arg0 withBindingOffset:(struct sqlite3_stmt *)arg1 predicateIdentifier:(NSString *)arg2;
- (char)ab_hasCallback;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg0 addressBook:(void *)arg1 propertyIndices:(struct __CFDictionary * *)arg2;
- (void)ab_addCallbackContextToArray:(struct __CFArray *)arg0;
- (void)ab_runPredicateWithSortOrder:(unsigned int)arg0 inAddressBook:(void *)arg1 withDelegate:(NSObject *)arg2;
- (NSString *)minimalFormInContext:(NSObject *)arg0;
- (void)allowEvaluation;
- (void)acceptVisitor:(NSObject *)arg0 flags:(unsigned int)arg1;
- (NSPredicate *)predicateWithSubstitutionVariables:(NSDictionary *)arg0;
- (NSString *)predicateFormat;
- (void)_validateForMetadataQueryScopes:(id)arg0;
- (NSString *)generateMetadataDescription;
- (char)_allowsEvaluation;
- (NSPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (char)evaluateWithObject:(NSObject *)arg0;
- (char)evaluateWithObject:(NSObject *)arg0 substitutionVariables:(NSDictionary *)arg1;

@end

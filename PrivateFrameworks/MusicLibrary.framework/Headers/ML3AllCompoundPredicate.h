/* Runtime dump - ML3AllCompoundPredicate
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3AllCompoundPredicate : ML3CompoundPredicate

+ (NSPredicate *)predicateByFlatteningAllCompoundPredicate:(NSPredicate *)arg0;
+ (NSPredicate *)predicateByMergingContainmentPredicatesAllCompoundPredicate:(NSPredicate *)arg0;

- (NSString *)compoundOperatorJoiner;

@end

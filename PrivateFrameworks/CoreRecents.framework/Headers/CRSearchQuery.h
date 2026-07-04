/* Runtime dump - CRSearchQuery
 * Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

@interface CRSearchQuery : NSObject <NSSecureCoding>
{
    NSPredicate * _predicate;
    NSArray * _domains;
    unsigned int _implicitGroupThreshold;
    unsigned int _options;
    id _weightDecayer;
    id _comparator;
}

@property (retain, nonatomic) NSPredicate * predicate;
@property (copy, nonatomic) NSArray * domains;
@property (nonatomic) unsigned int implicitGroupThreshold;
@property (nonatomic) unsigned int options;
@property (copy, nonatomic) id weightDecayer;
@property (copy, nonatomic) id comparator;

+ (CRSearchQuery *)frecencyComparatorForSearch:(SEL)arg0 preferredKinds:(id)arg1 sendingAddress:(NSString *)arg2 queryOptions:(unsigned int)arg3;
+ (char)supportsSecureCoding;
+ (CRSearchQuery *)searchQueryForSearchTerm:(id)arg0 preferredKinds:(id)arg1 sendingAddress:(NSString *)arg2 recentsDomain:(NSString *)arg3;
+ (id /* block */)frecencyComparator;
+ (CRSearchQuery *)rankedFrecencyComparatorWithPreferredSources:(SEL)arg0;

- (id /* block */)comparator;
- (void)setDomains:(NSArray *)arg0;
- (void)setImplicitGroupThreshold:(unsigned int)arg0;
- (void)dealloc;
- (CRSearchQuery *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setPredicate:(NSPredicate *)arg0;
- (NSPredicate *)predicate;
- (void)setOptions:(unsigned int)arg0;
- (unsigned int)options;
- (unsigned int)implicitGroupThreshold;
- (id)weightDecayer;
- (void)setWeightDecayer:(id)arg0;
- (NSArray *)domains;
- (void)setComparator:(id /* block */)arg0;

@end

/* Runtime dump - ATVConflictResolverEntry
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVConflictResolverEntry : NSObject
{
    NSString * _keyPrefix;
    id _conflictResolver;
}

@property (readonly, nonatomic) NSString * keyPrefix;
@property (readonly, nonatomic) id conflictResolver;

- (void).cxx_destruct;
- (ATVConflictResolverEntry *)initWithKeyPrefix:(NSString *)arg0 conflictResolver:(id)arg1;
- (NSString *)keyPrefix;
- (id)conflictResolver;

@end

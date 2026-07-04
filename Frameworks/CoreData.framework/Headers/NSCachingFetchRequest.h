/* Runtime dump - NSCachingFetchRequest
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCachingFetchRequest : NSFetchRequest
{
    NSDictionary * _substitutionVariables;
    NSMutableSet * _cachingCoordinators;
    char _hasCachedInfo;
    id _identifier;
}

@property (copy, nonatomic) NSDictionary * substitutionVariables;
@property (readonly, nonatomic) id _identifier;

+ (NSString *)_generateIdentifier;

- (void)_registerCachingCoordinator:(NSObject *)arg0;
- (NSDictionary *)substitutionVariables;
- (void)_sanityCheckVariables:(id)arg0;
- (void)setSubstitutionVariables:(NSDictionary *)arg0;
- (void)dealloc;
- (NSCachingFetchRequest *)init;
- (NSString *)_identifier;

@end

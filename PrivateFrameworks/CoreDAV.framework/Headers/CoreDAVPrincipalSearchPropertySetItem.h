/* Runtime dump - CoreDAVPrincipalSearchPropertySetItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem
{
    NSMutableSet * _principalSearchProperties;
}

@property (retain, nonatomic) NSMutableSet * principalSearchProperties;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVPrincipalSearchPropertySetItem *)init;
- (NSString *)description;
- (NSMutableSet *)principalSearchProperties;
- (void)addPrincipalSearchProperty:(NSObject *)arg0;
- (void)setPrincipalSearchProperties:(NSMutableSet *)arg0;

@end

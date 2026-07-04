/* Runtime dump - SAFmfVisibilityStateSet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfVisibilityStateSet : SADomainCommand

@property (nonatomic) char visible;

+ (NSSet *)visibilityStateSet;
+ (NSDictionary *)visibilityStateSetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setVisible:(char)arg0;
- (char)visible;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end

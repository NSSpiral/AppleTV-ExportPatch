/* Runtime dump - SAGKWebLinkPod
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKWebLinkPod : SAGKPodView

@property (copy, nonatomic) NSArray * links;

+ (SAGKWebLinkPod *)webLinkPod;
+ (NSDictionary *)webLinkPodWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)links;
- (NSString *)encodedClassName;
- (void)setLinks:(NSArray *)arg0;

@end

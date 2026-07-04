/* Runtime dump - SAGKSourceLinkPod
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKSourceLinkPod : SAGKPodView

@property (copy, nonatomic) NSString * linkText;
@property (retain, nonatomic) SAUIAppPunchOut * punchOut;

+ (SAGKSourceLinkPod *)sourceLinkPod;
+ (NSDictionary *)sourceLinkPodWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (SAUIAppPunchOut *)punchOut;
- (void)setPunchOut:(SAUIAppPunchOut *)arg0;
- (NSString *)linkText;
- (void)setLinkText:(NSString *)arg0;

@end

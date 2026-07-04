/* Runtime dump - SAGKDisambiguationPod
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKDisambiguationPod : SAGKPodView

@property (copy, nonatomic) NSString * text;

+ (SAGKDisambiguationPod *)disambiguationPod;
+ (NSDictionary *)disambiguationPodWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSString *)encodedClassName;

@end

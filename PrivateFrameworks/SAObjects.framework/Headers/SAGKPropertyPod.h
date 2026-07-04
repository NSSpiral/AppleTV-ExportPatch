/* Runtime dump - SAGKPropertyPod
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKPropertyPod : SAGKPodView

@property (copy, nonatomic) NSArray * propertyList;

+ (SAGKPropertyPod *)propertyPod;
+ (NSDictionary *)propertyPodWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSArray *)propertyList;
- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (void)setPropertyList:(NSArray *)arg0;

@end

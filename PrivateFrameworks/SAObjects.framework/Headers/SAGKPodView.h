/* Runtime dump - SAGKPodView
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKPodView : SAAceView

@property (copy, nonatomic) NSString * title;

+ (NSObject *)podView;
+ (NSDictionary *)podViewWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)encodedClassName;

@end

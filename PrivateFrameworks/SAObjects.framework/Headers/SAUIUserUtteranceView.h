/* Runtime dump - SAUIUserUtteranceView
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIUserUtteranceView : SAAceView

@property (copy, nonatomic) NSString * text;

+ (NSObject *)userUtteranceView;
+ (NSDictionary *)userUtteranceViewWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSString *)encodedClassName;

@end

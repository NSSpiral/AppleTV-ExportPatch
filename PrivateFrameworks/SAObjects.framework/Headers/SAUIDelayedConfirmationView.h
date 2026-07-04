/* Runtime dump - SAUIDelayedConfirmationView
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIDelayedConfirmationView : SAUIConfirmationView

@property (nonatomic) int autoConfirmDelay;

+ (NSObject *)delayedConfirmationView;
+ (NSDictionary *)delayedConfirmationViewWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (int)autoConfirmDelay;
- (void)setAutoConfirmDelay:(int)arg0;

@end

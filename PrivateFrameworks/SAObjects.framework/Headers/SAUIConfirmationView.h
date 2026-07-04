/* Runtime dump - SAUIConfirmationView
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIConfirmationView : SAAceView

@property (copy, nonatomic) NSArray * allConfirmationOptions;
@property (copy, nonatomic) NSString * cancelTrigger;
@property (copy, nonatomic) NSArray * confirmCommands;
@property (copy, nonatomic) NSString * confirmText;
@property (copy, nonatomic) NSArray * denyCommands;
@property (copy, nonatomic) NSString * denyText;

+ (NSObject *)confirmationView;
+ (NSDictionary *)confirmationViewWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)allConfirmationOptions;
- (void)setAllConfirmationOptions:(NSArray *)arg0;
- (NSString *)cancelTrigger;
- (void)setCancelTrigger:(NSString *)arg0;
- (NSArray *)confirmCommands;
- (void)setConfirmCommands:(NSArray *)arg0;
- (NSString *)confirmText;
- (void)setConfirmText:(NSString *)arg0;
- (NSArray *)denyCommands;
- (void)setDenyCommands:(NSArray *)arg0;
- (NSString *)denyText;
- (void)setDenyText:(NSString *)arg0;

@end

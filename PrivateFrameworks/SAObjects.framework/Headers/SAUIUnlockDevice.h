/* Runtime dump - SAUIUnlockDevice
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIUnlockDevice : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray * cancellationCommands;
@property (copy, nonatomic) NSArray * failureCommands;
@property (copy, nonatomic) NSArray * successCommands;

+ (NSObject *)unlockDevice;
+ (NSDictionary *)unlockDeviceWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSArray *)cancellationCommands;
- (void)setCancellationCommands:(NSArray *)arg0;
- (NSArray *)failureCommands;
- (void)setFailureCommands:(NSArray *)arg0;
- (NSArray *)successCommands;
- (void)setSuccessCommands:(NSArray *)arg0;

@end

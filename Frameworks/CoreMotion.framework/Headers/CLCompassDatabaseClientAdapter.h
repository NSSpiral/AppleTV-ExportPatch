/* Runtime dump - CLCompassDatabaseClientAdapter
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLCompassDatabaseClientAdapter : CLNotifierServiceAdapter <CLCompassDatabaseClientProtocol>

@property (nonatomic) char valid;

+ (void)becameFatallyBlocked:(id)arg0;
+ (CLCompassDatabaseClientAdapter *)getSilo;
+ (char)isSupported;

- (void)doAsync:(id)arg0;
- (void)doAsync:(id)arg0 withReply:(/* block */ id)arg1;
- (char)syncgetDoSync:(id)arg0;
- (void)beginService;
- (void)endService;
- (struct CLCompassDatabaseClient *)adaptee;
- (CLCompassDatabaseClientAdapter *)initInSilo:(CLSilo *)arg0;

@end

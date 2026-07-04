/* Runtime dump - CLGeomagneticModelProviderClientAdapter
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLGeomagneticModelProviderClientAdapter : CLNotifierServiceAdapter <CLGeomagneticModelProviderClientProtocol>

@property (nonatomic) char valid;

+ (void)becameFatallyBlocked:(id)arg0;
+ (CLGeomagneticModelProviderClientAdapter *)getSilo;
+ (char)isSupported;

- (void)doAsync:(id)arg0;
- (void)doAsync:(id)arg0 withReply:(/* block */ id)arg1;
- (char)syncgetDoSync:(id)arg0;
- (void)beginService;
- (void)endService;
- (struct CLGeomagneticModelProviderClient *)adaptee;
- (CLGeomagneticModelProviderClientAdapter *)initInSilo:(CLSilo *)arg0;

@end

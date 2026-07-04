/* Runtime dump - CLGyroCalibrationDatabaseRemoteAdapter
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLGyroCalibrationDatabaseRemoteAdapter : CLNotifierServiceAdapter <CLGyroCalibrationDatabaseRemoteProtocol>

@property (nonatomic) char valid;

+ (void)becameFatallyBlocked:(id)arg0;
+ (CLGyroCalibrationDatabaseRemoteAdapter *)getSilo;
+ (char)isSupported;

- (void)doAsync:(id)arg0;
- (void)doAsync:(id)arg0 withReply:(/* block */ id)arg1;
- (char)syncgetDoSync:(id)arg0;
- (void)beginService;
- (void)endService;
- (struct CLGyroCalibrationDatabaseRemote *)adaptee;
- (CLGyroCalibrationDatabaseRemoteAdapter *)initInSilo:(CLSilo *)arg0;

@end

/* Runtime dump - ATVHIDSystemClient
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVHIDSystemClient : NSObject
{
    struct __IOHIDEventSystemClient * _hidSystemClient;
    struct __IOHIDServiceClient * _appleTVIRService;
    NSArray * _remotes;
}

+ (ATVHIDSystemClient *)sharedInstance;

- (void)setSILState_Starting;
- (void)wakeDisplay;
- (void)setSILState_On;
- (void)setSILState_Off;
- (void)setSILState_RejectedCommand;
- (void)setSILState_HardwareProblem;
- (void)_processApplePage1HIDEvent:(struct __IOHIDEvent *)arg0;
- (void)_processApplePage2HIDEvent:(struct __IOHIDEvent *)arg0;
- (NSString *)_propertyForKey:(NSString *)arg0 error:(id *)arg1;
- (void)rereadRemotes;
- (void)_setSILToState:(NSObject *)arg0;
- (void)_processHIDEvent:(struct __IOHIDEvent *)arg0;
- (NSString *)mcuVersion;
- (char)isPairedWithAppleRemote;
- (void)pairAppleRemote;
- (void)unpairAppleRemote;
- (void)sleepDisplay;
- (NSArray *)remotes;
- (void)deleteRemote:(id)arg0;
- (void)setName:(NSString *)arg0 ofRemote:(FigCameraViewfinderRemote *)arg1;
- (void)resetLearningRemote;
- (void)commitLearningRemote;
- (void)startLearningUsagePage:(unsigned int)arg0 usageCode:(unsigned int)arg1 forRemoteUUID:(id)arg2;
- (void)saveLearning;
- (void)cancelLearning;
- (void)dealloc;
- (ATVHIDSystemClient *)init;
- (long)_init;
- (void).cxx_destruct;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1 error:(id *)arg2;

@end

/* Runtime dump - SAWatchData
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWatchData : AceObject <SAAceSerializable>

@property (nonatomic) char configuredForLeftWrist;
@property (copy, nonatomic) NSString * interfaceOrientation;
@property (nonatomic) char wristDetected;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAWatchData *)watchData;
+ (NSDictionary *)watchDataWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)interfaceOrientation;
- (void)setInterfaceOrientation:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)configuredForLeftWrist;
- (void)setConfiguredForLeftWrist:(char)arg0;
- (char)wristDetected;
- (void)setWristDetected:(char)arg0;

@end

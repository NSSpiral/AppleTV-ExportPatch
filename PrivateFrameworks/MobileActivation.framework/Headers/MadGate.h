/* Runtime dump - MadGate
 * Image: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
 */

@interface MadGate : NSObject

- (void)performSelectorOnRemoteObject:(SEL)arg0 withParam:(id)arg1 completionBlock:(id /* block */)arg2 waitBlock:(/* block */ id)arg3;
- (NSObject *)getActivationState;
- (BOOL)getActivationBuild;
- (unsigned char)isDeviceABrick;
- (unsigned char)hasActivationTicket;
- (NSDictionary *)createActivationInfo;
- (NSDictionary *)createRecertInfo;
- (NSDictionary *)handleActivationInfo:(NSDictionary *)arg0;
- (void)deactivateDevice;
- (void)reactivateDevice;
- (NSDictionary *)handleReCertInfo:(NSDictionary *)arg0;
- (id)copyRegulatoryImages;
- (NSObject *)copyActivationRecord;
- (BOOL)unbrickDevice;
- (BOOL)recertifyDevice;
- (BOOL)recertifyDeviceSB;

@end

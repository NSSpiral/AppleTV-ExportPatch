/* Runtime dump - CLDeviceMotionProperties
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLDeviceMotionProperties : NSObject
{
    int fMode;
    BOOL fWantsPowerConservativeDeviceMotion;
}

@property (nonatomic) int mode;
@property (readonly, nonatomic) BOOL wantsPowerConservativeDeviceMotion;

- (CLDeviceMotionProperties *)initWithMode:(int)arg0 andPowerConservation:(BOOL)arg1;
- (BOOL)wantsPowerConservativeDeviceMotion;
- (NSString *)description;
- (void)setMode:(int)arg0;
- (int)mode;

@end

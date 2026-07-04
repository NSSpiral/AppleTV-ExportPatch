/* Runtime dump - MSPowerAssertionManager
 * Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSPowerAssertionManager : NSObject
{
    char _isAssertingPowerAssertion;
    char _isBusy;
    int _busyCount;
    int _UIBusyCount;
    unsigned int _assertionID;
}

@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;
@property (nonatomic) char isBusy;
@property (nonatomic) char isAssertingPowerAssertion;
@property (nonatomic) unsigned int assertionID;

+ (MSPowerAssertionManager *)sharedManager;

- (void)retainBusy;
- (void)releaseBusy;
- (int)busyCount;
- (void)setBusyCount:(int)arg0;
- (void)retainUIBusy;
- (void)releaseUIBusy;
- (int)UIBusyCount;
- (void)setUIBusyCount:(int)arg0;
- (void)_recomputePowerAssertion;
- (char)isAssertingPowerAssertion;
- (void)setIsAssertingPowerAssertion:(char)arg0;
- (void)_assertPowerAssertion;
- (void)_deassertPowerAssertion;
- (void)toggleAssertion;
- (unsigned int)assertionID;
- (void)setAssertionID:(unsigned int)arg0;
- (void)setIsBusy:(char)arg0;
- (char)isBusy;

@end

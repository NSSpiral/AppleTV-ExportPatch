/* Runtime dump - CPLPowerAssertion
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPowerAssertion : NSObject

+ (void)_retainAssertion;
+ (void)_doProtected:(id)arg0;
+ (void)_releaseAssertion;
+ (void)disableSleep;
+ (void)enableSleep;
+ (void)setHasEnoughPower:(char)arg0;
+ (CPLPowerAssertion *)powerAssertionStatus;

@end

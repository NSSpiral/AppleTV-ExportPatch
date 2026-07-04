/* Runtime dump - PSBrightnessController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSBrightnessController : NSObject
{
    id _isTracking;
    id _brightnessChangedExternally;
}

@property (copy, nonatomic) id isTracking;
@property (copy, nonatomic) id brightnessChangedExternally;

+ (PSBrightnessController *)sharedController;

- (char)isTracking;
- (void)setIsTracking:(char)arg0;
- (id)brightnessChangedExternally;
- (void)setBrightnessChangedExternally:(id)arg0;

@end

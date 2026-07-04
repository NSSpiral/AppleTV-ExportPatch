/* Runtime dump - ATVRentalExpiryUserNotification
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BREvent, BRReflectedImageControl, BRTextControl;
@interface ATVRentalExpiryUserNotification : BRControl
{
    BRControl * _dialogBox;
    BRReflectedImageControl * _imageControl;
    BRTextControl * _titleControl;
    <BRMediaAsset> * _asset;
}

+ (void)postExpiryNotificationForAsset:(NSSet *)arg0;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)_playAsset;
- (void)_setAsset:(NSSet *)arg0;
- (void)dealloc;
- (ATVRentalExpiryUserNotification *)init;

@end

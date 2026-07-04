/* Runtime dump - BRAlertController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BRAlignmentAdjustingTextControl, BREvent, BRHeaderControl, BRImageControl, BRTextControl;
@interface BRAlertController : BRController
{
    id _eventDelegate;
    SEL _eventSelector;
    BRHeaderControl * _header;
    int _type;
    BRTextControl * _primary;
    BRAlignmentAdjustingTextControl * _secondary;
    BRAlignmentAdjustingTextControl * _footer;
    BRImageControl * _image;
}

+ (NSObject *)alertOfType:(int)arg0 titled:(id)arg1 primaryText:(NSString *)arg2 secondaryText:(NSString *)arg3;
+ (NSError *)alertForError:(NSError *)arg0;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)wasPushed;
- (void)setPrimaryText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)setSecondaryText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (char)recreateOnReselect;
- (void)setPrimaryText:(NSString *)arg0;
- (BRAlertController *)initWithType:(int)arg0 titled:(id)arg1 primaryText:(NSString *)arg2 secondaryText:(NSString *)arg3;
- (void)setEventDelegate:(NSObject<BREventDelegate> *)arg0 selector:(SEL)arg1;
- (NSString *)primaryText;
- (NSObject *)_imageForType:(int)arg0;
- (void)setFooterText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (BRTextControl *)primaryTextControl;
- (BRTextControl *)secondaryTextControl;
- (BRTextControl *)footerTextControl;
- (NSString *)axTitleText;
- (NSString *)axSelectedItemText;
- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void)setFooterText:(NSString *)arg0;
- (NSString *)footerText;
- (NSString *)secondaryText;
- (void)setSecondaryText:(NSString *)arg0;

@end

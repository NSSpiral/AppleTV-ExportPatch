/* Runtime dump - BRAlertControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRAlignmentAdjustingTextControl, BRHeaderControl, BRHorizontalDividerControl, BRImageControl, BRReflectionControl, BRTextControl;
@interface BRAlertControl : BRControl
{
    BRHeaderControl * _header;
    BRHorizontalDividerControl * _divider;
    int _type;
    BRTextControl * _primary;
    BRAlignmentAdjustingTextControl * _secondary;
    BRImageControl * _image;
    BRReflectionControl * _reflection;
    char _shouldShowDivider;
}

@property (nonatomic) char shouldShowDivider;

+ (NSObject *)alertOfType:(int)arg0 titled:(id)arg1 primaryText:(NSString *)arg2 secondaryText:(NSString *)arg3;
+ (NSObject *)alertOfType:(int)arg0;
+ (NSError *)alertForError:(NSError *)arg0;

- (void)layoutSubcontrols;
- (void)setPrimaryText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)setSecondaryText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)controlWasActivated;
- (void)setPrimaryText:(NSString *)arg0;
- (void)setAttributedPrimaryText:(NSString *)arg0;
- (void)setAttributedSecondaryText:(NSString *)arg0;
- (BRAlertControl *)initWithType:(int)arg0 titled:(id)arg1 primaryText:(NSString *)arg2 secondaryText:(NSString *)arg3;
- (void)setShouldShowDivider:(char)arg0;
- (NSString *)primaryText;
- (NSObject *)_controlsForType:(int)arg0;
- (NSObject *)_primaryTextAttibutesForType:(int)arg0;
- (void)_layoutSubcontrolsForAlert;
- (void)_layoutSubcontrolsForInfo;
- (char)shouldShowDivider;
- (void)dealloc;
- (void)setImage:(BRImageControl *)arg0;
- (BRAlertControl *)init;
- (void)setTitle:(NSString *)arg0;
- (void)setType:(int)arg0;
- (NSString *)title;
- (BRImageControl *)image;
- (BRAlertControl *)initWithType:(int)arg0;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (NSString *)secondaryText;
- (void)setSecondaryText:(NSString *)arg0;

@end

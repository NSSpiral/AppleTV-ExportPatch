/* Runtime dump - UIAlertControllerDescriptor
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertControllerDescriptor : NSObject
{
    char _hasTitle;
    char _hasMessage;
}

@property char hasTitle;
@property char hasMessage;

- (void)setHasTitle:(char)arg0;
- (void)setHasMessage:(char)arg0;
- (char)hasTitle;
- (char)hasMessage;

@end

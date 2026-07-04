/* Runtime dump - UISearchBarTextFieldLabel
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchBarTextFieldLabel : UITextFieldLabel
{
    char _ignoresGeometryChanges;
}

@property (nonatomic) char ignoresGeometryChanges;

+ (NSDictionary *)_defaultAttributes;

- (void)setFrame:(struct CGRect)arg0;
- (char)ignoresGeometryChanges;
- (void)setIgnoresGeometryChanges:(char)arg0;

@end

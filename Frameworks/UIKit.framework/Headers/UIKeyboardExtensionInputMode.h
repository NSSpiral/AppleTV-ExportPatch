/* Runtime dump - UIKeyboardExtensionInputMode
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode
{
    NSExtension * _extension;
}

@property (retain, nonatomic) NSExtension * extension;

- (void)dealloc;
- (NSString *)hardwareLayout;
- (void)setExtension:(NSExtension *)arg0;
- (NSExtension *)extension;
- (char)isExtensionInputMode;
- (NSString *)identifierWithLayouts;
- (char)isDefaultRightToLeft;
- (char)isAllowedForTraits:(NSArray *)arg0;
- (char)defaultLayoutIsASCIICapable;
- (char)isDesiredForTraits:(NSArray *)arg0 forceASCIICapable:(char)arg1;
- (UIKeyboardExtensionInputMode *)initWithIdentifier:(NSString *)arg0;
- (NSBundle *)containingBundle;
- (NSString *)displayName;
- (NSArray *)normalizedIdentifierLevels;
- (NSString *)extendedDisplayName;
- (NSString *)containingBundleDisplayName;

@end

/* Runtime dump - SBUIPluginAppearanceContext
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIPluginAppearanceContext : NSObject
{
    unsigned int _uiEnvironment;
    char _hideOtherWindowsDuringAppearance;
}

@property (nonatomic) unsigned int uiEnvironment;
@property (nonatomic) char hideOtherWindowsDuringAppearance;

- (unsigned int)uiEnvironment;
- (void)setUiEnvironment:(unsigned int)arg0;
- (char)hideOtherWindowsDuringAppearance;
- (void)setHideOtherWindowsDuringAppearance:(char)arg0;

@end

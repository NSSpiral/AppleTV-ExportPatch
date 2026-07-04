/* Runtime dump - SBFBackdropLegibilitySettingsProvider
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFBackdropLegibilitySettingsProvider : NSObject <_UIBackdropViewObserver, SBFLegibilitySettingsProvider>
{
    _UIBackdropView * _backdropView;
    <SBFLegibilitySettingsProviderDelegate> * _delegate;
    _UILegibilitySettings * _legibilitySettings;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) <SBFLegibilitySettingsProviderDelegate> * delegate;
@property (readonly, retain, nonatomic) _UILegibilitySettings * legibilitySettings;

- (void)dealloc;
- (void)setDelegate:(<SBFLegibilitySettingsProviderDelegate> *)arg0;
- (<SBFLegibilitySettingsProviderDelegate> *)delegate;
- (_UILegibilitySettings *)legibilitySettings;
- (void)backdropViewDidChange:(_UIBackdropView *)arg0;
- (SBFBackdropLegibilitySettingsProvider *)initWithBackdropView:(_UIBackdropView *)arg0;

@end

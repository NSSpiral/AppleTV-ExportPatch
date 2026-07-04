/* Runtime dump - SFAirDropDiscoveryController
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropDiscoveryController : NSObject <UIActionSheetDelegate>
{
    id _delegate;
    char _isVisible;
    char _isLegacyDevice;
    char _isLegacyModeEnabled;
    char _isLegacyModeSettable;
    struct __SFOperation * _controller;
    id _actionSheetDelegate;
    UIActionSheet * _actionSheet;
    int _discoverableMode;
}

@property (readonly) char visible;
@property int discoverableMode;
@property (readonly) char legacyDevice;
@property char legacyModeEnabled;
@property (readonly) char legacyModeSettable;
@property (weak) <SFAirDropDiscoveryControllerDelegate> * delegate;
@property (weak) <SFAirDropDiscoveryActionSheetDelegate> * actionSheetDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<SFAirDropDiscoveryControllerDelegate> *)arg0;
- (SFAirDropDiscoveryController *)init;
- (<SFAirDropDiscoveryControllerDelegate> *)delegate;
- (void)actionSheet:(UIActionSheet *)arg0 clickedButtonAtIndex:(int)arg1;
- (void)actionSheet:(UIActionSheet *)arg0 willDismissWithButtonIndex:(int)arg1;
- (void)actionSheet:(UIActionSheet *)arg0 didDismissWithButtonIndex:(int)arg1;
- (char)isVisible;
- (int)operationDiscoverableModeToInteger:(id)arg0;
- (NSString *)discoverableModeToString:(int)arg0;
- (void)setDiscoverableMode:(int)arg0;
- (void)handleOperationCallback:(struct __SFOperation *)arg0 event:(long)arg1 withResults:(NSArray *)arg2;
- (char)isLegacyDevice;
- (char)isLegacyModeEnabled;
- (void)setLegacyModeEnabled:(char)arg0;
- (char)isLegacyModeSettable;
- (NSObject *)discoverableModeActionSheet;
- (int)discoverableMode;
- (<SFAirDropDiscoveryActionSheetDelegate> *)actionSheetDelegate;
- (void)setActionSheetDelegate:(<SFAirDropDiscoveryActionSheetDelegate> *)arg0;

@end

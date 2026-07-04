/* Runtime dump - RUINavBarSpinnerManager
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUINavBarSpinnerManager : NSObject
{
    NSMutableDictionary * _savedRecords;
    int _activityIndicatorViewStyle;
}

@property (nonatomic) int activityIndicatorViewStyle;

+ (RUINavBarSpinnerManager *)sharedSpinnerManager;

- (RUINavBarSpinnerManager *)init;
- (int)activityIndicatorViewStyle;
- (void)setActivityIndicatorViewStyle:(int)arg0;
- (void).cxx_destruct;
- (void)startAnimatingInNavItem:(NSObject *)arg0 forIdentifier:(NSString *)arg1;
- (void)stopAnimatingForIdentifier:(NSString *)arg0;
- (void)startAnimatingInNavItem:(NSObject *)arg0 title:(NSString *)arg1 forIdentifier:(NSString *)arg2 hideBackButton:(char)arg3;

@end

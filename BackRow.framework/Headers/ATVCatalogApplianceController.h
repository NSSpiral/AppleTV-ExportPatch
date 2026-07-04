/* Runtime dump - ATVCatalogApplianceController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@protocol BRAsynchronousControllerViewLoading;
@protocol BRSecureResource;

@class ATVMerchant, ATVURLDocument, BRAuthenticator, BRControl, BRController, BRMerchant, BRPanelControl;
@interface ATVCatalogApplianceController : BRController <BRSecureResource, BRAsynchronousControllerViewLoading>
{
    BRPanelControl * _contentContainer;
    id _storeObject;
    BRControl * _catalogControl;
    char _controllerToSwapOnActivate;
    long _state;
    NSTimer * _timer;
    char _isDirty;
    char _isVolatile;
    char _autoPlay;
    BRMerchant * _merchant;
    Class _catalogAgent;
    ATVURLDocument * _document;
    char requiresAuthentication;
    char _shouldStartWaitPromptTimerOnActivate;
    char _loadOnPush;
    int _viewAvailability;
    NSDictionary * _titleAttributes;
    id _networkConfigurationObservingToken;
    NSString * _customAccessibilityLabel;
}

@property (nonatomic) char autoPlay;
@property (nonatomic) char requiresAuthentication;
@property (nonatomic) char shouldStartWaitPromptTimerOnActivate;
@property (retain, nonatomic) BRMerchant * merchant;
@property (retain, nonatomic) NSDictionary * titleAttributes;
@property char loadOnPush;
@property (nonatomic) id networkConfigurationObservingToken;
@property (nonatomic) int viewAvailability;
@property (nonatomic) NSString * customAccessibilityLabel;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVCatalogApplianceController *)controlWithMerchantLikeControl:(BRControl *)arg0;
+ (void)initialize;
+ (UIControl *)control;

- (void)layoutSubcontrols;
- (BRMerchant *)merchant;
- (BRAuthenticator *)secureResourceAuthenticator;
- (void)wasPushed;
- (void)wasPopped;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)setMerchant:(BRMerchant *)arg0;
- (void)setStoreObject:(NSObject *)arg0 fromMerchant:(ATVMerchant *)arg1;
- (void)setTitleAttributes:(NSDictionary *)arg0;
- (NSDictionary *)titleAttributes;
- (void)markAsDirty;
- (char)isNetworkDependent;
- (int)viewAvailability;
- (char)showsHeader;
- (void)setCatalogAgent:(Class)arg0;
- (void)addControls;
- (NSString *)networkConfigurationObservingToken;
- (void)_enterWaitingForControlState;
- (char)shouldShowWaitContent;
- (void)_showWaitTimer:(NSObject *)arg0;
- (void)refreshDirtyPage;
- (void)_swapInNewController:(BRController *)arg0;
- (void)_updateStateForAction:(int)arg0;
- (NSObject *)storeObject;
- (void)setStoreObject:(NSObject *)arg0 changeState:(char)arg1;
- (void)_handleWindowMaxBoundsChanged;
- (id)storeMerchant;
- (char)recreateOnReselect;
- (void)setRequiresAuthentication:(char)arg0;
- (char)shouldStartWaitPromptTimerOnActivate;
- (void)setShouldStartWaitPromptTimerOnActivate:(char)arg0;
- (void)setViewAvailability:(int)arg0;
- (char)loadOnPush;
- (void)setLoadOnPush:(char)arg0;
- (void)setNetworkConfigurationObservingToken:(NSString *)arg0;
- (NSString *)customAccessibilityLabel;
- (void)setCustomAccessibilityLabel:(NSString *)arg0;
- (void)_controlCreated:(id)arg0;
- (void)_controlNeedsAuth:(id)arg0;
- (BRPanelControl *)contentContainer;
- (BRControl *)catalogControl;
- (NSObject *)waitContent;
- (NSObject *)errorContent;
- (void)updateContent:(NSObject *)arg0;
- (void)willEnterCompleteState;
- (void)didEnterErrorState;
- (char)shouldAllowTransitionOnSwap;
- (char)shouldAllowControllerContent;
- (void)_enterWaitingForPushState;
- (void)_enterWaitingForAuthState;
- (void)_installCatalogControl;
- (void)_enterCompleteState;
- (void)_enterWaitingForInitialState;
- (void)_enterErrorState;
- (void)_handleWaitingForControlAction:(int)arg0;
- (char)requiresAuthentication;
- (void)dealloc;
- (ATVCatalogApplianceController *)init;
- (NSString *)accessibilityLabel;
- (void)setAccessibilityLabel:(NSString *)arg0;
- (void)_setState:(int)arg0;
- (char)autoPlay;
- (void)setAutoPlay:(char)arg0;

@end

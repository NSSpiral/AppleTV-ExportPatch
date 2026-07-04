/* Runtime dump - CNContactPicker
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNContactPicker : UIViewController <CNContactPickerContentDelegate>
{
    char _ignoreViewWillBePresented;
    char _hidesSearchableSources;
    char _allowsEditing;
    char _allowsBlocking;
    char _allowsCancel;
    char _allowsOnlyPhoneActions;
    char _allowsOnlyFaceTimeActions;
    char _allowsFaceTime;
    char _allowsSounds;
    char _hidesPromptInLandscape;
    char _defaultViewControllerVisible;
    NSArray * _displayedKeys;
    <CNContactPickerDelegate> * _delegate;
    NSPredicate * _predicateForEnablingContact;
    NSPredicate * _predicateForSelectionOfContact;
    NSPredicate * _predicateForSelectionOfProperty;
    int _behavior;
    NSString * _prompt;
    NSString * _bannerTitle;
    NSString * _bannerValue;
    UIViewController<CNContactPickerContentViewController> * _viewController;
}

@property (copy, nonatomic) NSArray * displayedKeys;
@property (weak, nonatomic) <CNContactPickerDelegate> * delegate;
@property (copy, nonatomic) NSPredicate * predicateForEnablingContact;
@property (copy, nonatomic) NSPredicate * predicateForSelectionOfContact;
@property (copy, nonatomic) NSPredicate * predicateForSelectionOfProperty;
@property int behavior;
@property (nonatomic) char hidesSearchableSources;
@property (nonatomic) char allowsEditing;
@property (nonatomic) char allowsBlocking;
@property (nonatomic) char allowsCancel;
@property (nonatomic) char allowsOnlyPhoneActions;
@property (nonatomic) char allowsOnlyFaceTimeActions;
@property (nonatomic) char allowsFaceTime;
@property (nonatomic) char allowsSounds;
@property (copy, nonatomic) NSString * prompt;
@property (nonatomic) char hidesPromptInLandscape;
@property (copy, nonatomic) NSString * bannerTitle;
@property (copy, nonatomic) NSString * bannerValue;
@property (readonly) char defaultViewControllerVisible;
@property (retain, nonatomic) UIViewController<CNContactPickerContentViewController> * viewController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (<ABStyleProvider> *)styleProvider;
- (char)hidesSearchableSources;
- (void)setHidesSearchableSources:(char)arg0;
- (void)setPredicateForSelectionOfContact:(NSPredicate *)arg0;
- (void)setPredicateForSelectionOfProperty:(NSPredicate *)arg0;
- (void)_prepareViewController;
- (void)_viewWillBePresented;
- (void)_setupViewController;
- (NSObject *)_propertiesSource;
- (void)_checkConsistencyFromProperties:(NSDictionary *)arg0;
- (NSObject *)_pickerPresentedViewController;
- (void)closePickerIfNeeded;
- (void)pickerDidSelectContact:(id)arg0 propertyKey:(NSString *)arg1 propertyIdentifier:(int)arg2;
- (void)pickerDidCancel;
- (void)popToDefaultViewController:(char)arg0;
- (NSArray *)displayedKeys;
- (void)setDisplayedKeys:(NSArray *)arg0;
- (NSPredicate *)predicateForEnablingContact;
- (void)setPredicateForEnablingContact:(NSPredicate *)arg0;
- (NSPredicate *)predicateForSelectionOfContact;
- (NSPredicate *)predicateForSelectionOfProperty;
- (char)allowsBlocking;
- (void)setAllowsBlocking:(char)arg0;
- (char)allowsCancel;
- (char)allowsOnlyPhoneActions;
- (void)setAllowsOnlyPhoneActions:(char)arg0;
- (char)allowsOnlyFaceTimeActions;
- (void)setAllowsOnlyFaceTimeActions:(char)arg0;
- (char)allowsFaceTime;
- (void)setAllowsFaceTime:(char)arg0;
- (char)allowsSounds;
- (void)setAllowsSounds:(char)arg0;
- (char)hidesPromptInLandscape;
- (void)setHidesPromptInLandscape:(char)arg0;
- (NSString *)bannerTitle;
- (void)setBannerTitle:(NSString *)arg0;
- (NSString *)bannerValue;
- (void)setBannerValue:(NSString *)arg0;
- (char)isDefaultViewControllerVisible;
- (void)dealloc;
- (void)setDelegate:(<CNContactPickerDelegate> *)arg0;
- (<CNContactPickerDelegate> *)delegate;
- (NSString *)prompt;
- (void)setPrompt:(NSString *)arg0;
- (CNContactPicker *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)_endDelayingPresentation;
- (void)setViewController:(UIViewController<CNContactPickerContentViewController> *)arg0;
- (UIViewController<CNContactPickerContentViewController> *)viewController;
- (char)_isDelayingPresentation;
- (char)allowsEditing;
- (void)setAllowsEditing:(char)arg0;
- (void)_setViewController:(BRController *)arg0;
- (void).cxx_destruct;
- (void)setAllowsCancel:(char)arg0;
- (int)behavior;
- (void *)_addressBook;
- (void)setBehavior:(int)arg0;

@end

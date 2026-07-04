/* Runtime dump - MFModernAddressAtom
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFModernAddressAtom : UIControl <MFModernAtomViewResembling>
{
    <MFModernAddressAtomDelegate> * _delegate;
    MFModernAtomView * _atomView;
    void * _person;
    NSString * _fullAddress;
    NSString * _displayString;
    unsigned int _maxWidth;
    int _identifier;
    id _addressIsPhoneNumber;
    id _updatedABPerson;
    id _isDisplayStringFromAddressBook;
    void * _addressBook;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char isPrimaryAddressAtom;
@property (nonatomic) char hidesVIPIndicator;
@property (nonatomic) char separatorHidden;
@property (nonatomic) char separatorIsLeftAligned;
@property (nonatomic) float scale;
@property (nonatomic) int separatorStyle;
@property (nonatomic) unsigned int presentationOptions;
@property (readonly, nonatomic) struct CGPoint baselinePoint;
@property (readonly, nonatomic) struct UIEdgeInsets edgeInsets;
@property (retain, nonatomic) UIFont * titleFont;

+ (NSString *)copyDisplayStringForAddress:(NSString *)arg0 usingAddressBook:(void *)arg1 useAbbreviatedName:(char)arg2;

- (void *)ABPerson;
- (unsigned int)presentationOptions;
- (void)performBuildInAnimationFromTextColor:(UIColor *)arg0 withDuration:(double)arg1;
- (void)setIsPrimaryAddressAtom:(char)arg0;
- (void)setPresentationOptions:(unsigned int)arg0;
- (void)_updateDisplayStringIncludingABPerson:(char)arg0;
- (void)_displayStringDidChange;
- (NSString *)presentationOptionsDescription;
- (void)_updateABPerson;
- (MFModernAddressAtom *)initWithAddress:(NSString *)arg0 presentationOptions:(unsigned int)arg1 isPhoneNumber:(char)arg2 maxWidth:(float)arg3 addressBook:(void *)arg4;
- (void)addressBookDidChange:(NSDictionary *)arg0;
- (void)setAtomFont:(UIFont *)arg0;
- (char)isDisplayStringFromAddressBook;
- (int)ABPropertyType;
- (NSString *)unmodifiedAddressString;
- (void)setOpaque:(char)arg0;
- (void)dealloc;
- (void)setDelegate:(<MFModernAddressAtomDelegate> *)arg0;
- (char)respondsToSelector:(SEL)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (NSString *)description;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)displayString;
- (int)identifier;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)setScale:(float)arg0;
- (void)setHighlighted:(char)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (struct CGRect)_highlightBounds;
- (struct CGPoint)baselinePoint;
- (NSString *)emailAddress;
- (void)setAddress:(NSString *)arg0;
- (void)setMaxWidth:(unsigned int)arg0;

@end

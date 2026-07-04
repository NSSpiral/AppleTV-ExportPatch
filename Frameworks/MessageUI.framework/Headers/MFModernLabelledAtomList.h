/* Runtime dump - MFModernLabelledAtomList
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFModernLabelledAtomList : UIView <MFPassthroughViewProvider, MFModernAddressAtomDelegate>
{
    UILabel * _label;
    void * _addressBook;
    <MFModernLabelledAtomListDelegate> * _delegate;
    NSMutableArray * _addressAtoms;
    NSString * _title;
    UIColor * _labelTextColor;
    NSDictionary * _recipients;
    float _firstLineWidth;
    char _usePadDisplayStyle;
    char _labelVisible;
    id _needsReflow;
    id _isChangingFrame;
    UIView * _baselineView;
    char _primary;
    unsigned int _numberOfRows;
    float _lineSpacing;
}

@property (readonly, nonatomic) UILabel * label;
@property (retain, nonatomic) UIColor * labelTextColor;
@property (nonatomic) char usePadDisplayStyle;
@property (nonatomic) char labelVisible;
@property (nonatomic) char primary;
@property (nonatomic) float lineSpacing;
@property (readonly, nonatomic) unsigned int numberOfRows;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MFModernLabelledAtomList *)defaultLabelTextColor;
+ (MFModernLabelledAtomList *)defaultLabelFont;
+ (UIFont *)primaryLabelFont;
+ (float)spaceBetweenColonAndFirstAtomNaturalEdge;
+ (float)atomLineHeight;

- (void)setLabelTextColor:(UIColor *)arg0;
- (char)usePadDisplayStyle;
- (void)addressAtom:(MFModernAddressAtom *)arg0 displayStringDidChange:(NSDictionary *)arg1;
- (void)addressBookDidChange:(NSDictionary *)arg0;
- (void)_reflow;
- (void)setAddressAtomTarget:(NSObject *)arg0 action:(SEL)arg1;
- (char)primary;
- (void)setFirstLineWidth:(float)arg0 reflow:(char)arg1;
- (void)_setNeedsReflow;
- (NSMutableArray *)addressAtoms;
- (char)isLabelVisible;
- (struct CGPoint)baselinePointForRow:(unsigned int)arg0;
- (void)setAddressAtomSeparatorStyle:(int)arg0;
- (MFModernLabelledAtomList *)initWithLabel:(UILabel *)arg0 title:(NSString *)arg1 totalWidth:(float)arg2 firstLineWidth:(float)arg3 addresses:(struct __CFArray * *)arg4 arePhoneNumbers:(id)arg5 atomPresentationOptions:(unsigned int)arg6 addressBook:(void *)arg7 completionBlock:(id /* block */)arg8;
- (void)setFirstLineWidth:(float)arg0;
- (void)enumerateAddressAtomsUsingBlock:(id /* block */)arg0;
- (void)setAddressAtomScale:(float)arg0;
- (NSString *)labelText;
- (void)setLabelVisible:(char)arg0;
- (void)updateAtomsForVIP;
- (NSArray *)atomDisplayStrings;
- (void)setAtomAlpha:(float)arg0;
- (void)crossFadeLabelVisibility:(char)arg0 atomSeparatorStyle:(int)arg1 animationDuration:(double)arg2;
- (UIColor *)labelTextColor;
- (void)setUsePadDisplayStyle:(char)arg0;
- (void)setOpaque:(char)arg0;
- (void)dealloc;
- (void)setDelegate:(<MFModernLabelledAtomListDelegate> *)arg0;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (NSString *)title;
- (unsigned int)numberOfRows;
- (UILabel *)label;
- (float)lineSpacing;
- (void)setLineSpacing:(float)arg0;
- (NSArray *)passthroughViews;
- (struct CGRect)labelFrame;
- (void)setPrimary:(char)arg0;

@end

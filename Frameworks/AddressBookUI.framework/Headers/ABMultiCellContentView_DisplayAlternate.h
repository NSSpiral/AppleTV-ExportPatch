/* Runtime dump - ABMultiCellContentView_DisplayAlternate
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMultiCellContentView_DisplayAlternate : ABMultiCellContentView_Rows
{
    UILabel * _displayLabel;
}

@property (readonly, nonatomic) NSString * displayText;

+ (struct CGSize)layoutSubviewsForView:(NSObject *)arg0 usingSize:(struct CGSize)arg1 propertyGroup:(ABAbstractPropertyGroup *)arg2 info:(NSDictionary *)arg3 styleProvider:(NSObject *)arg4 whenEditing:(char)arg5;
+ (struct CGSize)layoutSubviewsForView:(NSObject *)arg0 usingSize:(struct CGSize)arg1 propertyGroup:(ABAbstractPropertyGroup *)arg2 info:(NSDictionary *)arg3 styleProvider:(NSObject *)arg4 whenEditing:(char)arg5 includeRows:(char)arg6;
+ (struct CGRect)displayLabelFrameForValueViewFrame:(NSObject *)arg0 styleProvider:(SEL)arg1 whenEditing:(struct CGRect)arg2;
+ (ABMultiCellContentView_DisplayAlternate *)displayLabelForReuse;
+ (void)setupDisplayLabel:(NSString *)arg0 withPropertyGroup:(ABAbstractPropertyGroup *)arg1 styleProvider:(NSObject *)arg2;
+ (void)numberOfLines:(int *)arg0 lineBreakMode:(int *)arg1 forDisplayLabelWithPropertyGroup:(ABAbstractPropertyGroup *)arg2 styleProvider:(NSObject *)arg3;

- (void)reloadFromModel;
- (void)setAbCellStyle:(int)arg0;
- (void)updateSubviewsForNewStateAnimated:(char)arg0;
- (void)reloadIncludingRows:(char)arg0 includingDisplayView:(char)arg1;
- (void)reloadFromModelIncludingRows:(char)arg0;
- (void)reloadDisplayText;
- (struct CGRect)valueTextRect;
- (NSString *)displayText;
- (void)reload;
- (void)setEditing:(char)arg0 animated:(char)arg1;

@end

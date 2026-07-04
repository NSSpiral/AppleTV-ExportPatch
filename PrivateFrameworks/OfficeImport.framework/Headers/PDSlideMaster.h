/* Runtime dump - PDSlideMaster
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDSlideMaster : PDSlideBase
{
    NSMutableArray * mSlideLayouts;
    OADTheme * mTheme;
    OADColorMap * mColorMap;
    OADTextListStyle * mTitleTextStyle;
    OADTextListStyle * mBodyTextStyle;
    OADTextListStyle * mOtherTextStyle;
    char mHeaderPlaceholderIsVisible;
    char mFooterPlaceholderIsVisible;
    char mSlideNumberPlaceholderIsVisible;
    char mDateTimePlaceholderIsVisible;
}

@property (retain, nonatomic) NSMutableArray * slideLayouts;
@property (nonatomic) char headerPlaceholderIsVisible;
@property (nonatomic) char footerPlaceholderIsVisible;
@property (nonatomic) char slideNumberPlaceholderIsVisible;
@property (nonatomic) char dateTimePlaceholderIsVisible;

- (void)dealloc;
- (PDSlideMaster *)init;
- (TPTheme *)theme;
- (OADColorScheme *)colorScheme;
- (OADStyleMatrix *)styleMatrix;
- (OADColorMap *)colorMap;
- (id)defaultTheme;
- (OADFontScheme *)fontScheme;
- (id)parentSlideBase;
- (id)drawingTheme;
- (void)doneWithContent;
- (void)setTheme:(TSSTheme *)arg0;
- (void)setHeaderPlaceholderIsVisible:(char)arg0;
- (void)setFooterPlaceholderIsVisible:(char)arg0;
- (void)setDateTimePlaceholderIsVisible:(char)arg0;
- (void)setSlideNumberPlaceholderIsVisible:(char)arg0;
- (NSObject *)slideLayoutAtIndex:(unsigned int)arg0;
- (NSObject *)addSlideLayout;
- (NSObject *)slideLayoutOfType:(int)arg0;
- (void)setTitleTextStyle:(NSObject *)arg0;
- (void)setBodyTextStyle:(TSWPParagraphStyle *)arg0;
- (void)setOtherTextStyle:(NSObject *)arg0;
- (void)setSlideLayouts:(NSMutableArray *)arg0;
- (unsigned int)slideLayoutCount;
- (void)addSlideLayout:(NSObject *)arg0;
- (NSObject *)titleTextStyle;
- (TSWPParagraphStyle *)bodyTextStyle;
- (id)parentTextStyleForTables;
- (NSObject *)parentTextStyleForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 defaultTextListStyle:(NSObject *)arg2 overrideIndex:(char)arg3;
- (NSObject *)parentTextBodyPropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (NSObject *)parentShapePropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (NSObject *)masterGraphicForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (NSObject *)placeholderWithType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (char)hasMappableSlideNumberShape;
- (NSObject *)otherTextStyle;
- (PDSlideMaster *)initWithDefaultsAndTheme:(id)arg0;
- (NSMutableArray *)slideLayouts;
- (char)headerPlaceholderIsVisible;
- (char)footerPlaceholderIsVisible;
- (char)slideNumberPlaceholderIsVisible;
- (char)dateTimePlaceholderIsVisible;

@end

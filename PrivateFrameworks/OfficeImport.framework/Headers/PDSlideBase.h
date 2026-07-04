/* Runtime dump - PDSlideBase
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDSlideBase : NSObject
{
    NSString * mName;
    NSArray * mDrawables;
    OADBackground * mBackground;
    PDAnimation * mAnimation;
    PDTransition * mTransition;
    OADTableStyle * mDefaultTableStyle;
    id mIsHidden;
    id mIsDoneWithContent;
    char mCachedSlideNumberShape;
    OADShape * mSlideNumberShape;
    char mCachedSlideNumberPlaceholder;
    OADShape * mSlideNumberPlaceholder;
}

@property (readonly, nonatomic) OADShape * slideNumberShape;
@property (readonly, nonatomic) OADShape * slideNumberPlaceholder;
@property (readonly, nonatomic) char hasMappableSlideNumberShape;

+ (int)inheritedPlaceholderType:(int)arg0;

- (void)dealloc;
- (char)isHidden;
- (PDSlideBase *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (CAAnimation *)animation;
- (void)setTransition:(NSString *)arg0;
- (MPTransition *)transition;
- (void)setIsHidden:(char)arg0;
- (UIImage *)background;
- (void)setBackground:(UISearchBarBackground *)arg0;
- (OADColorScheme *)colorScheme;
- (OADStyleMatrix *)styleMatrix;
- (OADColorMap *)colorMap;
- (NSArray *)drawables;
- (id)defaultTheme;
- (OADFontScheme *)fontScheme;
- (id)parentSlideBase;
- (id)drawingTheme;
- (void)doneWithContent;
- (NSObject *)defaultTableStyle;
- (void)setDefaultTableStyle:(NSObject *)arg0;
- (void)addSlideNumberPlaceholder:(GQDBGSlideNumberPlaceholder *)arg0;
- (id)parentTextStyleForTables;
- (NSObject *)parentTextStyleForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 defaultTextListStyle:(NSObject *)arg2 overrideIndex:(char)arg3;
- (NSObject *)parentTextBodyPropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (NSObject *)parentShapePropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (NSObject *)masterGraphicForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (void)setInheritedTextStyle:(NSObject *)arg0 placeholderType:(int)arg1 defaultTextListStyle:(NSObject *)arg2;
- (NSObject *)placeholderWithType:(int)arg0 placeholderTypeIndex:(int)arg1 useBaseTypeMatch:(char)arg2 overrideIndex:(char)arg3;
- (id)placeholders;
- (void)setPpt9AnimationDataForCacheItem:(NSObject *)arg0 order:(int)arg1 state:(NSObject *)arg2;
- (void)setDrawables:(NSArray *)arg0 defaultTextListStyle:(NSObject *)arg1;
- (NSObject *)placeholderWithType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (OADShape *)slideNumberShape;
- (OADShape *)slideNumberPlaceholder;
- (char)hasMappableSlideNumberShape;
- (char)hasPpt10Animations;
- (char)hasPpt9Animations;
- (void)generatePpt9Animations:(id)arg0;

@end

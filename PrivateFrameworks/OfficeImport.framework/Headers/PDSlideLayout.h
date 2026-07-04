/* Runtime dump - PDSlideLayout
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDSlideLayout : PDSlideChild
{
    int mSlideLayoutType;
    PDSlideMaster * mSlideMaster;
}

- (void)dealloc;
- (UIImage *)background;
- (id)defaultTheme;
- (PDSlideMaster *)slideMaster;
- (id)parentSlideBase;
- (void)doneWithContent;
- (int)slideLayoutType;
- (void)setSlideMaster:(PDSlideMaster *)arg0;
- (PDSlideLayout *)initWithSlideMaster:(PDSlideMaster *)arg0;
- (void)setSlideLayoutType:(int)arg0;
- (id)parentTextStyleForTables;
- (NSObject *)parentTextStyleForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 defaultTextListStyle:(NSObject *)arg2 overrideIndex:(char)arg3;
- (NSObject *)parentTextBodyPropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (NSObject *)parentShapePropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (NSObject *)masterGraphicForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (char)hasMappableSlideNumberShape;

@end

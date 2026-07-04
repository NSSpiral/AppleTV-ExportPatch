/* Runtime dump - PDSlide
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDSlide : PDSlideChild
{
    PDSlideLayout * mSlideLayout;
    NSMutableArray * mComments;
    PDNotesSlide * mNotesSlide;
}

- (void)dealloc;
- (UIImage *)background;
- (id)defaultTheme;
- (NSObject *)slideLayout;
- (id)parentSlideBase;
- (void)doneWithContent;
- (unsigned int)commentCount;
- (void)setSlideLayout:(NSObject *)arg0;
- (PXNotesSlide *)notesSlide;
- (void)setNotesSlide:(PXNotesSlide *)arg0;
- (NSObject *)commentAtIndex:(unsigned int)arg0;
- (id)parentTextStyleForTables;
- (NSObject *)parentTextStyleForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 defaultTextListStyle:(NSObject *)arg2 overrideIndex:(char)arg3;
- (NSObject *)parentTextBodyPropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (NSObject *)parentShapePropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (NSObject *)masterGraphicForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (void)setInheritedTextStyle:(NSObject *)arg0 placeholderType:(int)arg1 defaultTextListStyle:(NSObject *)arg2;
- (char)hasMappableSlideNumberShape;
- (void)addComment:(MSASComment *)arg0;

@end

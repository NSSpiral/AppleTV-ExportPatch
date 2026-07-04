/* Runtime dump - PDNotesSlide
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDNotesSlide : PDSlideChild
{
    PDNotesMaster * mNotesMaster;
}

- (void)dealloc;
- (PDNotesSlide *)init;
- (id)parentSlideBase;
- (void)doneWithContent;
- (PXNotesMaster *)notesMaster;
- (NSObject *)masterPlaceholderOfType:(int)arg0;
- (void)setNotesMaster:(PXNotesMaster *)arg0;
- (NSObject *)parentTextStyleForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 defaultTextListStyle:(NSObject *)arg2 overrideIndex:(char)arg3;
- (NSObject *)parentTextBodyPropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (NSObject *)parentShapePropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (NSObject *)masterGraphicForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;

@end

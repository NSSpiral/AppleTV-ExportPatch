/* Runtime dump - PDNotesMaster
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDNotesMaster : PDSlideBase
{
    OADTheme * mTheme;
    OADColorMap * mColorMap;
    OADTextListStyle * mNotesTextStyle;
}

- (void)dealloc;
- (PDNotesMaster *)init;
- (NSString *)description;
- (TPTheme *)theme;
- (OADColorScheme *)colorScheme;
- (OADStyleMatrix *)styleMatrix;
- (OADColorMap *)colorMap;
- (OADFontScheme *)fontScheme;
- (id)parentSlideBase;
- (id)drawingTheme;
- (void)doneWithContent;
- (NSObject *)notesTextStyle;
- (id)parentTextStyleForTables;
- (NSObject *)parentTextStyleForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 defaultTextListStyle:(NSObject *)arg2 overrideIndex:(char)arg3;
- (NSObject *)parentTextBodyPropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (NSObject *)parentShapePropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;
- (NSObject *)masterGraphicForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(char)arg2;

@end

/* Runtime dump - WBParagraph
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBParagraph : NSObject

+ (int)blockType;
+ (void)readRunsFor:(id)arg0 from:(NSObject *)arg1 textRun:(struct WrdParagraphTextRun *)arg2;
+ (void)readFrom:(NSObject *)arg0 textRun:(struct WrdParagraphTextRun *)arg1 paragraph:(struct WrdParagraphProperties *)arg2;
+ (void)readCharacterRunsFor:(id)arg0 from:(NSObject *)arg1 readState:(struct WBParagraphReadState *)arg2;
+ (void)readNoteFor:(id)arg0 from:(NSObject *)arg1 readState:(struct WBParagraphReadState *)arg2;
+ (void)readAnnotationFor:(id)arg0 from:(NSObject *)arg1 readState:(struct WBParagraphReadState *)arg2;
+ (void)readFieldMarkerFor:(id)arg0 from:(NSObject *)arg1 readState:(struct WBParagraphReadState *)arg2;
+ (void)readBookmarkFor:(id)arg0 from:(NSObject *)arg1 readState:(struct WBParagraphReadState *)arg2;
+ (void)readAnnotationBookmarkFor:(id)arg0 from:(NSObject *)arg1 readState:(struct WBParagraphReadState *)arg2;
+ (void)checkForNoteFrom:(NSObject *)arg0 footnote:(char)arg1 runEnd:(int *)arg2 readState:(struct WBParagraphReadState *)arg3;
+ (void)checkForAnnotationFrom:(NSObject *)arg0 runEnd:(int *)arg1 readState:(struct WBParagraphReadState *)arg2;
+ (void)checkForAnnotationBookmarkFrom:(NSObject *)arg0 runEnd:(int *)arg1 readState:(struct WBParagraphReadState *)arg2;
+ (void)check:(WebPluginContainerCheck *)arg0 forFieldMarkerFrom:(NSObject *)arg1 runEnd:(int *)arg2 readState:(struct WBParagraphReadState *)arg3;
+ (void)checkForBookmarkFrom:(NSObject *)arg0 runEnd:(int *)arg1 readState:(struct WBParagraphReadState *)arg2;
+ (void)readSpecialCharactersFor:(id)arg0 from:(NSObject *)arg1 textRun:(struct WrdCharacterTextRun *)arg2;
+ (void)readSymbolsFor:(id)arg0 from:(NSObject *)arg1 textRun:(struct WrdCharacterTextRun *)arg2;
+ (BOOL)isCPAnnotationRangeEnd:(int)arg0 bookmarkTable:(struct WrdBookmarkTable *)arg1;
+ (void)readOfficeArtFor:(id)arg0 from:(NSObject *)arg1 at:(int)arg2 textRun:(struct WrdCharacterTextRun *)arg3;
+ (void)readPictureFor:(id)arg0 from:(NSObject *)arg1 at:(int)arg2 textRun:(struct WrdCharacterTextRun *)arg3;
+ (void)readSpecialCharacterFor:(id)arg0 from:(NSObject *)arg1 at:(int)arg2 textRun:(struct WrdCharacterTextRun *)arg3;

@end

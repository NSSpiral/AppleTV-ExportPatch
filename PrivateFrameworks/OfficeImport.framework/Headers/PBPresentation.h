/* Runtime dump - PBPresentation
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBPresentation : NSObject

+ (void)setFontEntites:(id)arg0 environmentHolder:(id)arg1;
+ (void)setDefaultTextStyleWithEnvironmentHolder:(id)arg0 state:(NSObject *)arg1;
+ (PBPresentation *)drawingGroupHolderWithDocumentContainerHolder:(id)arg0;
+ (void)readMasterAndLayouts:(id)arg0 masterLayoutMap:(NSObject *)arg1 state:(NSObject *)arg2;
+ (void)readSlides:(id)arg0 masterLayoutMap:(NSObject *)arg1 slideIdMap:(NSObject *)arg2 state:(NSObject *)arg3 isThumbnail:(char)arg4 delegate:(NSObject *)arg5;
+ (void)readFrom:(struct PptBinaryReader *)arg0 to:(/* block */ id * *)arg1 cancel:(/* block */ id)arg2 asThumbnail:(struct __sFILE *)arg3 delegate:(struct SsrwOORootStorage)arg4;
+ (void)addHeadersFootersToDocumentContainer:(NSObject *)arg0 instance:(int)arg1;
+ (void)readDefaultTextListStyle:(NSObject *)arg0 fromDocumentContainer:(NSObject *)arg1 state:(NSObject *)arg2;
+ (void)scanSlideListForLayoutTypes:(NSArray *)arg0 slideListHolder:(id)arg1 masterLayoutMap:(NSObject *)arg2;
+ (void)readCommentAuthorsFrom:(NSObject *)arg0 state:(NSObject *)arg1;
+ (void)processLayoutTypesFromDocument:(NSObject *)arg0 masterLayoutMap:(NSObject *)arg1 state:(NSObject *)arg2;
+ (void)readNotes:(id)arg0 masterLayoutMap:(NSObject *)arg1 slideIdMap:(NSObject *)arg2 state:(NSObject *)arg3;

@end

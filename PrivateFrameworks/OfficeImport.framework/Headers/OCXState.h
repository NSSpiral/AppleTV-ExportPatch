/* Runtime dump - OCXState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCXState : NSObject
{
    int mXMLFormat;
    CXNamespace * mOCXRelationshipsNamespace;
    CXNamespace * mOCXDrawingNamespace;
}

@property (readonly, nonatomic) int xmlFormat;
@property (retain, nonatomic) CXNamespace * OCXRelationshipsNamespace;
@property (retain, nonatomic) CXNamespace * OCXDrawingNamespace;
@property (readonly, copy, nonatomic) NSString * OCXThemeRelationshipType;

- (void)dealloc;
- (OCXState *)init;
- (int)xmlFormat;
- (void)setupNSForXMLFormat:(int)arg0;
- (void)setOCXRelationshipsNamespace:(id)arg0;
- (void)setOCXDrawingNamespace:(id)arg0;
- (NSObject *)OCXStylesRelationshipType;
- (NSObject *)OCXSharedStringsRelationshipType;
- (NSObject *)OCXDrawingRelationshipType;
- (NSObject *)OCXEndnotesRelationshipType;
- (NSObject *)OCXFontTableRelationshipType;
- (NSObject *)OCXFootnotesRelationshipType;
- (NSObject *)OCXCommentsRelationshipType;
- (NSObject *)OCXPivotTableRelationshipType;
- (NSObject *)OCXTableRelationshipType;
- (NSObject *)OCXSlideLayoutRelationshipType;
- (NSObject *)OCXNotesSlideRelationshipType;
- (NSObject *)OCXCommentAuthorsRelationshipType;
- (NSObject *)OCXCustomXmlRelationshipType;
- (NSObject *)OCXLegacyDocTextInfoRelationshipType;
- (NSString *)OCXThemeRelationshipType;
- (NSObject *)OCXThemeOverrideRelationshipType;
- (NSObject *)OCXVmlDrawingRelationshipType;
- (NSObject *)OCXNotesMasterRelationshipType;
- (NSObject *)OCXNumberingRelationshipType;
- (NSObject *)OCXPackagePresPropsRelationshipType;
- (NSObject *)OCXPackageViewPropsRelationshipType;
- (NSObject *)OCXTableStylesRelationshipType;
- (NSObject *)OCXSettingsRelationshipType;
- (CXNamespace *)OCXRelationshipsNamespace;
- (CXNamespace *)OCXDrawingNamespace;
- (void)setXmlFormat:(int)arg0;

@end

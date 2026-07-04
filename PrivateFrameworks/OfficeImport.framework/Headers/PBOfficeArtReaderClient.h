/* Runtime dump - PBOfficeArtReaderClient
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBOfficeArtReaderClient : NSObject <OABReaderClient>

+ (char)tablesAreAllowed;
+ (void)readClientDataFromShape:(ESDObject *)arg0 toGraphic:(OADGraphic *)arg1 state:(OABReaderState *)arg2;
+ (void)readClientDataFromGroup:(ESDContainer *)arg0 toGroup:(OADGroup *)arg1 state:(OABReaderState *)arg2;
+ (void)readClientDataFromTableCell:(ESDObject *)arg0 toTableCell:(OADTableCell *)arg1 state:(OABReaderState *)arg2;
+ (char)escherIsFullySupported;
+ (void)readClientAnchorFromContainer:(NSObject *)arg0 toDrawable:(struct _xmlNode *)arg1 state:(NSObject *)arg2;
+ (char)readPlaceholderInfo:(NSDictionary *)arg0 clientData:(NSData *)arg1 toGraphic:(OAXGraphic *)arg2 presentationState:(NSObject *)arg3;
+ (void)readHyperlinkFromShapeContainerHolder:(id)arg0 toDrawable:(struct _xmlNode *)arg1 state:(NSObject *)arg2;
+ (char)readRecolorInfoFromClientDataHolder:(id)arg0 toClientData:(NSData *)arg1;
+ (char)readOleFromClientDataHolder:(id)arg0 toGraphic:(OAXGraphic *)arg1 tgtClientData:(NSData *)arg2 state:(NSObject *)arg3;
+ (void)addRecolorSpec:(struct PptRecolorSpec *)arg0 toDictionary:(struct PptRecolorSpec)arg1;
+ (PBOfficeArtReaderClient *)newTargetFromDrawable:(id)arg0 clientData:(NSData *)arg1 buildType:(int)arg2;
+ (int)presetIdFromFlyMethod:(int)arg0 isEntrance:(char)arg1;
+ (int)directionFromFlyDirection:(int)arg0;
+ (NSObject *)newBuildFromBuildType:(int)arg0;

@end

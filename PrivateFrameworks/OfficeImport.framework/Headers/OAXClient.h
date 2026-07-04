/* Runtime dump - OAXClient
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXClient : NSObject <OAXClient>

+ (char)sourceDrawableIsTopLevel:(struct _xmlNode *)arg0;

- (void)readClientDataFromNode:(struct _xmlNode *)arg0 toDrawable:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
- (void)readClientDataFromPictureNode:(struct _xmlNode *)arg0 toImage:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
- (void)postprocessHyperlink:(OADHyperlink *)arg0 relationship:(OCPPackageRelationship *)arg1 state:(OAXDrawingState *)arg2;
- (struct _xmlNode *)genericNonVisualPropertiesNodeForDrawableNode:(struct _xmlNode *)arg0 inNamespace:(struct _xmlNode *)arg1 state:(struct _xmlDoc *)arg2;
- (OADDrawable *)readClientDrawableFromXmlNode:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
- (void)readBlipExtWithURI:(NSString *)arg0 fromNode:(struct _xmlNode *)arg1 toDrawable:(struct _xmlNode *)arg2 state:(struct _xmlNode *)arg3;
- (OADImage *)readOle:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
- (OADDrawable *)readGraphicData:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
- (void)readClientDataFromGraphicalFramePropertiesNode:(struct _xmlNode *)arg0 toDrawable:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
- (void)readClientDataFromGroupNode:(struct _xmlNode *)arg0 toGroup:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
- (OADTextField *)readClientTextField:(struct _xmlNode *)arg0 paragraph:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
- (void)readClientDataFromShapeNode:(struct _xmlNode *)arg0 toShape:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
- (void)readClientDataFromGraphicDataNode:(struct _xmlNode *)arg0 toDiagram:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;

@end

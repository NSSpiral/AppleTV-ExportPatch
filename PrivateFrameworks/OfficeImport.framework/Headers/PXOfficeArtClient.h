/* Runtime dump - PXOfficeArtClient
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PXOfficeArtClient : OAXClient
{
    PXPresentationState * mPresentationState;
}

+ (int)readPlaceholderTypeFromNode:(struct _xmlNode *)arg0;
+ (int)readPlaceholderBoundsTrackFromNode:(struct _xmlNode *)arg0;

- (PXOfficeArtClient *)initWithState:(NSObject *)arg0;
- (void)readClientDataFromPictureNode:(struct _xmlNode *)arg0 toImage:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
- (void)postprocessHyperlink:(OADHyperlink *)arg0 relationship:(OCPPackageRelationship *)arg1 state:(OAXDrawingState *)arg2;
- (char)chartAutoFillIsHollow;
- (char)chartAutoStrokeIsHollow;
- (void)readBlipExtWithURI:(NSString *)arg0 fromNode:(struct _xmlNode *)arg1 toDrawable:(struct _xmlNode *)arg2 state:(struct _xmlNode *)arg3;
- (OADImage *)readOle:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
- (void)readClientDataFromGraphicalFramePropertiesNode:(struct _xmlNode *)arg0 toDrawable:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
- (OADTextField *)readClientTextField:(struct _xmlNode *)arg0 paragraph:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
- (void)readClientDataFromShapeNode:(struct _xmlNode *)arg0 toShape:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
- (NSObject *)presentationState;

@end

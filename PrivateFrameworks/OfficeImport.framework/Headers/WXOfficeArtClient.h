/* Runtime dump - WXOfficeArtClient
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WXOfficeArtClient : OAXClient

- (void)readClientDataFromNode:(struct _xmlNode *)arg0 toDrawable:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
- (struct _xmlNode *)genericNonVisualPropertiesNodeForDrawableNode:(struct _xmlNode *)arg0 inNamespace:(struct _xmlNode *)arg1 state:(struct _xmlDoc *)arg2;
- (OADDrawable *)readClientDrawableFromXmlNode:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
- (void)readBlipExtWithURI:(NSString *)arg0 fromNode:(struct _xmlNode *)arg1 toDrawable:(struct _xmlNode *)arg2 state:(struct _xmlNode *)arg3;
- (OADDrawable *)readGraphicData:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;

@end

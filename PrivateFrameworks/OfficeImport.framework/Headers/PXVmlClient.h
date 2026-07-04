/* Runtime dump - PXVmlClient
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PXVmlClient : NSObject <OAVReadClient>

+ (void)readClientDataFromShape:(struct _xmlNode *)arg0 toGraphic:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readClientDataFromGroup:(struct _xmlNode *)arg0 toGroup:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (int)vmlSupportLevel;
+ (NSString *)colorWithRecolorInfoColorString:(NSString *)arg0;

@end

/* Runtime dump - EXVmlClient
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXVmlClient : NSObject <OAVReadClient>

+ (void)readClientDataFromShape:(struct _xmlNode *)arg0 toGraphic:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readClientDataFromGroup:(struct _xmlNode *)arg0 toGroup:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (int)vmlSupportLevel;
+ (void)readAnchor:(struct _xmlNode *)arg0 to:(struct _xmlNode *)arg1;
+ (EXVmlClient *)readComment:(struct _xmlNode *)arg0 to:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (EXVmlClient *)edTextBoxForVmlTextInShape:(struct _xmlNode *)arg0 to:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;

@end

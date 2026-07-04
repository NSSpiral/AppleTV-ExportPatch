/* Runtime dump - WXVmlReadClient
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WXVmlReadClient : NSObject <OAVReadClient>

+ (void)initialize;
+ (void)readClientDataFromShape:(struct _xmlNode *)arg0 toGraphic:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readClientDataFromGroup:(struct _xmlNode *)arg0 toGroup:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (int)vmlSupportLevel;
+ (int)horizontalPosition:(int)arg0;
+ (int)relativeHorizontalPosition:(int)arg0;
+ (int)verticalPosition:(int)arg0;
+ (int)relativeVerticalPosition:(int)arg0;
+ (double)wrapDistanceLeft:(double)arg0;
+ (double)wrapDistanceTop:(double)arg0;
+ (double)wrapDistanceRight:(double)arg0;
+ (double)wrapDistanceBottom:(double)arg0;
+ (char)floating:(char)arg0;
+ (int)zIndex:(struct CGSize)arg0;
+ (void)readTextWrappingFromParent:(struct _xmlNode *)arg0 toAnchor:(struct _xmlNode *)arg1;
+ (void)readFromDrawable:(struct _xmlNode *)arg0 toContent:(struct _xmlNode *)arg1;
+ (void)copyFromDrawable:(id)arg0 toContent:(NSObject *)arg1;

@end

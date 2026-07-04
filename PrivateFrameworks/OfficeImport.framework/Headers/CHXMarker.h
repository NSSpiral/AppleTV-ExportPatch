/* Runtime dump - CHXMarker
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXMarker : NSObject

+ (NSObject *)chdMarkerFromXmlMarkerElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (int)chdMarkerStyleFromXmlMarkerStyleElement:(struct _xmlNode *)arg0;
+ (NSObject *)stringFromMarkerStyle:(int)arg0;

@end

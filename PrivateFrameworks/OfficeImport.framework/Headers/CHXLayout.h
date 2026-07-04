/* Runtime dump - CHXLayout
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXLayout : NSObject

+ (struct CGRect)boundsRectFromXmlManualLayoutElement:(NSObject *)arg0 state:(SEL)arg1;
+ (void)readFrom:(struct _xmlNode *)arg0 graphicProperties:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (CHXLayout *)stringFromLayoutMode:(int)arg0;

@end

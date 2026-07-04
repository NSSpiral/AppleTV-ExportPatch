/* Runtime dump - WXOfficeArt
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WXOfficeArt : NSObject

+ (void)initialize;
+ (void)readFrom:(struct _xmlNode *)arg0 parentRElement:(struct _xmlNode *)arg1 parentParagraph:(struct _xmlNode *)arg2 state:(struct _xmlNode *)arg3 to:(struct _xmlNode *)arg4;
+ (void)readOAX:(struct _xmlNode *)arg0 parentRElement:(struct _xmlNode *)arg1 parentParagraph:(struct _xmlNode *)arg2 state:(struct _xmlNode *)arg3 to:(struct _xmlNode *)arg4;
+ (void)readVml:(struct _xmlNode *)arg0 parentRElement:(struct _xmlNode *)arg1 parentParagraph:(struct _xmlNode *)arg2 state:(struct _xmlNode *)arg3 to:(struct _xmlNode *)arg4;
+ (void)readClientData:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1 to:(struct _xmlNode *)arg2;
+ (void)readPosition:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1 to:(struct _xmlNode *)arg2 isHorizontal:(struct _xmlNode *)arg3;
+ (void)readWrap:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1 to:(struct _xmlNode *)arg2;
+ (void)readWrapDistance:(struct _xmlNode *)arg0 parentElement:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2 to:(struct _xmlNode *)arg3;
+ (void)writeWrapText:(NSString *)arg0 to:(NSObject *)arg1;
+ (void)writeWrapLeftDistance:(id)arg0 to:(NSObject *)arg1;
+ (void)writeWrapRightDistance:(id)arg0 to:(NSObject *)arg1;
+ (void)writeWrapPolygonChildren:(NSArray *)arg0 to:(NSObject *)arg1;
+ (void)writeWrapTopDistance:(id)arg0 to:(NSObject *)arg1;
+ (void)writeWrapBottomDistance:(id)arg0 to:(NSObject *)arg1;
+ (char)writeWrapTightlyWith:(id)arg0 toWriter:(NSObject *)arg1;

@end

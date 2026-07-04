/* Runtime dump - OAXTextCharPropertyBag
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXTextCharPropertyBag : NSObject

+ (void)readCharacterProperties:(struct _xmlNode *)arg0 characterProperties:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readUnderlineType:(NSObject *)arg0 underline:(TSSSpecInteger *)arg1;
+ (void)readUnderlineFill:(struct _xmlNode *)arg0 underline:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readFormatting:(struct _xmlNode *)arg0 characterProperties:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readFont:(struct _xmlNode *)arg0 characterProperties:(struct _xmlNode *)arg1;
+ (NSObject *)stringWithCapsType:(int)arg0;
+ (NSObject *)stringWithStrikeThroughType:(int)arg0;
+ (NSObject *)stringWithUnderlineType:(int)arg0;

@end

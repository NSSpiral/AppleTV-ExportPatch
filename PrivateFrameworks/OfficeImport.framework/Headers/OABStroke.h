/* Runtime dump - OABStroke
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABStroke : NSObject

+ (int)readPresetDashStyle:(int)arg0;
+ (int)readLineEndType:(int)arg0;
+ (int)readLineEndWidth:(int)arg0;
+ (int)readLineEndLength:(int)arg0;
+ (int)readCapStyle:(int)arg0;
+ (int)readCompoundType:(int)arg0;
+ (NSObject *)readLineEndWithType:(int)arg0 width:(int)arg1 length:(int)arg2;
+ (int)writeCompoundType:(int)arg0;
+ (int)writePresetDashStyle:(int)arg0;
+ (int)writeLineEndType:(int)arg0;
+ (int)writeLineEndWidth:(int)arg0;
+ (int)writeLineEndLength:(int)arg0;
+ (int)writeCapStyle:(int)arg0;
+ (void)writePresetDashStyleForCustomDash:(id)arg0 toStroke:(struct EshStroke *)arg1 state:(NSObject *)arg2;
+ (NSObject *)readStrokeFromShapeBaseManager:(NSObject *)arg0 colorPalette:(<OADColorPalette> *)arg1;

@end

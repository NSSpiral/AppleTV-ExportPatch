/* Runtime dump - OAXBlipEffects
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXBlipEffects : NSObject

+ (NSObject *)readLuminanceEffect:(struct _xmlNode *)arg0;
+ (NSObject *)readGrayscaleEffect:(struct _xmlNode *)arg0;
+ (NSObject *)readBiLevelEffect:(struct _xmlNode *)arg0;
+ (NSObject *)readColorChangeEffect:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (NSObject *)readAlphaModFixEffect:(struct _xmlNode *)arg0;
+ (NSObject *)readDuotoneEffect:(struct _xmlNode *)arg0;
+ (void)writeAlphaModFixEffect:(NSObject *)arg0 to:(NSObject *)arg1;
+ (void)writeBiLevelEffect:(NSObject *)arg0 to:(NSObject *)arg1;
+ (void)writeColorChangeEffect:(NSObject *)arg0 to:(NSObject *)arg1;
+ (void)writeDuotoneEffect:(NSObject *)arg0 to:(NSObject *)arg1;
+ (void)writeGrayscaleEffect:(NSObject *)arg0 to:(NSObject *)arg1;
+ (void)writeLuminanceEffect:(NSObject *)arg0 to:(NSObject *)arg1;
+ (void)readBlipEffectsFromBlipRef:(struct _xmlNode *)arg0 toBlipRef:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)writeBlipEffects:(id)arg0 to:(NSObject *)arg1;
+ (NSObject *)duotoneTransferModeEnumMap;

@end

/* Runtime dump - WBOfficeArtReaderClient
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBOfficeArtReaderClient : NSObject <OABReaderClient>

+ (char)tablesAreAllowed;
+ (void)readClientDataFromShape:(ESDObject *)arg0 toGraphic:(OADGraphic *)arg1 state:(OABReaderState *)arg2;
+ (void)readClientDataFromGroup:(ESDContainer *)arg0 toGroup:(OADGroup *)arg1 state:(OABReaderState *)arg2;
+ (void)readClientDataFromTableCell:(ESDObject *)arg0 toTableCell:(OADTableCell *)arg1 state:(OABReaderState *)arg2;
+ (char)escherIsFullySupported;
+ (int)horizontalPosition:(struct EshContentProperties *)arg0;
+ (int)relativeHorizontalPosition:(struct EshContentProperties *)arg0;
+ (int)verticalPosition:(struct EshContentProperties *)arg0;
+ (int)relativeVerticalPosition:(struct EshContentProperties *)arg0;
+ (double)wrapDistanceLeft:(struct EshContentProperties *)arg0;
+ (double)wrapDistanceTop:(struct EshContentProperties *)arg0;
+ (double)wrapDistanceRight:(struct EshContentProperties *)arg0;
+ (double)wrapDistanceBottom:(struct EshContentProperties *)arg0;
+ (BOOL)allowOverlap:(struct EshContentProperties *)arg0;
+ (BOOL)behindText:(struct EshContentProperties *)arg0;
+ (void)readFrom:(struct EshContentProperties *)arg0 to:(NSObject *)arg1;

@end

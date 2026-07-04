/* Runtime dump - WBList
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBList : NSObject

+ (void)write:(char *)arg0 list:(BRListControl *)arg1 to:(struct WrdListFormatOverride *)arg2;
+ (void)readFrom:(NSObject *)arg0 list:(BRListControl *)arg1 override:(struct WrdListFormatOverride *)arg2;

@end

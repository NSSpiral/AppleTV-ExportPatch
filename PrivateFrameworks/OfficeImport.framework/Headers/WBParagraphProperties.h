/* Runtime dump - WBParagraphProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBParagraphProperties : NSObject

+ (void)readFrom:(NSObject *)arg0 wrdProperties:(struct WrdParagraphProperties *)arg1 tracked:(struct WrdShading *)arg2 document:(struct WrdLineSpaceDescriptor *)arg3 properties:(struct WrdDropCap *)arg4;
+ (struct WrdParagraphProperties *)createTrackedPropertiesIfNeeded:(struct WrdDropCap *)arg0;
+ (NSDate *)formattingChangeDate:(struct WrdDateTime *)arg0;
+ (void)mapWordProperties:(struct WrdParagraphProperties *)arg0 reader:(struct WrdShading *)arg1 toProperties:(struct WrdLineSpaceDescriptor *)arg2;

@end

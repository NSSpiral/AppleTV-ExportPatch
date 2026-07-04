/* Runtime dump - WBCharacterProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBCharacterProperties : NSObject

+ (void)readFrom:(NSObject *)arg0 wrdProperties:(struct WrdCharacterProperties *)arg1 document:(struct CsColour)arg2 properties:(struct CsColour)arg3;
+ (void)readFrom:(NSObject *)arg0 wrdProperties:(struct WrdCharacterProperties *)arg1 tracked:(struct CsColour)arg2 document:(struct CsColour)arg3 properties:(struct CsString)arg4;
+ (void)prepareForWriting:(id)arg0 properties:(NSDictionary *)arg1 wrdProperties:(struct WrdCharacterProperties *)arg2 tracked:(struct CsColour)arg3;
+ (struct WrdCharacterProperties *)createTrackedPropertiesIfNeeded:(struct CsString)arg0;
+ (NSDate *)formattingChangeDate:(struct WrdDateTime *)arg0;

@end

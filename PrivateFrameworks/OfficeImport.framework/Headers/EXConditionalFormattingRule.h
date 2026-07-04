/* Runtime dump - EXConditionalFormattingRule
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXConditionalFormattingRule : NSObject

+ (void)initialize;
+ (void)readFrom:(struct _xmlNode *)arg0 x14:(struct _xmlNode *)arg1 edConditionalFormatting:(struct _xmlNode *)arg2 edReference:(struct _xmlNode *)arg3 state:(struct _xmlNode *)arg4;
+ (int)edRuleTypeFromXmlRuleTypeString:(NSString *)arg0;
+ (int)edOperatorFromXmlOperatorString:(NSString *)arg0;
+ (int)edTimePeriodFromXmlTimePeriodString:(NSString *)arg0;

@end

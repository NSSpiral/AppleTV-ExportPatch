/* Runtime dump - TSCHPrefixSuffixCustomDataFormatter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPrefixSuffixCustomDataFormatter : TSCHCustomDataFormatter
{
    NSString * mPrefixString;
    NSString * mSuffixString;
}

+ (NSString *)dataFormatterWithCustomFormat:(TSUCustomFormat *)arg0 customFormatListKey:(NSString *)arg1 formatType:(int)arg2 prefixString:(NSString *)arg3 suffixString:(NSString *)arg4;

- (id)chartFormattedStringForValue:(id)arg0 locale:(NSObject *)arg1;
- (NSObject *)convertToPersistableStyleObject;
- (NSLocale *)convertToSupportedClientFormatObjectWithLocale:(NSObject *)arg0;
- (TSCHPrefixSuffixCustomDataFormatter *)initWithCustomFormat:(TSUCustomFormat *)arg0 customFormatListKey:(NSString *)arg1 formatType:(int)arg2 prefixString:(NSString *)arg3 suffixString:(NSString *)arg4;
- (NSString *)p_formattedStringWithBodyString:(NSString *)arg0;
- (void)dealloc;

@end

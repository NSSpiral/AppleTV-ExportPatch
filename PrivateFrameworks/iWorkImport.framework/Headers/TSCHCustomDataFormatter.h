/* Runtime dump - TSCHCustomDataFormatter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHCustomDataFormatter : NSObject <TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject>
{
    TSUCustomFormat * mCustomFormat;
    NSUUID * mCustomFormatListKey;
    int mFormatType;
}

@property (readonly, nonatomic) TSUCustomFormat * customFormat;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)dataFormatterWithCustomFormat:(TSUCustomFormat *)arg0 customFormatListKey:(NSString *)arg1 formatType:(int)arg2;

- (id)chartFormattedStringForValue:(id)arg0 locale:(NSObject *)arg1;
- (id)chartFormattedInspectorStringForValue:(id)arg0 locale:(NSObject *)arg1;
- (char)isCompatibleWithDataFormatter:(NSObject *)arg0;
- (NSObject *)convertToPersistableStyleObject;
- (NSLocale *)convertToSupportedClientFormatObjectWithLocale:(NSObject *)arg0;
- (int)numberOfDecimalPlaces;
- (TSCHCustomDataFormatter *)initWithCustomFormat:(TSUCustomFormat *)arg0 customFormatListKey:(NSString *)arg1 formatType:(int)arg2;
- (TSUCustomFormat *)customFormat;
- (id)p_stringForValue:(id)arg0 locale:(NSObject *)arg1;
- (void)dealloc;
- (int)formatType;

@end

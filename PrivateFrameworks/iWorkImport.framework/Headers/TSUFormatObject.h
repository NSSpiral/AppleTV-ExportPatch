/* Runtime dump - TSUFormatObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUFormatObject : NSObject <TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject, TSCHCustomFormatSupport, NSCopying, NSMutableCopying>
{
    struct ? mFormatStruct;
    char mUseExpandedContents;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) struct ? formatStruct;
@property (readonly, nonatomic) char useExpandedContents;

+ (TSUFormatObject *)defaultDateFormat:(NSString *)arg0;
+ (TSUFormatObject *)instanceWithArchive:(struct FormatStructArchive *)arg0 unarchiver:(struct FormatStructArchive)arg1;
+ (TSUFormatObject *)defaultDurationFormat;

- (void)saveToArchive:(struct FormatStructArchive *)arg0 archiver:(struct /* ? */)arg1;
- (TSUFormatObject *)initWithArchive:(struct FormatStructArchive *)arg0 unarchiver:(struct FormatStructArchive)arg1;
- (NSString *)customFormatListKey;
- (NSObject *)dataFormatterForDocumentRoot:(NSObject *)arg0;
- (id)chartFormattedStringForValue:(id)arg0 locale:(NSObject *)arg1;
- (id)chartFormattedInspectorStringForValue:(id)arg0 locale:(NSObject *)arg1;
- (char)isCompatibleWithDataFormatter:(NSObject *)arg0;
- (NSObject *)convertToPersistableStyleObject;
- (NSLocale *)convertToSupportedClientFormatObjectWithLocale:(NSObject *)arg0;
- (int)numberOfDecimalPlaces;
- (char)isCustom;
- (void)dealloc;
- (TSUFormatObject *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSUFormatObject *)copyWithZone:(struct _NSZone *)arg0;
- (TSUFormatObject *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (int)formatType;
- (TSUFormatObject *)initWithTSUFormatFormatStruct:(struct ?)arg0;
- (TSUFormatObject *)initWithTSUFormatFormatStruct:(struct ?)arg0 useExpandedContents:(struct ?)arg1;
- (struct ?)formatStruct;
- (char)useExpandedContents;
- (void)p_setFormatStruct:(struct ?)arg0;

@end

/* Runtime dump - TSAExportableDocumentType
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAExportableDocumentType : NSObject
{
    NSString * _type;
    NSString * _localizedName;
    TSUColor * _exportFormatChooserItemTextColor;
    NSString * _exportProgressMessage;
}

@property (readonly, nonatomic) NSString * type;
@property (readonly, nonatomic) NSString * localizedName;
@property (readonly, nonatomic) TSUColor * exportFormatChooserItemTextColor;
@property (readonly, nonatomic) NSString * exportProgressMessage;

+ (NSObject *)exportableTypeWithType:(NSString *)arg0 localizedName:(NSString *)arg1 exportFormatChooserItemTextColor:(TSUColor *)arg2 exportProgressMessage:(NSString *)arg3;
+ (NSObject *)exportableTypeWithType:(NSString *)arg0 localizedName:(NSString *)arg1 exportFormatChooserItemTextColor:(TSUColor *)arg2;

- (TSAExportableDocumentType *)initWithType:(NSString *)arg0 localizedName:(NSString *)arg1 exportFormatChooserItemTextColor:(TSUColor *)arg2 exportProgressMessage:(NSString *)arg3;
- (TSUColor *)exportFormatChooserItemTextColor;
- (NSString *)exportProgressMessage;
- (void)dealloc;
- (NSString *)description;
- (NSString *)type;
- (NSString *)localizedName;

@end

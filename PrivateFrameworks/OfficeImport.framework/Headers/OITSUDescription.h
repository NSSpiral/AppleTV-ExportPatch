/* Runtime dump - OITSUDescription
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDescription : NSObject
{
    NSObject * _object;
    Class _class;
    void * _cfType;
    NSString * _header;
    NSMutableDictionary * _fields;
    NSMutableArray * _fieldOrder;
    unsigned int _fieldNameWidth;
    char _commaSeparated;
}

+ (NSObject *)descriptionWithObject:(NSObject *)arg0 format:(NSString *)arg1;
+ (NSObject *)descriptionWithObject:(NSObject *)arg0 class:(Class)arg1 format:(NSString *)arg2;
+ (NSObject *)descriptionWithObject:(NSObject *)arg0 class:(Class)arg1;
+ (NSObject *)descriptionWithCFType:(void *)arg0 format:(NSString *)arg1;
+ (NSObject *)descriptionWithObject:(NSObject *)arg0;

- (void)dealloc;
- (OITSUDescription *)initWithObject:(NSObject *)arg0;
- (OITSUDescription *)initWithObject:(NSObject *)arg0 class:(Class)arg1 header:(NSString *)arg2;
- (OITSUDescription *)initWithObject:(NSObject *)arg0 class:(Class)arg1 format:(NSString *)arg2 arguments:(void *)arg3;
- (OITSUDescription *)initWithObject:(NSObject *)arg0 class:(Class)arg1 format:(NSString *)arg2;
- (OITSUDescription *)initWithCFType:(void *)arg0 header:(NSString *)arg1;
- (void)addField:(UISearchBarTextField *)arg0 value:(NSObject *)arg1;
- (void)addFieldWithFormat:(NSString *)arg0;
- (void)addFieldValue:(CKDPRecordFieldValue *)arg0;
- (NSString *)p_header;
- (OITSUDescription *)initWithObject:(NSObject *)arg0 format:(NSString *)arg1;
- (void)addField:(UISearchBarTextField *)arg0 format:(NSString *)arg1;
- (void)addSuperDescription;
- (void)setFieldOptionCommaSeparated;
- (NSString *)descriptionString;

@end

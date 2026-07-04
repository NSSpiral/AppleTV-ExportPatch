/* Runtime dump - OITSUDurationFormat
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDurationFormat : NSObject <NSCopying, TSUDataFormat>
{
    NSString * mFormat;
    NSString * mName;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)formatWithFormat:(NSString *)arg0 name:(NSString *)arg1;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (OITSUDurationFormat *)copyWithZone:(struct _NSZone *)arg0;
- (OITSUDurationFormat *)initWithFormat:(NSString *)arg0 name:(NSString *)arg1;
- (NSString *)formatName;
- (void)setFormatName:(NSString *)arg0;
- (NSString *)format;

@end

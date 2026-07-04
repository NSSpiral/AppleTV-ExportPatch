/* Runtime dump - OITSUFormatReferenceObject
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUFormatReferenceObject : NSObject <NSCopying, NSMutableCopying>
{
    struct ? mFormatStruct;
    char mUseExpandedContents;
}

@property (readonly, nonatomic) struct ? formatStruct;
@property (readonly, nonatomic) char useExpandedContents;

+ (OITSUFormatReferenceObject *)defaultDateFormat;
+ (OITSUFormatReferenceObject *)defaultDurationFormat;

- (void)dealloc;
- (OITSUFormatReferenceObject *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OITSUFormatReferenceObject *)copyWithZone:(struct _NSZone *)arg0;
- (OITSUFormatReferenceObject *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (OITSUFormatReferenceObject *)initWithTSUFormatFormatStruct:(struct ?)arg0;
- (OITSUFormatReferenceObject *)initWithTSUFormatFormatStruct:(struct ?)arg0 useExpandedContents:(struct ?)arg1;
- (struct ?)formatStruct;
- (char)useExpandedContents;
- (void)p_setFormatStruct:(struct ?)arg0;

@end

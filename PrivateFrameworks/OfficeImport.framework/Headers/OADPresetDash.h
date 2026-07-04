/* Runtime dump - OADPresetDash
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADPresetDash : OADDash
{
    unsigned char mType;
    id mIsTypeOverridden;
}

+ (OADPresetDash *)defaultProperties;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setType:(int)arg0;
- (int)type;
- (OADPresetDash *)copyWithZone:(struct _NSZone *)arg0;
- (id)equivalentCustomDash;
- (OADPresetDash *)initWithDefaults;
- (char)isTypeOverridden;

@end

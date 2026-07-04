/* Runtime dump - OADCustomPattern
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADCustomPattern : OADPattern
{
    OADBlipRef * mBlipRef;
    char mIsBlipRefOverridden;
}

+ (OADCustomPattern *)defaultProperties;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADCustomPattern *)copyWithZone:(struct _NSZone *)arg0;
- (char)isBlipRefOverridden;
- (OADBlipRef *)blipRef;
- (void)setBlipRef:(OADBlipRef *)arg0;
- (OADCustomPattern *)initWithDefaults;

@end

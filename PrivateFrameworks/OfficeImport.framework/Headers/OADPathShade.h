/* Runtime dump - OADPathShade
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADPathShade : OADShade
{
    OADRelativeRect * mFillToRect;
    char mIsFillToRectOverridden;
    int mType;
    char mIsTypeOverridden;
}

+ (OADPathShade *)defaultProperties;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setType:(int)arg0;
- (int)type;
- (OADPathShade *)copyWithZone:(struct _NSZone *)arg0;
- (NSObject *)fillToRect;
- (void)setFillToRect:(NSObject *)arg0;
- (char)isFillToRectOverridden;
- (OADPathShade *)initWithDefaults;
- (char)isTypeOverridden;

@end

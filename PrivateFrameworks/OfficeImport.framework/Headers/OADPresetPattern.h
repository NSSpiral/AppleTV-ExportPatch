/* Runtime dump - OADPresetPattern
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADPresetPattern : OADPattern
{
    int mType;
    char mIsTypeOverridden;
}

+ (OADPresetPattern *)defaultProperties;
+ (NSObject *)nameForPresetPatternType:(int)arg0;
+ (NSObject *)namedBitmapDataForPresetPatternType:(int)arg0;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setType:(int)arg0;
- (int)type;
- (OADPresetPattern *)copyWithZone:(struct _NSZone *)arg0;
- (OADPresetPattern *)initWithDefaults;
- (char)isTypeOverridden;

@end

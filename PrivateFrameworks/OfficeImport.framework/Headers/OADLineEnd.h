/* Runtime dump - OADLineEnd
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADLineEnd : OADProperties <NSCopying>
{
    unsigned char mType;
    unsigned char mWidth;
    unsigned char mLength;
    id mIsTypeOverridden;
    id mIsWidthOverridden;
    id mIsLengthOverridden;
}

+ (OADLineEnd *)defaultProperties;
+ (NSObject *)stringForLineEndType:(int)arg0;
+ (OADLineEnd *)stringForLineEndWidth:(int)arg0;
+ (OADLineEnd *)stringForLineEndLength:(int)arg0;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)length;
- (void)setType:(int)arg0;
- (int)type;
- (OADLineEnd *)copyWithZone:(struct _NSZone *)arg0;
- (int)width;
- (void)setLength:(int)arg0;
- (void)setWidth:(int)arg0;
- (char)isWidthOverridden;
- (OADLineEnd *)initWithDefaults;
- (char)isTypeOverridden;
- (char)isLengthOverridden;
- (OADLineEnd *)initWithType:(int)arg0 width:(int)arg1 length:(int)arg2;

@end

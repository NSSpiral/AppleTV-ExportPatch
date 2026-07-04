/* Runtime dump - OADEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADEffect : NSObject <NSCopying>
{
    int mType;
}

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)type;
- (OADEffect *)copyWithZone:(struct _NSZone *)arg0;
- (OADEffect *)initWithType:(int)arg0;
- (void)setStyleColor:(UIColor *)arg0;

@end

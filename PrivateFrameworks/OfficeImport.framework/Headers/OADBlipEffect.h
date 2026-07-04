/* Runtime dump - OADBlipEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADBlipEffect : NSObject <NSCopying>
{
    int mType;
}

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (int)type;
- (OADBlipEffect *)copyWithZone:(struct _NSZone *)arg0;
- (OADBlipEffect *)initWithType:(int)arg0;
- (void)setStyleColor:(UIColor *)arg0;

@end

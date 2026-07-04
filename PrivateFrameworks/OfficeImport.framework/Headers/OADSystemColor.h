/* Runtime dump - OADSystemColor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADSystemColor : OADColor
{
    int mSystemColorID;
}

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADSystemColor *)copyWithZone:(struct _NSZone *)arg0;
- (OADSystemColor *)initWithSystemColorID:(int)arg0;
- (int)systemColorID;

@end

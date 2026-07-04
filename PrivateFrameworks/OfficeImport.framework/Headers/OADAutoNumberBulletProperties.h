/* Runtime dump - OADAutoNumberBulletProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADAutoNumberBulletProperties : OADBulletProperties
{
    int mSchemeType;
    unsigned int mStartIndex;
}

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)startIndex;
- (int)autoNumberSchemeType;
- (OADAutoNumberBulletProperties *)initWithAutoNumberSchemeType:(int)arg0 startIndex:(unsigned int)arg1;

@end

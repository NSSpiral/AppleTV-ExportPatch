/* Runtime dump - OADDashStop
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADDashStop : NSObject <NSCopying>
{
    float mDash;
    float mSpace;
}

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADDashStop *)copyWithZone:(struct _NSZone *)arg0;
- (float)dash;
- (float)space;
- (OADDashStop *)initWithDash:(float)arg0 space:(float)arg1;

@end

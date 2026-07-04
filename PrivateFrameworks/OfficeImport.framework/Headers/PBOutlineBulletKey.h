/* Runtime dump - PBOutlineBulletKey
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBOutlineBulletKey : NSObject <NSCopying>
{
    unsigned long mSlideId;
    int mTextType;
    unsigned long mPlaceholderIndex;
}

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (PBOutlineBulletKey *)copyWithZone:(struct _NSZone *)arg0;
- (PBOutlineBulletKey *)initWithOutlineBullet:(id)arg0;
- (PBOutlineBulletKey *)initWithSlideId:(unsigned long)arg0 textType:(int)arg1 placeholderIndex:(unsigned long)arg2;

@end

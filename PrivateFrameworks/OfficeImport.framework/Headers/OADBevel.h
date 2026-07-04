/* Runtime dump - OADBevel
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADBevel : NSObject <NSCopying>
{
    int mType;
    float mWidth;
    float mHeight;
}

- (OADBevel *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setType:(int)arg0;
- (int)type;
- (OADBevel *)copyWithZone:(struct _NSZone *)arg0;
- (float)width;
- (float)height;
- (void)setWidth:(float)arg0;
- (void)setHeight:(float)arg0;

@end

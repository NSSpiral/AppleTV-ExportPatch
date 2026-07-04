/* Runtime dump - OADRelativeRect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADRelativeRect : NSObject <NSCopying>
{
    float mLeft;
    float mTop;
    float mRight;
    float mBottom;
}

- (OADRelativeRect *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (OADRelativeRect *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLeft:(float)arg0;
- (OADRelativeRect *)initWithLeft:(float)arg0 top:(float)arg1 right:(float)arg2 bottom:(float)arg3;
- (float)bottom;
- (void)setBottom:(float)arg0;
- (float)left;
- (float)right;
- (void)setRight:(float)arg0;
- (float)top;
- (void)setTop:(float)arg0;

@end

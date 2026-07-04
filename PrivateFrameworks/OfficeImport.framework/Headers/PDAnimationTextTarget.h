/* Runtime dump - PDAnimationTextTarget
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimationTextTarget : PDAnimationShapeTarget
{
    int mType;
    struct _NSRange mRange;
}

- (PDAnimationTextTarget *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setType:(int)arg0;
- (int)type;
- (struct _NSRange)range;
- (void).cxx_construct;
- (void)setRange:(struct _NSRange)arg0;

@end

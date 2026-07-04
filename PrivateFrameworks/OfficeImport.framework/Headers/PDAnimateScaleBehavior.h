/* Runtime dump - PDAnimateScaleBehavior
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimateScaleBehavior : PDAnimateBehavior
{
    struct CGPoint mTo;
    struct CGPoint mFrom;
    struct CGPoint mBy;
}

- (PDAnimateScaleBehavior *)init;
- (char)isEqual:(NSObject *)arg0;
- (void).cxx_construct;
- (void)setFrom:(struct CGPoint)arg0;
- (struct CGPoint)from;
- (void)setTo:(struct CGPoint)arg0;
- (struct CGPoint)to;
- (struct CGPoint)by;
- (void)setBy:(struct CGPoint)arg0;

@end

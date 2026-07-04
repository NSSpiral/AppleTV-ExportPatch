/* Runtime dump - PDAnimateColorBehavior
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimateColorBehavior : PDAnimateBehavior
{
    OADColor * mBy;
    OADColor * mFrom;
    OADColor * mTo;
    int mColorSpace;
    int mDirection;
}

- (void)setColorSpace:(int)arg0;
- (int)colorSpace;
- (void)setDirection:(int)arg0;
- (int)direction;
- (void)setFrom:(NSObject *)arg0;
- (CKDPIdentifier *)from;
- (void)setTo:(NSArray *)arg0;
- (NSArray *)to;
- (double)by;
- (void)setBy:(double)arg0;

@end

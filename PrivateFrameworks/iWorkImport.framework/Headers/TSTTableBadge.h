/* Runtime dump - TSTTableBadge
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableBadge : NSObject
{
    int _badgeType;
    TSUColor * _color;
    float _viewScale;
    struct CGRect _frame;
}

@property (nonatomic) int badgeType;
@property (retain, nonatomic) TSUColor * color;
@property (nonatomic) float viewScale;
@property (nonatomic) struct CGRect frame;

+ (NSObject *)badgeWithType:(int)arg0 color:(TSUColor *)arg1 viewScale:(float)arg2 frame:(struct CGRect)arg3;

- (float)viewScale;
- (int)badgeType;
- (void)setBadgeType:(int)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (struct CGRect)frame;
- (TSUColor *)color;
- (void)setColor:(TSUColor *)arg0;
- (void)drawInContext:(struct CGContext *)arg0;
- (void)setViewScale:(float)arg0;

@end

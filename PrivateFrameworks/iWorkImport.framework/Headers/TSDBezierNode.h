/* Runtime dump - TSDBezierNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDBezierNode : NSObject
{
    struct CGPoint mIn;
    struct CGPoint mNode;
    struct CGPoint mOut;
    int mReflectedState;
    char mSelected;
    int mType;
}

@property (nonatomic) struct CGPoint nodePoint;
@property (nonatomic) struct CGPoint inControlPoint;
@property (nonatomic) struct CGPoint outControlPoint;
@property (nonatomic) int reflectedState;
@property (readonly, nonatomic) char isCollapsed;
@property (nonatomic) int type;
@property (nonatomic) char selected;

+ (NSObject *)bezierNodeWithPoint:(struct CGPoint)arg0;
+ (NSObject *)bezierNodeWithPoint:(struct CGPoint)arg0 inControlPoint:(struct CGPoint)arg1 outControlPoint:(struct CGPoint)arg2;

- (struct CGPoint)inControlPoint;
- (struct CGPoint)nodePoint;
- (struct CGPoint)outControlPoint;
- (void)setNodePoint:(struct CGPoint)arg0;
- (void)setInControlPoint:(struct CGPoint)arg0;
- (void)setOutControlPoint:(struct CGPoint)arg0;
- (void)setReflectedState:(int)arg0;
- (int)reflectedState;
- (NSString *)reflectedStateString;
- (void)balanceControlPoints;
- (void)setInControlPoint:(struct CGPoint)arg0 reflect:(int)arg1 constrain:(char)arg2;
- (void)setOutControlPoint:(struct CGPoint)arg0 reflect:(int)arg1 constrain:(char)arg2;
- (void)setInControlPointFromReflection:(struct CGPoint)arg0 constrain:(char)arg1;
- (void)collapse;
- (void)updateReflectedState;
- (void)swapControlPoints;
- (char)underPoint:(struct CGPoint)arg0 withTransform:(struct CGAffineTransform)arg1 andTolerance:(float)arg2 returningType:(int *)arg3;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (void)moveToPoint:(struct CGPoint)arg0;
- (TSDBezierNode *)copyWithZone:(struct _NSZone *)arg0;
- (char)isSelected;
- (void)setSelected:(char)arg0;
- (char)isCollapsed;
- (void)setNode:(struct CGPoint)arg0;
- (NSString *)typeString;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg0;

@end

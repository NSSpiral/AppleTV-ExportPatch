/* Runtime dump - IKFourTuple
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKFourTuple : NSObject <NSCopying>
{
    NSString * _namedStyle;
    int _specifiedValueCount;
    id _values;
}

@property (readonly, nonatomic) NSString * namedStyle;
@property (readonly, nonatomic) struct IKCornerRadii cornerRadiiValue;
@property (readonly, nonatomic) struct UIEdgeInsets edgeInsetsValue;

- (struct UIEdgeInsets)edgeInsetsValue;
- (IKFourTuple *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (IKFourTuple *)initWithStyleString:(NSString *)arg0;
- (struct IKCornerRadii)cornerRadiiValue;
- (NSString *)namedStyle;

@end

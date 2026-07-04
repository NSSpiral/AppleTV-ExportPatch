/* Runtime dump - RUISelectOption
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUISelectOption : NSObject
{
    NSString * _label;
    NSString * _value;
}

@property (retain, nonatomic) NSString * label;
@property (retain, nonatomic) NSString * value;

- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void).cxx_destruct;

@end

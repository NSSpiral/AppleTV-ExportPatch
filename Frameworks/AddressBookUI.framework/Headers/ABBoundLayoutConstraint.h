/* Runtime dump - ABBoundLayoutConstraint
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABBoundLayoutConstraint : NSLayoutConstraint
{
    id _object;
    NSString * _keyPath;
}

@property (nonatomic) id object;
@property (copy, nonatomic) NSString * keyPath;

+ (NSObject *)constraintWithItem:(NSObject *)arg0 attribute:(int)arg1 relatedBy:(int)arg2 toItem:(NSObject *)arg3 attribute:(int)arg4 multiplier:(float)arg5 constantObject:(NSObject *)arg6 keyPath:(NSString *)arg7;

- (void)unbind;
- (void)bindConstantToObject:(NSObject *)arg0 keyPath:(NSString *)arg1;
- (void)_boundValueDidChange;
- (void)dealloc;
- (NSString *)keyPath;
- (void)setKeyPath:(NSString *)arg0;
- (NSObject *)object;
- (void)setObject:(NSObject *)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;

@end

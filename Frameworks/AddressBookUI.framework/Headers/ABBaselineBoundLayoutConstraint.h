/* Runtime dump - ABBaselineBoundLayoutConstraint
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABBaselineBoundLayoutConstraint : ABBoundLayoutConstraint
{
    float _baselineConstant;
    char _ignoreAccessibilitySizes;
}

@property char ignoreAccessibilitySizes;

+ (NSObject *)constraintWithItem:(NSObject *)arg0 attribute:(int)arg1 relatedBy:(int)arg2 toItem:(NSObject *)arg3 attribute:(int)arg4 textAttributesObject:(NSObject *)arg5 keyPath:(NSString *)arg6 baselineConstant:(float)arg7;

- (void)_boundValueDidChange;
- (char)ignoreAccessibilitySizes;
- (void)setIgnoreAccessibilitySizes:(char)arg0;

@end

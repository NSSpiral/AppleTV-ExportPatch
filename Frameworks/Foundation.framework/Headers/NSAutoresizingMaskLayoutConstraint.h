/* Runtime dump - NSAutoresizingMaskLayoutConstraint
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAutoresizingMaskLayoutConstraint : NSLayoutConstraint

+ (NSObject *)constraintsWithAutoresizingMask:(unsigned int)arg0 subitem:(id)arg1 frame:(struct CGRect)arg2 superitem:(struct CGSize)arg3 bounds:(struct CGRect)arg4;
+ (NSObject *)constraintWithItem:(NSObject *)arg0 attribute:(int)arg1 relatedBy:(int)arg2 toItem:(NSObject *)arg3 attribute:(int)arg4 multiplier:(float)arg5 constant:(float)arg6;

- (id)descriptionAccessory;
- (NSObject *)_viewForAutoresizingMask;
- (int)_constraintType;

@end

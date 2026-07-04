/* Runtime dump - UIKeyboardLayoutCursor
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardLayoutCursor : UIKeyboardLayoutStar
{
    UIKBTree * _indirectKeyboard;
    UIView * _selectionView;
    int _selectedKeyIndex;
    int _savedSelectedKeyIndex;
    char _useGridSelection;
    char _suppressOperations;
}

@property (readonly, nonatomic) UIKBTree * currentKey;

+ (struct CGSize)keyboardSizeForInputMode:(id)arg0 screenTraits:(UIKBScreenTraits *)arg1;
+ (UIKeyboardLayoutCursor *)carKeyboardNameForKeyboard:(id)arg0 screenTraits:(UIKBScreenTraits *)arg1;

- (UIKeyboardLayoutCursor *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)_physicalButtonsBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_physicalButtonsEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_physicalButtonsCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (char)_handlePhysicalButtonEvent:(NSObject *)arg0;
- (void)_handleKeyUIEvent:(NSObject *)arg0;
- (void)_wheelChangedWithEvent:(NSObject *)arg0;
- (void)_moveWithEvent:(NSObject *)arg0;
- (void)setKeyboardAppearance:(int)arg0;
- (void)remoteControlReceivedWithEvent:(NSObject *)arg0;
- (char)canHandleEvent:(NSObject *)arg0;
- (void)showKeyboardWithInputTraits:(UITextInputTraits *)arg0 screenTraits:(UIKBScreenTraits *)arg1 splitTraits:(NSArray *)arg2;
- (int)cursorLocation;
- (void)setCursorLocation:(int)arg0;
- (unsigned int)targetEdgesForScreenGestureRecognition;
- (void)flushKeyCache:(NSObject *)arg0;
- (void)setKeyplaneName:(NSString *)arg0;
- (id)cacheTokenForKeyplane:(id)arg0;
- (char)shouldMergeKey:(NSString *)arg0;
- (void)setKeyboardName:(NSString *)arg0 appearance:(int)arg1;
- (char)shouldPreventInputManagerHitTestingForKey:(NSString *)arg0;
- (char)shouldRetestKey:(NSString *)arg0 withKeyplane:(UIKBTree *)arg1;
- (void)setSelectedKeyIndex:(int)arg0;
- (int)enabledStateForKey:(NSString *)arg0;
- (UIKBTree *)currentKey;
- (int)activeStateForKey:(NSString *)arg0;
- (void)updateStatesForGridSelection;
- (void)setHighlightedVariantIndex:(int)arg0 key:(NSString *)arg1;
- (id)keyplaneKeyForCurrentKeyplane;
- (struct CGRect)selectionFrameForKeyIndex:(NSObject *)arg0;
- (void)deactivateCurrentKey;
- (char)_handleMoveWithEvent:(NSObject *)arg0;
- (char)_handleWheelChangedWithEvent:(NSObject *)arg0;
- (char)_handleRemoteControlReceivedWithEvent:(NSObject *)arg0;
- (char)_handlePhysicalKeyDownWithEvent:(NSObject *)arg0;
- (void)runWithSuppressedActions:(id)arg0;
- (void)takeKeyAction:(NSObject *)arg0;
- (int)keyIndexAtPoint:(struct CGPoint)arg0;
- (char)handleLinearDirectionalInput:(int)arg0;
- (char)handleVisualDirectionalInput:(int)arg0;
- (void)updateSelectionForCurrentKeyplane;

@end

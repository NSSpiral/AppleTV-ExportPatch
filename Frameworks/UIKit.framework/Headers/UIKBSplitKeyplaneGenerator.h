/* Runtime dump - UIKBSplitKeyplaneGenerator
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBSplitKeyplaneGenerator : NSObject
{
    NSMutableArray * _rows;
    NSDictionary * _splitLayoutHints;
    UIKBTree * _sourceKeyboard;
    UIKBTree * _sourceKeyplane;
    struct CGSize _splitKeySizeFactor;
    struct CGSize _keyboardSize;
    float _leftSideWidestRow;
    float _rightSideWidestRow;
    int _keyboardType;
    UIKeyboardSliceSet * _sliceSet;
    UIKeyboardTransitionSlice * _leftSlice;
    UIKeyboardTransitionSlice * _rightSlice;
}

- (void)dealloc;
- (UIKBSplitKeyplaneGenerator *)init;
- (id)generateRivenKeyplaneFromKeyplane:(id)arg0 forKeyboard:(UIKeyboard *)arg1;
- (NSObject *)keysOrderedByPosition;
- (void)addSliceStart:(struct CGRect)arg0 end:(struct CGSize)arg1 startToken:(UIKBCacheToken *)arg2 endToken:(struct CGRect)arg3 left:(struct CGSize)arg4 normalization:(int)arg5 isDefaultWidth:(id)arg6 row:(id)arg7;
- (void)splitSpaceKey:(NSString *)arg0 leftSpace:(NSObject *)arg1 left:(struct CGRect)arg2 right:(struct CGSize)arg3;
- (void)addKey:(NSString *)arg0 withShape:(NSString *)arg1 forRow:(id)arg2 attribs:(id)arg3 left:(char)arg4 force:(char)arg5 isDefaultWidth:(char)arg6;
- (void)commitUncommittedSlices;
- (void)alignSpaceKeyEdges;
- (id)hintsForRow:(id)arg0;
- (void)initializeGeneratorForKeyplane:(id)arg0 name:(NSString *)arg1;
- (void)organizeKeyplaneIntoRows;
- (void)splitRow:(UIKBSplitRow *)arg0;
- (id)finalizeSplitKeyplane;

@end

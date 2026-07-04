/* Runtime dump - UIKeyboardTransitionSlice
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardTransitionSlice : NSObject
{
    struct CGRect _startRect;
    struct CGRect _endRect;
    UIKBCacheToken * _startToken;
    UIKBCacheToken * _endToken;
    char _shiftContents;
    char _delayCrossfade;
    int _normalization;
}

@property struct CGRect startRect;
@property struct CGRect endRect;
@property (retain) UIKBCacheToken * startToken;
@property (retain) UIKBCacheToken * endToken;
@property int normalization;
@property char delayCrossfade;
@property (readonly) char hasGeometry;

+ (UIKeyboardTransitionSlice *)sliceWithStart:(struct CGRect)arg0 end:(struct CGSize)arg1;

- (void)dealloc;
- (UIKeyboardTransitionSlice *)init;
- (NSString *)description;
- (struct CGRect)endRect;
- (void)setStartRect:(struct CGRect)arg0;
- (void)setEndRect:(struct CGRect)arg0;
- (struct CGRect)startRect;
- (void)addStartRect:(struct CGRect)arg0 end:(struct CGSize)arg1;
- (char)hasGeometry;
- (UIKBCacheToken *)startToken;
- (void)setStartToken:(UIKBCacheToken *)arg0;
- (UIKBCacheToken *)endToken;
- (void)setEndToken:(UIKBCacheToken *)arg0;
- (int)normalization;
- (void)setNormalization:(int)arg0;
- (char)delayCrossfade;
- (void)setDelayCrossfade:(char)arg0;

@end

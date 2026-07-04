/* Runtime dump - UIKeyboardSliceSet
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSliceSet : NSObject
{
    NSString * _ssid;
    NSMutableSet * _slices;
    struct CGRect _startRect;
    struct CGRect _endRect;
    float _leftWidth;
    float _rightWidth;
    float _mergePoint;
    NSMutableDictionary * _controlKeys;
}

@property (readonly) NSMutableSet * slices;
@property (retain) NSString * sliceSetID;
@property struct CGRect startRect;
@property struct CGRect endRect;
@property float leftWidth;
@property float rightWidth;
@property float mergePoint;
@property NSMutableDictionary * controlKeys;

+ (UIKeyboardSliceSet *)sliceSetWithDictionaryRepresenation:(id)arg0;

- (void)dealloc;
- (NSString *)description;
- (struct CGRect)endRect;
- (NSString *)sliceSetID;
- (UIKeyboardSliceSet *)initWithSliceID:(NSObject *)arg0;
- (void)setStartRect:(struct CGRect)arg0;
- (void)setEndRect:(struct CGRect)arg0;
- (void)setLeftWidth:(float)arg0;
- (void)setRightWidth:(float)arg0;
- (void)addSlice:(TDSlice *)arg0;
- (NSMutableSet *)slices;
- (void)setSliceSetID:(NSString *)arg0;
- (struct CGRect)startRect;
- (float)leftWidth;
- (float)rightWidth;
- (float)mergePoint;
- (void)setMergePoint:(float)arg0;
- (NSMutableDictionary *)controlKeys;
- (void)setControlKeys:(NSMutableDictionary *)arg0;

@end

/* Runtime dump - UIKBSplitRow
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBSplitRow : NSObject
{
    unsigned char _rowIndex;
    float _rowOffset;
    float _rowWidth;
    struct CGSize _defaultKeySize;
    NSMutableArray * _keys;
    NSMutableArray * _vacancies;
    NSDictionary * _hints;
    UIKBTree * _keylistLeft;
    UIKBTree * _geolistLeft;
    UIKBTree * _attrlistLeft;
    UIKBTree * _keylistRight;
    UIKBTree * _geolistRight;
    UIKBTree * _attrlistRight;
}

@property (nonatomic) unsigned char rowIndex;
@property float rowOffset;
@property float rowWidth;
@property struct CGSize defaultKeySize;
@property (readonly) NSMutableArray * keys;
@property (retain) NSDictionary * hints;

- (void)dealloc;
- (UIKBSplitRow *)init;
- (NSString *)description;
- (unsigned char)rowIndex;
- (NSMutableArray *)keys;
- (void)setRowIndex:(unsigned char)arg0;
- (void)setHints:(NSDictionary *)arg0;
- (void)addKey:(NSString *)arg0;
- (NSObject *)keyAtIndex:(int)arg0;
- (NSObject *)listOfType:(int)arg0 left:(char)arg1;
- (float)rowOffset;
- (void)setRowOffset:(float)arg0;
- (float)rowWidth;
- (void)setRowWidth:(float)arg0;
- (struct CGSize)defaultKeySize;
- (void)setDefaultKeySize:(struct CGSize)arg0;
- (NSDictionary *)hints;

@end

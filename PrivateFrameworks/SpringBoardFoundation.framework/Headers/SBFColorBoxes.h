/* Runtime dump - SBFColorBoxes
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFColorBoxes : NSObject
{
    struct ? * * _colorBoxes;
    unsigned int _rowCount;
    unsigned int _columnCount;
    unsigned int _size;
    float _contrast;
}

@property (readonly, nonatomic) struct ? * * colorBoxes;
@property (readonly, nonatomic) unsigned int rowCount;
@property (readonly, nonatomic) unsigned int columnCount;
@property (readonly, nonatomic) unsigned int size;
@property (readonly, nonatomic) float contrast;

- (void)dealloc;
- (unsigned int)size;
- (NSString *)description;
- (float)contrast;
- (unsigned int)columnCount;
- (unsigned int)rowCount;
- (void)_freeColorBoxes;
- (SBFColorBoxes *)initWithColorBoxes:(struct ? * *)arg0 size:(struct ?)arg1 rowCount:(unsigned int)arg2 columnCount:(unsigned int)arg3 contrast:(unsigned int)arg4;
- (struct ? * *)colorBoxes;

@end
